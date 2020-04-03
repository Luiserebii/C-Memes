CFLAGS=-g3 -Wall -Wextra
LDFLAGS=

main: main.o

# Implicitly, this rule exists:
# %.o: 
# 	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $*.c
#
# which will create an object with all the options given,
# producing %.o as an output executable ($@ is the target name,
# %.o is the full target name, so %.o), from the source file
# with the same name ($* is sans the suffix)
#
# It seems that there is also an implicit rule for actually
# linking the executables together...?

clean:
	rm *.o main
