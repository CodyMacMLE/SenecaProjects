#include <stdio.h>

int main() {
    //multiplication table (up to 5)
    for (int i = 1; i < 6 ; i++) {
        for (int j = 1; j < 6; j++) {
            printf("%i x %i = %i\t", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}