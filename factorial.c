#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;  // Factorial can be large, so using unsigned long long

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Factorial of a negative number doesn't exist
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;  // Multiply each number from 1 to num
        }

        // Output the factorial
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
