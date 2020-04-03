#include <stdio.h>
#include "meme.h"

int main() {
    char buf[100];
    int n = 1;
    btoa(buf, isOdd(n));
    printf("Is %d odd: %s", n, buf);
}
