# Note that this makefile also targets an implicit rule
# though not certain exactly what it looks like, is likely
# something along the lines of:
#
# %.o: 
#       $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $*.c
#
# Regardless, there is a flaw in that the .o do
# not check .c for changes as dependencies; let's fix that
#

CC=gcc
CFLAGS=-I .

hellomake: main.o hellomake.o
	$(CC) main.o hellomake.o
