#include <stdio.h>
int main() {
    int n;
    printf("Name:Disha\nClass:CSE-A\nRoll No.: 171");
    printf("\nNEWTON DIVIDED DIFFERENCE FORMULA");
    printf("\nEnter the number of data points: \n");
    scanf("%d",&n);
    double x[n],y[n];
    printf("Enter the data points in the form (x,y):\n");
    for(int i=0;i<n;i++) {
        printf("x[%d]= ",i);
        scanf("%lf",&x[i]);
        printf("y[%d]= ",i);
        scanf("%lf",&y[i]);
    }
    double x_val;
    printf("Enter the value of x at which you want to interpolate: ");
    scanf("%lf",&x_val);
    double result=0;
    double f[n][n];
    for(int i=0;i<n;i++){
        f[i][0]=y[i];
    }
    for(int j=1;j<n;j++){
        for(int i=0;i<n-j;i++){ 
            f[i][j]=(f[i+1][j-1]-f[i][j-1])/(x[i+j]-x[i]);
        }
    }
    result=f[0][0];
    double term=1;
    for(int j=1;j<n;j++){
        term*=(x_val-x[j-1]); 
        result+=f[0][j]*term;
    }
    printf("Interpolated value at x = %lf is %lf\n",x_val,result);
    return 0;
}