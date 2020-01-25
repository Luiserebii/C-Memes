#include "../lib/argtable3.h"

#include <stdio.h>
#include <string.h>

#define MAXREAD 1000

void diff(char* fn1, char* fn2);

int main(int argc, char** argv) {

    //Argument logic
    if(--argc != 2) {
        fprintf(stderr, "Invalid number of arguments passed, expected 2, received %d.\n", argc);
        return 1;
    }

    diff(argv[1], argv[2]);

    return 0;
}

void diff(char* fn1, char* fn2) {
    //Open files
    FILE* file1 = fopen(fn1, "r");
    FILE* file2 = fopen(fn2, "r");

    //Compare each line
    int found = 0;
    char line1[MAXREAD];
    char line2[MAXREAD];
    while(fgets(line1, MAXREAD, file1) && fgets(line2, MAXREAD, file2)) {
        if(strcmp(line1, line2) != 0) {
            printf("First line in which files \"%s\" and \"%s\" differ found:\n", fn1, fn2);
            printf("\n=-=-=\n%s\n=-=-=\n%s", fn1, line1);
            printf("\n=-=-=\n%s\n=-=-=\n%s", fn2, line2);
            found = 1;
        }
    }
    //Print equal if equal
    if(!found) {
        printf("Files \"%s\" and \"%s\" are equal, no differences found.\n", fn1, fn2);
    }

    //Release resources
    fclose(file1);
    fclose(file2);
}
