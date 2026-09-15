// BISECTION METHOD
//BISECTION METHOD_EXP-1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define f(x) x*x*x-4*x-9


int main(){
    float x0,x1,x2,f0,f1,f2,e;
    int i=0,max;
    printf("\nName:Disha\nClass:CSE-A\nRoll no.:171\nBISECTION METHOD");
    up:
    printf("\n\nEnter numbers x0 and x1:");
    scanf("%f,%f",&x0,&x1);
    
    f0=f(x0);
    f1=f(x1);
    if ((f0*f1)<0){
        printf("\nCorrect inputs");
    }
    else{
        printf("\nWrong inputs");
        goto up;
    }
    printf("\nEnter permissible error:");
    scanf("%f",&e);
    printf("\nEnter maximum iterations:");
    scanf("%f",&max);
    do{
        x2=(x0+x1)/2;
        f2=f(x2);
        if (f0*f2<0){
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
        printf("\nIteration:%d",i);
        printf("Root is:%f",x2);
        printf("Function value:%f",f2);
        if (i>max){
            printf("\nstop");
            exit(0);
        }
        
    }
    while(fabs(x0-x1)>=e);
    printf("\nRoot is:%f",x2);
    return 0;
}
