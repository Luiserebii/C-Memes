CFLAGS=-g3 -Wall -Wextra
LDFLAGS=-o a.out

all:
	main.o meme.o

# Implicitly, this rule exists:
# %.o: 
# 	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $*.c
#
# which will create an object with all the options given,
# producing %.o as an output executable ($@ is the target name,
# %.o is the full target name, so %.o), from the source file
# with the same name ($* is sans the suffix)
