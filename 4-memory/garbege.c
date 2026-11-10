#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numbs[100];
    for(int i = 0; i < 100; i++){
        //If we don't put any value , then it is possibility to get the garbege value
        printf("%i\n", numbs[i]);
    }
}