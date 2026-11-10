#include <stdio.h>
#include <stdlib.h>

char * get_string(char *text);

int main(void){
    char *txt1 = get_string("1st string: ");
    char *txt2 = get_string("2nd string: ");
    printf("%p\n", txt1);
    printf("%p\n", txt2);
    free(txt1);
    free(txt2);
}

char * get_string(char *text){
    char *txt = malloc(100); 
    if(txt == NULL){
        return NULL;
    }
    printf("%s", text);
    scanf("%99s", txt); 
    return txt;
}