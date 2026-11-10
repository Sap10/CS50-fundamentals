#include <stdio.h>

int get_numb(char* text);
void draw(int n);

int main(void){
    int steps = get_numb("Enter the number of step : ");
    draw(steps);
}

int get_numb(char* text){
    int numb;
    printf("%s", text);
    scanf("%i", &numb);
    return numb;
}

void draw(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            printf("*");
        }
        printf("\n");
    }
}