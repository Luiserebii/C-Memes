#include <stdio.h>
#define IN_LIMIT 1000

void getWord(char[] s);


int main() {

    printf("Ready to play rock-paper-scissors? Type in either \"rock\", \"paper\" or \"scissors\" and enter to select.");
    printf("As a note, all inputs are limited to %d characters.", IN_LIMIT);
    char input[IN_LIMIT];
    while()

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
