#include <stdlib.h>
#include "meme.h"

int sum(int argc, char** argv) {
    int sum = 0;
    while(argc) {
        sum += atoi((argv++)[0]);
        --argc;
    }
    return sum;
}
