#include <stdio.h>
#define IN_LIMIT 1000

void getWord(char[] s);
int strcmp(char[] a, char[] b);
int strlen(char[] a);


int main() {

    printf("Ready to play rock-paper-scissors? Type in either \"rock\", \"paper\" or \"scissors\" and enter to select.");
    printf("As a note, all inputs are limited to %d characters.", IN_LIMIT);
    char input[IN_LIMIT];
    while(getWord(s)) {
        if(input)
    
    }

    return 0;
}

//Within this function, we will be assuming the 
//char[] passed is large enough
//
//Breaks on newline or whitespace
void getWord(char[] s) {
    int c;
    for(int i = 0; (c = getchar()) != EOF && c != '\n' && c != ' '; ++i) {
        s[i] = c;
    }
}

int strcmp(char[] a, char[] b) {
    int len;
    if((len = strlen(a)) != strlen(b)) {
        return 0;
    }
    for(int i = 0; i < len; ++i) {
        if(a[i] < b[i]) {
            return -1;
        } else if(a[i] > b[i]) {
            return 1;
        }
    }
    return 0;
}

int strlen(char[] a) {
    int len;
    for(len = 0; a[len] != '\0'; ++len)
        ;
    return len;
}
