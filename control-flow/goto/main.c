#include <stdio.h>

#define IN_LIMIT 1000

int getlinestr(char s[]);
void validate(char input[]);

/** 
 * Hit the eject button if we run into a non-digit
 */

int main() {
    
    char input[IN_LIMIT];
    for(;;) {
        getlinestr(input);
        validate(input);
    }
}


void validate(char input[]) {
    for(int i = 0; input[i] != '\0'; ++i) {
        if(input[i] < '0' || '9' < input[i]) {
            printf("FUCK: %c\n", input[i]);
            goto error;
        }
    }
    return;
    error:
        printf("NOT DIGIT RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR\n");
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
