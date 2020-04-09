#include <stdio.h>
#include "meme.h"

int main(int argc, char** argv) {
    --argc;
    ++argv;
    printf("%d\n", sum(argc, argv));
}
