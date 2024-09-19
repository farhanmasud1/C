#include <stdio.h>

int main() {
    int rows = 3, cols = 7;  // Adjusting columns to accommodate the spaces

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Print '*' for the specific positions in each row
            if ((i == 0 && j == 4) || (i > 0 && (j == 0 || j == 6))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
