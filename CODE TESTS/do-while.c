#include <stdio.h>

int main() {
    char c;

    do {
        printf("Please, press [q] to quit!\n");
        scanf("%c",&c);
        
        while((getchar())!='\n'); //clear buffer
    } while (c != 'q'); 

    return 0;
}