# Cyclone Scheme
# Copyright (c) 2014, Justin Ethier
# All rights reserved.
#
# Makefile for bootstrapping cyclone from generated C files.

include Makefile.config

# Libraries
CYC_RT_LIB = libcyclone.a
CYC_BN_LIB = libcyclonebn.a
CYC_BN_LIB_SUBDIR = third-party/libtommath-1.2.0
CYC_LIBS = $(CYC_RT_LIB) $(CYC_BN_LIB)

COBJ = scheme/base \
 scheme/read \
 scheme/write \
 scheme/case-lambda \
 scheme/char \
 scheme/complex \
 scheme/cxr \
 scheme/eval \
 scheme/file \
 scheme/inexact \
 scheme/lazy \
 scheme/load \
 scheme/process-context \
 scheme/repl \
 scheme/time \
 scheme/cyclone/array-list \
 scheme/cyclone/common \
 scheme/cyclone/libraries \
 scheme/cyclone/macros \
 scheme/cyclone/transforms \
 scheme/cyclone/ast \
 scheme/cyclone/cps-optimizations \
 scheme/cyclone/cgen \
 scheme/cyclone/util \
 libs/cyclone/test \
 scheme/cyclone/pretty-print \
 scheme/cyclone/hashset \
 scheme/cyclone/primitives \
 libs/cyclone/concurrent \
 libs/cyclone/match \
 srfi/1 \
 srfi/2 \
 srfi/9 \
 srfi/18 \
 srfi/27 \
 srfi/28 \
 srfi/60 \
 srfi/69 \
 srfi/106 \
 srfi/111 \
 srfi/113 \
 srfi/117 \
 srfi/121 \
 srfi/128 \
 srfi/132 \
 srfi/133 \
 srfi/143

CFILES = $(addsuffix .c, $(COBJ))
COBJECTS=$(CFILES:.c=.o)
C_SHARED_OBJECTS=$(CFILES:.c=.so)

%.o: %.c %.h
	$(CC) $(CFLAGS) $< -c -o $@

%.so: %.o
	$(CC) -shared $(LDFLAGS) -o $@ $<

all: cyclone icyc-c

$(CYC_RT_LIB): runtime.c include/cyclone/runtime.h gc.c dispatch.c mstreams.c hashset.c $(CYC_BN_LIB)
	$(CC) $(CFLAGS) -c dispatch.c -o dispatch.o
	$(CC) $(CFLAGS) -c hashset.c -o hashset.o
	$(CC) $(CFLAGS) -c -std=gnu99 gc.c -o gc.o
	$(CC) $(CFLAGS) -c \
                  -DCYC_HAVE_OPEN_MEMSTREAM=$(CYC_PLATFORM_HAS_MEMSTREAM) \
                  -DCYC_HAVE_FMEMOPEN=$(CYC_PLATFORM_HAS_FMEMOPEN) \
                  mstreams.c -o mstreams.o
	$(CC) $(CFLAGS) -c \
  -DCYC_INSTALL_DIR=\"$(PREFIX)\" \
  -DCYC_INSTALL_LIB=\"$(LIBDIR)\" \
  -DCYC_INSTALL_BIN=\"$(BINDIR)\" \
  -DCYC_INSTALL_INC=\"$(INCDIR)\" \
  -DCYC_INSTALL_SLD=\"$(DATADIR)\" \
  -DCYC_CC_PROG=\"$(CC_PROG)\" \
  -DCYC_CC_EXEC=\"$(CC_EXEC)\" \
  -DCYC_CC_LIB=\"$(CC_LIB)\" \
  -DCYC_CC_SO=\"$(CC_SO)\" \
  -DCYC_PLATFORM=\"$(PLATFORM)\" \
  runtime.c -o runtime.o
	  $(CREATE_LIBRARY_COMMAND) $(CREATE_LIBRARY_FLAGS) $(LIBRARY_OUTPUT_FILE) runtime.o gc.o dispatch.o mstreams.o hashset.o
	  $(RANLIB_COMMAND)

