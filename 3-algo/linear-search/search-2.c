#include <stdio.h>
#include <string.h>

char* get_string(char* text);

int main(void){
    char items[] = {"Car", "Bag", "doll", "gun", "robot"};
    char* search_item = get_string("What do you want to search? : ");
    for(int i = 0; i < 5; i++){
        if(stcmp(items[i], search_item) == 0){
            printf("Found\n");
        }
    }
    printf("Not found\n");
}

char* get_string(char* text){
    static char input_text[100];
    printf("%s", text);
    scanf("%99s", input_text);
    return input_text;
}

