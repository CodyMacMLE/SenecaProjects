#include <stdio.h>

int globalVar = 10;

void print(int functionVar){
    int localVar = 3;
    printf("2 - function scope = %i\n", functionVar);
    if (1) {
        int blockVar = 2;
        printf("3 - block scope = %i\n", blockVar);
    }
    printf("4 - local scope = %i\n", localVar);
    printf("5 - global scope = %i\n", globalVar);
}

int main(){

    int localVar = 5;
    printf("1 - local scope = %i\n", localVar);
    print(localVar);
    printf("6 - global scope = %i\n", globalVar);
    
    return 0;
}