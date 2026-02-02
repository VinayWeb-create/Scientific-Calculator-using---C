
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define M_PI 3.14159265358979323846  

void displayMenu();
void performOperation(int choice);

int main() {
    int choice;

    while (1) {
        displayMenu();
        printf("Enter your choice (0 to exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        performOperation(choice);
        printf("\nPress Enter to continue...\n");
        getchar(); // To consume the newline character
        getchar(); // Wait for Enter key
    }

    return 0;
}

void displayMenu() {
    printf("\n=== Calculator Menu ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Power\n");
    printf("7. Square\n");
    printf("8. Cube\n");
    printf("9. 1/X\n");
    printf("10. Exponent (e^x)\n");
    printf("11. Factorial\n");
    printf("12. Percentage\n");
    printf("13. Logarithm (log base e)\n");
    printf("14. Modulus\n");
    printf("15. Sin(x)\n");
    printf("16. Cos(x)\n");
    printf("17. Tan(x)\n");
    printf("=======================\n");
}

void performOperation(int choice) {
    float x, y, result;
    int n, i, fact;

    switch (choice) {
    case 1: // Addition
        printf("Enter two numbers (X and Y): ");
        scanf("%f %f", &x, &y);
        result = x + y;
        printf("Result: %.2f\n", result);
        break;

    case 2: // Subtraction
        printf("Enter two numbers (X and Y): ");
        scanf("%f %f", &x, &y);
        result = x - y;
        printf("Result: %.2f\n", result);
        break;

    case 3: // Multiplication
        printf("Enter two numbers (X and Y): ");
        scanf("%f %f", &x, &y);
        result = x * y;
        printf("Result: %.2f\n", result);
        break;

    case 4: // Division
        printf("Enter two numbers (X and Y): ");
        scanf("%f %f", &x, &y);
        if (y == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            result = x / y;
            printf("Result: %.2f\n", result);
        }
        break;

    case 5: // Square Root
        printf("Enter a number (X): ");
        scanf("%f", &x);
        if (x < 0) {
            printf("Error: Square root of a negative number is not allowed.\n");
        } else {
            result = sqrt(x);
            printf("Result: %.2f\n", result);
        }
        break;

    case 6: // Power
        printf("Enter the base (X) and exponent (Y): ");
        scanf("%f %f", &x, &y);
        result = pow(x, y);
        printf("Result: %.2f\n", result);
        break;

    case 7: // Square
        printf("Enter a number (X): ");
        scanf("%f", &x);
        result = x * x;
        printf("Result: %.2f\n", result);
        break;

    case 8: // Cube
        printf("Enter a number (X): ");
        scanf("%f", &x);
        result = x * x * x;
        printf("Result: %.2f\n", result);
        break;

    case 9: // 1/X
        printf("Enter a number (X): ");
        scanf("%f", &x);
        if (x == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            result = 1 / x;
            printf("Result: %.2f\n", result);
        }
        break;

    case 10: // Exponent
        printf("Enter a number (X): ");
        scanf("%f", &x);
        result = exp(x);
        printf("Result: %.2f\n", result);
        break;

    case 11: // Factorial
        printf("Enter a positive integer (n): ");
        scanf("%d", &n);
        if (n < 0) {
            printf("Error: Factorial of a negative number is not allowed.\n");
        } else {
            fact = 1;
            for (i = 1; i <= n; i++) {
                fact *= i;
            }
            printf("Result: %d\n", fact);
        }
        break;

    case 12: // Percentage
        printf("Enter two numbers (X and Y): ");
        scanf("%f %f", &x, &y);
        result = (x * y) / 100;
        printf("Result: %.2f%%\n", result);
        break;

    case 13: // Logarithm
        printf("Enter a number (X): ");
        scanf("%f", &x);
        if (x <= 0) {
            printf("Error: Logarithm of a non-positive number is not allowed.\n");
        } else {
            result = log(x);
            printf("Result: %.2f\n", result);
        }
        break;

    case 14: // Modulus
        printf("Enter two integers (X and Y): ");
        scanf("%d %d", &n, &i);
        if (i == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            result = n % i;
            printf("Result: %d\n", (int)result);
        }
        break;

    case 15: // Sin(x)
        printf("Enter an angle in degrees (X): ");
        scanf("%f", &x);
        result = sin(x * M_PI / 180);
        printf("Result: %.2f\n", result);
        break;

    case 16: // Cos(x)
        printf("Enter an angle in degrees (X): ");
        scanf("%f", &x);
        result = cos(x * M_PI / 180);
        printf("Result: %.2f\n", result);
        break;

    case 17: // Tan(x)
        printf("Enter an angle in degrees (X): ");
        scanf("%f", &x);
        result = tan(x * M_PI / 180);
        printf("Result: %.2f\n", result);
        break;

    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }
}
