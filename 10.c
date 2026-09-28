#include<stdio.h>
double f(double x,double y){
    return x+y;
}
int main(){
    printf("RUNGE KUTTA METHOD");
    printf("\nName:Disha\nClass:CSE-A\nRoll no.:171");
    printf("\ndy/dx=x+y\n");
    double x0,y0,xn,h;
    printf("Enter the initial condition:");
    printf("\nx0=");
    scanf("%lf",&x0);
    printf("y0=");
    scanf("%lf",&y0);
    printf("Enter the calculation point xn=");
    scanf("%lf",&xn);
    printf("Enter the step size h=");
    scanf("%lf",&h);
    double x=x0;
    double y=y0;
    while(x<xn){
        double k1 =h*f(x,y);
        double k2 =h*f(x+h/2,y+k1/2);
        double k3 =h*f(x+h/2,y+k2/2);
        double k4 =h*f(x+h,y+k3);
        y=y+(k1+2*k2+2*k3+k4)/6.0;
        x+=h;
        }
    double result = y;
    printf("The value of y at time %lf is %lf\n",xn,y);
    return 0;
    }
