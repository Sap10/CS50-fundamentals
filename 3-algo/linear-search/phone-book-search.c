#include <stdio.h>
#include <string.h>

char* get_string(char* text);

int main(void){
    char* names[] = {"Saptarshi", "Ram", "Anil", "Anita"};
    char* phone_numbers[] = {"9921345678", "9900887766", "22234587654", "1111111111"};
    char* name = get_string("Enter the name : ");
    for(int i = 0; i < 4; i++){
        if(strcmp(name, names[i]) == 0){
            printf("Found : %s\n", phone_numbers[i]);
            return 0;
        }
    }
    printf("Not found!\n");
}

char* get_string(char* text){
    static char txt[100];
    printf("%s", text);
    scanf("%99s", txt);
    return txt;
}