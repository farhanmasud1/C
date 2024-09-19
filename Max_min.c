#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max, min;

    // Input three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate maximum
    max = num1; // Assume num1 is the largest initially
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Calculate minimum
    min = num1; // Assume num1 is the smallest initially
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    // Output the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

