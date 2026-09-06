#include<stdio.h>
double f(double x){
    return 1/(1+x*x); // Function to integrate
}
int main(){
    printf("SIMPSON'S 1/3 METHOD\n");
    printf("Name:Disha\nClass:CSE-A\nRoll no.:171\n");
    int a,b,n;
    printf("Enter the lower limit = ");
    scanf("%d",&a);
    printf("Enter the upper limit = ");
    scanf("%d",&b);
    printf("Enter the number of sub-intervals (should be even) = ");
    scanf("%d",&n);
    if(n%2 != 0) {
        printf("Error: Sub-intervals must be even.\n");
        return 1;}
    double h = (b-a)/(double)n; // Step size
    double sum = f(a) + f(b); // Initial sum with f(a) and f(b)
    for(int i=1; i<n; i++){
        double x = a + i*h; // Current x value
        if(i%2 == 0){
            sum += 2 * f(x); // Add twice for even index
        }else{
            sum += 4 * f(x); // Add four times for odd index
        }
    }
    double integ = (h/3.0) * sum; // Multiply by h/3 for the final result
    printf("The result is = %.2lf\n", integ);
    return 0;
}
