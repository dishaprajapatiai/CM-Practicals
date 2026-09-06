#include<stdio.h>
#include<math.h>
#define epsilon 0.0001
// #include<stdlib.h>
double func(double x){
    return(3*x-cos(x)-1);
}
double dfunc(double x){
    return(3+sin(x));
}
int main(){
    
    printf("NEWTON RAPHSON METHOD\n");
    printf("Name:Disha\nClass:CSE-A\nRoll no.:171\n");
    double x0,x1;
    
    printf("Enter value of x0:");
    scanf("%lf",&x0);
    int i=1,matrix;
    printf("Enter maximum iteration:");
    scanf("%d",&matrix);
  
    
    while(i<=matrix){
        x1=x0-(func(x0)/dfunc(x0));
        if(fabs(x1-x0)<epsilon){
            printf("\nRoot founded x=%lf",x1);
            break;
        }
        x0=x1;
        printf("\nIteration %d:x=%lf,f(x)=%lf",i,x0,func(x0));
        i++;
        
    }
    if(i>matrix){
        printf("\nRoot not found within %d iterations",matrix);
    }
    return 0;
    
}