$(CYC_BN_LIB) : $(CYC_BN_LIB_SUBDIR)/*.c
	cd $(CYC_BN_LIB_SUBDIR) ; make LIBNAME=$(CYC_BN_LIB) && cp $(CYC_BN_LIB) ../..

cyclone: $(CFILES) $(COBJECTS) $(C_SHARED_OBJECTS) $(CYC_LIBS)
	$(CC) cyclone.c $(CFLAGS) -c -o cyclone.o
	$(CC) cyclone.o $(COBJECTS) $(LIBS) $(LDFLAGS) -o cyclone

.PHONY: icyc-c
icyc-c: $(CFILES) $(COBJECTS) $(C_SHARED_OBJECTS) $(CYC_LIBS)
	$(CC) icyc.c $(CFLAGS) -c -o icyc.o
	$(CC) icyc.o $(COBJECTS) $(LIBS) $(LDFLAGS) -o icyc

icyc: cyclone
	./cyclone icyc.scm

.PHONY: test
test:
	$(MAKE) unit-tests

unit-tests: unit-tests.scm
	./cyclone unit-tests.scm && ./unit-tests

.PHONY: clean
clean:
	rm -rf *.o *.a *.so cyclone icyc unit-tests test.out test.txt scheme/*.o scheme/cyclone/*.o libs/cyclone/*.o srfi/*.o unit-tests.c
	rm -rf *.so scheme/*.so scheme/cyclone/*.so libs/cyclone/*.so srfi/*.so
	cd $(CYC_BN_LIB_SUBDIR) ; make clean

install:
#make install-deps
#make install-libs
#make install-cyclone
#install-deps:
	$(MKDIR) $(DESTDIR)$(LIBDIR)
	$(MKDIR) $(DESTDIR)$(INCDIR)
	$(MKDIR) $(DESTDIR)$(DATADIR)
	$(MKDIR) $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(MKDIR) $(DESTDIR)$(DATADIR)/cyclone
	$(MKDIR) $(DESTDIR)$(DATADIR)/srfi
	$(MKDIR) $(DESTDIR)$(DATADIR)/srfi/list-queues
	$(MKDIR) $(DESTDIR)$(DATADIR)/srfi/sorting
	$(INSTALL) -m0644 include/cyclone/*.h $(DESTDIR)$(INCDIR)/
	$(INSTALL) -m0644 scheme/*.sld $(DESTDIR)$(DATADIR)/scheme
	$(INSTALL) -m0644 scheme/cyclone/*.sld $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(INSTALL) -m0644 srfi/*.sld $(DESTDIR)$(DATADIR)/srfi
	$(INSTALL) -m0644 srfi/list-queues/*.scm $(DESTDIR)$(DATADIR)/srfi/list-queues
	$(INSTALL) -m0644 srfi/sorting/*.scm $(DESTDIR)$(DATADIR)/srfi/sorting
#install-libs:
	$(MKDIR) $(DESTDIR)$(LIBDIR)
	$(INSTALL) -m0644 $(CYC_RT_LIB) $(DESTDIR)$(LIBDIR)/
	$(INSTALL) -m0644 $(CYC_BN_LIB) $(DESTDIR)$(LIBDIR)/
#install-cyclone:
	$(MKDIR) $(DESTDIR)$(BINDIR)
	$(MKDIR) $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(MKDIR) $(DESTDIR)$(DATADIR)/srfi
	$(INSTALL) -m0755 cyclone $(DESTDIR)$(BINDIR)/
	$(INSTALL) -m0644 scheme/*.o $(DESTDIR)$(DATADIR)/scheme
	$(INSTALL) -m0644 scheme/cyclone/*.o $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(INSTALL) -m0644 srfi/*.o $(DESTDIR)$(DATADIR)/srfi
	$(INSTALL) -m0755 scheme/*.so $(DESTDIR)$(DATADIR)/scheme
	$(INSTALL) -m0755 scheme/cyclone/*.so $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(INSTALL) -m0755 srfi/*.so $(DESTDIR)$(DATADIR)/srfi
#install:
	$(MKDIR) $(DESTDIR)$(BINDIR)
	$(MKDIR) $(DESTDIR)$(LIBDIR)
	$(MKDIR) $(DESTDIR)$(INCDIR)
	$(MKDIR) $(DESTDIR)$(DATADIR)
	$(MKDIR) $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(MKDIR) $(DESTDIR)$(DATADIR)/srfi
	$(MKDIR) $(DESTDIR)$(DATADIR)/srfi/list-queues
	$(MKDIR) $(DESTDIR)$(DATADIR)/srfi/sorting
	$(INSTALL) -m0755 cyclone $(DESTDIR)$(BINDIR)/
	$(INSTALL) -m0755 icyc $(DESTDIR)$(BINDIR)/
	$(INSTALL) -m0644 $(CYC_RT_LIB) $(DESTDIR)$(LIBDIR)/
	$(INSTALL) -m0644 $(CYC_BN_LIB) $(DESTDIR)$(LIBDIR)/
	$(INSTALL) -m0644 include/cyclone/*.h $(DESTDIR)$(INCDIR)/
	$(INSTALL) -m0644 scheme/*.sld $(DESTDIR)$(DATADIR)/scheme
	$(INSTALL) -m0644 scheme/*.o $(DESTDIR)$(DATADIR)/scheme
	$(INSTALL) -m0755 scheme/*.so $(DESTDIR)$(DATADIR)/scheme
	$(INSTALL) -m0644 scheme/cyclone/*.sld $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(INSTALL) -m0644 scheme/cyclone/*.scm $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(INSTALL) -m0644 libs/cyclone/test.meta $(DESTDIR)$(DATADIR)/cyclone
	$(INSTALL) -m0644 libs/cyclone/match.meta $(DESTDIR)$(DATADIR)/cyclone
	$(INSTALL) -m0644 scheme/cyclone/array-list.meta $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(INSTALL) -m0644 scheme/cyclone/*.o $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(INSTALL) -m0755 scheme/cyclone/*.so $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(INSTALL) -m0644 libs/cyclone/*.sld $(DESTDIR)$(DATADIR)/cyclone
	$(INSTALL) -m0644 libs/cyclone/*.scm $(DESTDIR)$(DATADIR)/cyclone
	$(INSTALL) -m0644 libs/cyclone/*.o $(DESTDIR)$(DATADIR)/cyclone
	$(INSTALL) -m0755 libs/cyclone/*.so $(DESTDIR)$(DATADIR)/cyclone
	$(INSTALL) -m0644 srfi/*.sld $(DESTDIR)$(DATADIR)/srfi
	$(INSTALL) -m0644 srfi/*.scm $(DESTDIR)$(DATADIR)/srfi
	$(INSTALL) -m0644 srfi/list-queues/*.scm $(DESTDIR)$(DATADIR)/srfi/list-queues
	$(INSTALL) -m0644 srfi/sorting/*.scm $(DESTDIR)$(DATADIR)/srfi/sorting
	$(INSTALL) -m0644 srfi/*.meta $(DESTDIR)$(DATADIR)/srfi
	$(INSTALL) -m0644 srfi/*.o $(DESTDIR)$(DATADIR)/srfi
	$(INSTALL) -m0755 srfi/*.so $(DESTDIR)$(DATADIR)/srfi

uninstall:
	$(RM) $(DESTDIR)$(BINDIR)/cyclone
	$(RM) $(DESTDIR)$(BINDIR)/icyc
	$(RM) $(DESTDIR)$(LIBDIR)/$(CYC_RT_LIB)
	$(RM) $(DESTDIR)$(LIBDIR)/$(CYC_BN_LIB)
	$(RM) $(DESTDIR)$(INCDIR)/*.*
	$(RMDIR) $(DESTDIR)$(INCDIR)
	$(RM) $(DESTDIR)$(DATADIR)/scheme/cyclone/*.*
	$(RMDIR) $(DESTDIR)$(DATADIR)/scheme/cyclone
	$(RM) $(DESTDIR)$(DATADIR)/cyclone/*.*
	$(RMDIR) $(DESTDIR)$(DATADIR)/cyclone
	$(RM) $(DESTDIR)$(DATADIR)/srfi/list-queues/*.*
	$(RMDIR) $(DESTDIR)$(DATADIR)/srfi/list-queues
	$(RM) $(DESTDIR)$(DATADIR)/srfi/sorting/*.*
	$(RMDIR) $(DESTDIR)$(DATADIR)/srfi/sorting
	$(RM) $(DESTDIR)$(DATADIR)/srfi/*.*
	$(RMDIR) $(DESTDIR)$(DATADIR)/srfi
	$(RM) $(DESTDIR)$(DATADIR)/scheme/*.*
	$(RMDIR) $(DESTDIR)$(DATADIR)/scheme
	$(RMDIR) $(DESTDIR)$(DATADIR)

.PHONY: debug
debug:
	./cyclone icyc.scm > debug.out 2>&1

