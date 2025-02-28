#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the height of the pyramid

    for (int i = 1; i <= n; i++) { // Loop for each row
        // Print spaces for the left part of the pyramid
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars for the pyramid itself
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

