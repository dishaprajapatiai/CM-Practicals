// SECANT METHOD
//SECANT METHOD_EXP-2
#include <math.h>
#include <stdio.h>

double func(double x){
    return pow(x,3)-4*x-9;
}

double secant(double x0,double x1){
    double a=(x0*func(x1))-(x1*func(x0));
    double b=(func(x1)-func(x0));
    return a/b;
}

int main(){
    printf("Name:Disha\nClass:CSE-A\nRoll No.:172\n");
    printf("SECANT METHOD\n");
    double x0,x1,x2;
    printf("Enter the initial guess for x0:");
    scanf("%lf",&x0);
    printf("Enter the initial guess for x1:");
    scanf("%lf",&x1);
    
    for(int i=0;i<20;i++){
        x2=secant(x0,x1);
        printf("Iteration:%d\n",i+1);
        printf("Value of x2:%lf,Value of f(x2):%lf",x2,func(x2));
        printf("\n");
        if(fabs(x2-x1)<0.0001){
            printf("Root of given equation using secant method is %lf",x2);
            break;
        }
        x0=x1;
        x1=x2;
    }
    return 0;
}