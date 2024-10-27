
#include <stdio.h>

int main() {
    int i, j, k, rows = 3;

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;}