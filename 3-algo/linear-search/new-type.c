#include <stdio.h>
#include <string.h>

char* get_string(char* text);

typedef struct{
    char* name;
    char* number;
} person;

int main(void){
    char* names[] = {"Saptarshi", "Ram", "Anil", "Anita"};
    char* phone_numbers[] = {"9921345678", "9900887766", "22234587654", "1111111111"};
    person people[3];
    people[0].name = "Saptarshi";
    people[0].number = "9921345678";
    people[1].name = "Ram";
    people[1].number = "9900887766";
    people[2].name = "Anil";
    people[2].number = "22234587654";
    people[3].name = "Anita";
    people[3].number = "1111111111";
    char* name = get_string("Enter the name : ");
    for(int i = 0; i < 4; i++){
        if(strcmp(name, people[i].name) == 0){
            printf("Found : %s\n", people[i].number);
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