#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define IN_LIMIT 1000

void setupRNG();
int validate(char input[]);

/** 
 * Print random numbers until one is rolled higher than one input
 */

int main() {
    
    char input[IN_LIMIT];
    for(;;) {
        for(; getline(input);) {

            printf("Input is not a number")
            getline(input);
        }
    }    

}

void setupRNG() {
    srand(time(NULL));
}

int validate(char input[]) {
    for(int i = 0; input[i] != '\0'; ++i) {
        if(input[i] < '0' || '9' < input[i]) {
            return 0;
        }
    }
}

//Returns length
int getline(char s[]) {
    int c;
    int i;
    for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}
