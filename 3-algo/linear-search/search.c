#include <stdio.h>

int get_numb(char* text);

int main(void){
    int numbers[] = {5, 10, 15, 20, 25, 50};
    int search_numb = get_numb("What number do you want to search? : ");
    for(int i = 0; i < 7; i++){
        if(numbers[i] == search_numb){
            printf("Number found\n");
            return 0;
        }
    }
    printf("Number not found!\n");
    return 1;
}

int get_numb(char* text){
    int numb;
    printf("%s", text);
    scanf("%i", &numb);
    return numb;
}