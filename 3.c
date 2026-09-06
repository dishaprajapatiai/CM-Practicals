#include<stdio.h>
int main(){
    printf("Name:Disha\nClass:CSE-A\nRoll no.:171\n");
    printf("LAGRANGE INTERPOLATION\n");
    double x[100],y[100],xi,term,result=0.0;
    int n;
    printf("Enter max no. of points=");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("\nValue of x[%d]=",i);
        scanf("%lf",&x[i]);
        printf("\nValue of y[%d]=",i);
        scanf("%lf",&y[i]);

    }
    printf("\nPoint where interpolated value has to be found=");
    scanf("%lf",&xi);
    for(int i=0;i<n;i++){
        term=y[i];
        for(int j=0;j<n;j++){
            if(i!=j){
                term*=(xi-x[j])/(x[i]-x[j]);
            }
        }
        result+=term;
    }
    printf("\nInterpolated value at x=%lf is y:%lf",xi,result);
    printf("\nInterpolated polynomial:");
    printf("\nP(x)=");
    for(int i=0;i<n;i++){
        printf("(%lf)",y[i]);
        for(int  j=0;j<n;j++){
            if(i!=j){
                printf("*(x-%lf)/(%lf-%lf)*",x[j],x[i],x[j]);

            }
        }
        if(i<n-1){
            printf("+");
        }
    }
    return 0;
}