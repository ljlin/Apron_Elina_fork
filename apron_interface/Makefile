include ../Makefile.config

#INSTALL = install
#INSTALLd = install -d

APRONH = apron_wrapper.h

INCLDIR = $(APRON_PREFIX)/include

all:
	

install:
	$(INSTALLd) $(INCLDIR); \
	for i in $(APRONH); do \
		$(INSTALL) $$i $(INCLDIR); \
	done; 
