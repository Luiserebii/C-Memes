#
# The same as the last (c4), with a few additions/refactors.
#
# Not sure why, but I keep getting:
# make: *** No rule to make target 'build/main.o', needed by 'hellomake'.  Stop.
#


CC=gcc
INCLUDE_DIR=./include
BUILD_DIR=./build
CFLAGS=-I$(INCLUDE_DIR)

# Usage of patsubst, a textual substitution
# function
#
# $(patsubst pattern,replacement,text)
#   where % is a wildcard
# This essentially prepends the output directory
# ./build to each
OBJ_NAMES=main.o hellomake.o
OBJ=$(patsubst %,$(BUILD_DIR)/%,$(OBJ_NAMES))

DEP_NAMES=hellomake.h
DEPS=$(patsubst %,$(INCLUDE_DIR)/%,$(DEP_NAMES))

$(BUILD_DIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) $^

# Rule which prevents clean from being "made"
# (i.e. don't do anything with a file named clean)
.PHONY: clean

clean:
	rm -f $(ODIR)/*.o a.out
