#include <stdio.h>

int main() {
    int rows = 5; 

    for (int i = 1, k = 1; i <= rows; ++i) {

        for (int space = 1; space <= rows - i; ++space) {
            printf("   ");
        }

        for (int j = 1; j <= i; ++j, ++k) {
            printf("%-3d", k);
        }

        printf("\n");
    }

    return 0;
}

