#include <stdio.h>

int main(void){
    char *s = "test!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
    printf("%c\n", *(s+4));
    printf("%c\n", *(s+5));

    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
    printf("%s\n", s+3);
    printf("%s\n", s+4);
    printf("%s\n", s+5);
}