#include <stdio.h>
#include <string.h>

int main() {
    int index[100];

    for (int i = 0; i < 101; i++)
    {
        index[i] = i;
    }

    for (int i = 0; i < 101; i++)
    {
        if (strstr(index[i], "5"))
        {
            printf("Your Index was found %d", i);
            break;
        } else {
            continue;
        }
    }
    
    
    return 0;
}