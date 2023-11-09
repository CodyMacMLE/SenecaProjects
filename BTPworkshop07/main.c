#include <stdio.h>
#include "stats.h"

int main() {

    struct stats array_stats;
    float array[SIZE] = { 1.6, 2.3, 7.8, 5.3, 0.8, 9.0, 3.4, 7.2 };

    printf("Max is: %.2f\n", get_max(array, SIZE));
    printf("Min is: %.2f\n", get_min(array, SIZE));
    printf("Mean is: %.2f\n", get_mean(array, SIZE));
    printf("std is: %.2f\n\n", get_std(array, SIZE));

    array_stats = get_stats(array, SIZE);

    printf("Size is: %.i\n", array_stats.size);
    printf("Max is: %.2f\n", array_stats.max);
    printf("Min is: %.2f\n", array_stats.min);
    printf("Mean is: %.2f\n", array_stats.mean);
    printf("std is: %.2f\n", array_stats.std);
    
    return 0;
}
