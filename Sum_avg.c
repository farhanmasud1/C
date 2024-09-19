#include <stdio.h>

int main() {
    int num1, num2;
    int sum;
    float avg;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate sum
    sum = num1 + num2;

    // Calculate average
    avg = sum / 2.0;  // Use 2.0 to ensure the division is floating-point

    // Output the results
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
