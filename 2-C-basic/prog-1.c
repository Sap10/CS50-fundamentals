#include <stdio.h>
#include <string.h>

char* get_string(char* stringVal, char* output_buffer);

int main(void){
    char name[100]; 
    char greetings[100];
    get_string("What is your name ?", name);
    printf("%s\n", name);
}

char* get_string(char* stringVal, char* output_buffer){
    char stringGetVal[50];

    printf("%s\n", stringVal);
    scanf("%s", stringGetVal);
    strcpy(output_buffer, "Hello ");
    return strcat(output_buffer,stringGetVal);
}