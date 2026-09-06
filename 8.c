#include<stdio.h>
double f(double x) {
    return 1 / (1 + x * x); }
int main() {
    printf("SIMPSON'S 3/8 METHOD\n");
    printf("Name: Disha\nClass: CSE-A\nRoll No.: 171\n");
    double a, b;
    int n;
    printf("Enter the lower limit a = ");
    scanf("%lf", &a);
    printf("Enter the upper limit b = ");
    scanf("%lf", &b);
    printf("Enter the number of sub-intervals (multiple of 3) = ");
    scanf("%d", &n);
    if (n % 3 != 0) {
        printf("Error: Sub-intervals must be a multiple of 3.\n");
        return 1;
    }
    double h = (b - a) / n; 
    double sum = f(a) + f(b); 
    for (int i = 1; i < n; i++) {
        double x = a + i * h; 
        if (i % 3 == 0) {
            sum += 2 * f(x); 
        } else {
            sum += 3 * f(x);
        }
    }
    double integ = (3 * h * sum) / 8.0; 
    printf("The result = %.6lf\n", integ);
    return 0;
}
