#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 7; i++) {
        for(j = 1; j <= 7 - i; j++)
            printf(" ");
        for(j = 1; j <= 2*i - 1; j++)
            printf("^");
        printf("\n");
    }

    for(i = 1; i <= 7; i++) {
        for(j = 1; j <= 13; j++) {
            if(j == 1 || j == 13)
                printf("#");
            else if(i >= 4 && j >= 6 && j <= 8)
                printf("|");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
