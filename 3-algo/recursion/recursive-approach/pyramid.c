#include <stdio.h>

int get_number(char* text);
void draw(int n);

int main(void){
    int num = get_number("Get the numb : ");
    draw(num);
}

int get_number(char* text){
    int numb;
    printf("%s", text);
    scanf("%i", &numb);
    return numb;
}

void draw(int n){
    if(n <= 0) return;
    draw(n - 1);
    for(int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}