#include <stdio.h>

#define IN_LIMIT 1000

/** 
 * Print random numbers until one is rolled higher than one input
 */

int main() {
    
    

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
