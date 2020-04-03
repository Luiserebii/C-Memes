#include <string.h>

int isOdd(int n) {
    return n & 1;
}

void btoa(char* s, int b){
    b ? strcpy(s, "true") : strcpy(s, "false");
}
