#include <stdio.h>
#include <string.h>

int get_string(char* text);

int main(void){
    int v = get_string("What is your name ? : ");
    printf("%i\n", v);
}

int get_string(char* text){
    char txt_val[100];
    printf("%s", text);
    scanf("%s", txt_val);
    int val = strlen(txt_val);
    return val;
}