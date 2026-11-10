#include <stdio.h>

float get_float(char* text);
float average(int length, float numbers[]);

int main(void){
    int N = 3;
    float scores[N];
    for(int i = 0; i < N; i++){
        scores[i] =  get_float("What is your score? : ");
    }
    printf("%f\n", average(N, scores));
}

float average(int length, float numbers[]){
    float sum = 0;
    for(int i = 0; i < length ;i++){
        sum += numbers[i];
    }
    return sum / (float) length;
}

float get_float(char* text){
    float numb;
    printf("%s", text);
    scanf("%f", &numb);
    return numb;
}