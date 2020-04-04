# 
# In this Makefile, the general rule applies to
# all files ending in the .o suffix looking to be made.
# 
# It depends on the respective .c and the DEPS variable,
# which compiles an object file under the same name as
# the target (name.o) and uses the first file in the dependencies
# list as the thing to compile (which happens to be %.c), via
# $<.
#
# This is ok-ish, but with multiple files relying on multiple
# kinds of headers, the most optimal build, I wonder, may not
# use these %.o: %.c targets...

CC=gcc
CFLAGS=-I .
DEPS=hellomake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: main.o hellomake.o
	$(CC) main.o hellomake.o
