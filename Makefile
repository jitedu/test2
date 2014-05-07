CC=gcc
CCOPT=-fno-strict-aliasing -Wstrict-prototypes -Wall -g
CCOPTOPT=-O3
GLIBCFIX=-D_GNU_SOURCE
CFLAGS=$(CCOPTOPT) $(CCOPT) $(GLIBCFIX)
TARGETS =test4
.PHONY:all clean
all:$(TARGETS)
%.s:%.c
	$(COMPILE.c) $< -S -o $@
%.o:%.c
	$(COMPILE.c) $< -o $@
$(TARGETS): %: %.o
	$(LINK.o) $^ -o $@
clean:
	rm test4 test4.o
	
