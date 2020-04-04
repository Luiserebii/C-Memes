#
# The same as the last (c3), with a few additions/refactors.
#

CC=gcc
CFLAGS=-I .
DEPS=hellomake.h
# New: Adding variable for all objects to make
OBJ=main.o hellomake.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Note the new special macro $^, which are all 
# of the dependencies (not just first)
hellomake: $(OBJ)
	$(CC) $^
