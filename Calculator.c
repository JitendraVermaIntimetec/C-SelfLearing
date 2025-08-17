#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846

// Function Declarations
int Addition(int a, int b) {
    return a + b;
}

int Subtraction(int a, int b) {
    return a - b;
}

int Multiplication(int a, int b) {
    return a * b;
}

float Division(int a, int b) {
    if (b == 0) {
        printf("Cannot divide by zero.\n");
        return 0;
    }
    return (float)a / b;
}

double Power(double base, double exponent) {
    return pow(base, exponent);
}

double SquareRoot(double num) {
    if (num < 0) {
        printf("Cannot take square root of a negative number.\n");
        return 0;
    }
    return sqrt(num);
}

double Sine(double degrees) {
    double radians = degrees * M_PI / 180.0;
    return sin(radians);
}

double Cosine(double degrees) {
    double radians = degrees * M_PI / 180.0;
    return cos(radians);
}

double Tangent(double degrees) {
    double radians = degrees * M_PI / 180.0;
    if (fabs(cos(radians)) < 1e-10) {
        printf("Tangent is undefined for this angle.\n");
        return 0;
    }
    return tan(radians);
}

double Natural_Log(double num) {
    if (num <= 0) {
        printf("Logarithm undefined for zero or negative numbers.\n");
        return 0;
    }
    return log(num);
}

unsigned long long Factorial(int n) {
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0;
    }
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Main Menu Function
void mainMenu() {
    int choice, input1, input2;
    double result;

    while (1) {
        printf("\n-----Here is my Week-1 Final Assignment-----\n");
        printf("---Menu---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root (√x)\n");
        printf("7. Sine (sin x)\n");
        printf("8. Cosine (cos x)\n");
        printf("9. Tangent (tan x)\n");
        printf("10. Natural Log\n");
        printf("11. Factorial\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%d", &input1);
                printf("Enter second number: ");
                scanf("%d", &input2);
                printf("Addition Result: %d\n", Addition(input1, input2));
                break;
            case 2:
                printf("Enter first number: ");
                scanf("%d", &input1);
                printf("Enter second number: ");
                scanf("%d", &input2);
                printf("Subtraction Result: %d\n", Subtraction(input1, input2));
                break;
            case 3:
                printf("Enter first number: ");
                scanf("%d", &input1);
                printf("Enter second number: ");
                scanf("%d", &input2);
                printf("Multiplication Result: %d\n", Multiplication(input1, input2));
                break;
            case 4:
                printf("Enter numerator: ");
                scanf("%d", &input1);
                printf("Enter denominator: ");
                scanf("%d", &input2);
                result = Division(input1, input2);
                if (input2 != 0)
                    printf("Division Result: %.2f\n", result);
                break;
            case 5:
                printf("Enter base: ");
                scanf("%d", &input1);
                printf("Enter exponent: ");
                scanf("%d", &input2);
                printf("Power Result: %.2f\n", Power(input1, input2));
                break;
            case 6:
                printf("Enter number: ");
                scanf("%d", &input1);
                result = SquareRoot(input1);
                if (input1 >= 0)
                    printf("Square Root Result: %.5f\n", result);
                break;
            case 7:
                printf("Enter angle in degrees: ");
                scanf("%d", &input1);
                printf("Sine Result: %.5f\n", Sine(input1));
                break;
            case 8:
                printf("Enter angle in degrees: ");
                scanf("%d", &input1);
                printf("Cosine Result: %.5f\n", Cosine(input1));
                break;
            case 9:
                printf("Enter angle in degrees: ");
                scanf("%d", &input1);
                result = Tangent(input1);
                if (fabs(cos(input1 * M_PI / 180.0)) >= 1e-10)
                    printf("Tangent Result: %.5f\n", result);
                break;
            case 10:
                printf("Enter number: ");
                scanf("%d", &input1);
                result = Natural_Log(input1);
                if (input1 > 0)
                    printf("Natural Log Result: %.5f\n", result);
                break;
            case 11:
                printf("Enter number: ");
                scanf("%d", &input1);
                if (input1 >= 0)
                    printf("Factorial Result: %llu\n", Factorial(input1));
                else
                    printf("Factorial not defined for negative numbers.\n");
                break;
            case 12:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Main Entry Point
int main() {
    mainMenu();
    return 0;
}
