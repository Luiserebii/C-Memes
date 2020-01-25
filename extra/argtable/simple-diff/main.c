#include "../lib/argtable3.h"

#include <stdio.h>
#include <string.h>

#define MAXREAD 1000


#define clean(argtable, exitcode) \
    \
    arg_freetable(argtable, sizeof(argtable) / sizeof(argtable[0])); \
    return exitcode;
  
void diff(char* fn1, char* fn2);

int main(int argc, char** argv) {

    struct arg_end* end;
    struct arg_lit* help;

    //Set up argtables to work with
    void* argtable[] = {
        help = arg_litn("h", "help", 0, 1, "display this help and exit"),
        arg_filen(NULL, NULL, "<file>", 2, 2, "files to compare"),
        end = arg_end(20)
    };

    //Parse, and capture errors from parsing
    int nerrors = arg_parse(argc, argv, argtable);
    
    //Check for --help as a special case (otherwise, error will just appear)
    if(help->count) {
        printf("Usage: %s", "diff");
        //Print one-line syntax for main argtable
        arg_print_syntax(stdout, argtable, "\n");
        printf("A tool for epic diff memes\n\n");
        arg_print_glossary(stdout, argtable, "  %-25s %s\n");
        
        clean(argtable, 0);
    }

    //If there are errors, print them!
    if(nerrors) {
        arg_print_errors(stderr, end, "diff");
        clean(argtable, 1);
    }

    //Execute main logic
    diff(argv[1], argv[2]);

    clean(argtable, 0);
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

