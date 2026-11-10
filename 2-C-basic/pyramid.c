#include <stdio.h>

void print_column(int height);
int get_int(char* txtToGetVal);

int main(void){
    int h = get_int("height : ");
    print_column(h);
}

void print_column(int height){
    for(int i = 0; i < height; i++){
        printf("#\n");
    }
}

int get_int(char* txtToGetVal){
    int valInt;
    printf("%s\n", txtToGetVal);
    scanf("%i", &valInt);
    return valInt;
}