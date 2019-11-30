#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define IN_LIMIT 1000

void setupRNG();
int valid(char input[]);
int getWord(char s[]);
int toSelection(char s[]);

void printTie();
void printWin();
void printLose();

int strcmp(char a[], char b[]);
int strlen(char a[]);

enum Selection { ROCK, PAPER, SCISSORS };

int main() {

    //Preparations
    setupRNG();

    printf("Ready to play rock-paper-scissors? Type in either \"rock\", \"paper\" or \"scissors\" and enter to select.\n");
    printf("As a note, all inputs are limited to %d characters.\n", IN_LIMIT);
    char input[IN_LIMIT];
    while (getWord(input)) {
        if (!valid(input)) {
            printf("Sorry, but the input \"%s\" is invalid. Please review any valid input types previously specified, and try again.\n", input);
            continue;            
        }

        //Grab selection
        int choice = toSelection(input);

        //Produce an answer internally
        int roll = rand() % 3;

        if (roll == choice) {
            printTie();
        } else {
            break;
        }
    
    }

    

    return 0;
}

void setupRNG() {
    srand(time(NULL));
}

//Check for valid input
int valid(char input[]) {
    return (strcmp(input, "rock") == 0) || 
        (strcmp(input, "paper") == 0) ||
        (strcmp(input, "scissors") == 0);
}

//Within this function, we will be assuming the 
//char[] passed is large enough
//
//Breaks on newline or whitespace
int getWord(char s[]) {
    int c;
    int i;
    for (i = 0; (c = getchar()) != EOF && c != '\n' && c != ' '; ++i) {
        s[i] = c;
    }
    s[i] = '\0';
    return 1;
}

int toSelection(char s[]) {
    if (strcmp(s, "rock") == 0) {
        return ROCK;
    } else if (strcmp(s, "paper") == 0) {
        return PAPER;
    } else if (strcmp(s, "scissors") == 0) {
        return SCISSORS;
    }
}

void printTie() {
    printf("A tie! Onto the next round, try rolling again!\n");
}

void printWin() {
    printf("A win! gg\n");
}

void printLose() {
    printf("A loss... F\n");
}

int strcmp(char a[], char b[]) {
    int len;
    for (int i = 0; i < len; ++i) {
        if (a[i] < b[i]) {
            return -1;
        } else if (a[i] > b[i]) {
            return 1;
        }
    }
    if ((len = strlen(a)) != strlen(b)) {
        return 2; //2 for code, as in lengths of strings are not the same
    } else {
        return 0;
    }
    return 0;
}

int strlen(char a[]) {
    int len;
    for(len = 0; a[len] != '\0'; ++len)
        ;
    return len;
}
