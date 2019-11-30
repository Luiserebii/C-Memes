#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define IN_LIMIT 1000

void setupRNG();
int valid(char[] in);
void getWord(char[] s);
int toSelection

int strcmp(char[] a, char[] b);
int strlen(char[] a);


int main() {

    enum Selection { ROCK, PAPER, SCISSORS };

    //Preparations
    setupRNG();

    printf("Ready to play rock-paper-scissors? Type in either \"rock\", \"paper\" or \"scissors\" and enter to select.");
    printf("As a note, all inputs are limited to %d characters.", IN_LIMIT);
    char input[IN_LIMIT];
    while(getWord(s)) {
        if(!valid(input)) {
            printf("Sorry, but the input \"%s\" is invalid. Please review any valid input types previously specified, and try again.", input);
            continue;            
        }
        
        //Produce an answer internally
        int roll = rand() % 3;
/*        switch(roll) {

            case ROCK:
                if()

            case PAPER:
        
            case SCISSORS:
        
        
        }
*/    
    }

    return 0;
}

void setupRNG() {
    srand(time(NULL));
}

//Check for valid input
int valid(char[] in) {
    return (strcmp(input, "rock") == 0) || 
        (strcmp(input, "paper") == 0) ||
        (strcmp(input, "scissors") == 0);
}

//Within this function, we will be assuming the 
//char[] passed is large enough
//
//Breaks on newline or whitespace
void getWord(char[] s) {
    int c;
    int i;
    for(i = 0; (c = getchar()) != EOF && c != '\n' && c != ' '; ++i) {
        s[i] = c;
    }
    s[i] = '\0';
}

int strcmp(char[] a, char[] b) {
    int len;
    for(int i = 0; i < len; ++i) {
        if(a[i] < b[i]) {
            return -1;
        } else if(a[i] > b[i]) {
            return 1;
        }
    }
    if((len = strlen(a)) != strlen(b)) {
        return 2; //2 for code, as in lengths of strings are not the same
    } else {
        return 0;
    }
    return 0;
}

int strlen(char[] a) {
    int len;
    for(len = 0; a[len] != '\0'; ++len)
        ;
    return len;
}
