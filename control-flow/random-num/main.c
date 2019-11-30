#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define IN_LIMIT 1000

void setupRNG();
int validate(char input[]);
int atoint(char s[]);
int getlinestr(char s[]);

/** 
 * Print random numbers until one is rolled lower than input
 */

int main() {
    
    char input[IN_LIMIT];
    for(; getlinestr(input);) {
        if(!validate(input)) {
            printf("Input is not a number\n");
        } else {
            //In the clear, so let's break from this loop
            break;
        }
    }
    //Convert valid input to int
    int res = atoint(input);
    int n;
    for(;;) {
        n = rand();
        if(n > res) {
            printf("Random number: %d\n", n);
        } else {
            break;
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
    return 1;
}

int atoint(char s[]) {
    int n;
    for(int i = 0; s[i] >= '0' && s[i] <= '9' && s[i] != '\0'; ++i) {
        n = n * 10 + (s[i] - 0);
    }
}

//Returns length
int getlinestr(char s[]) {
    int c;
    int i;
    for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}
