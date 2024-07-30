	#include <stdio.h>

// Function prototype
double power(double base, int exponent);

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);

    return 0;
}

// Function to calculate power using recursion
double power(double base, int exponent) {
    // Base case: anything to the power of 0 is 1
    if (exponent == 0)
        return 1;
    // Recursive case: base^exponent = base * base^(exponent-1)
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    // Handling negative exponents: base^(-exponent) = 1 / base^exponent
    else
        return 1 / power(base, -exponent);
}
