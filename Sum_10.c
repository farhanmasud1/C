#include <stdio.h>

int main() {
    int numbers[10];  // Array to store 10 integers
    int sum = 0;      // Variable to store the sum
    int i;

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Add the current number to the sum
        sum += numbers[i];
    }

    // Output the sum
    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}
