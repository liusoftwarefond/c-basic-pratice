#include<stdio.h>
#include<math.h>
void bigzero(double a,double b,double c,double d);
void equalzero(double a,double b,double c,double d);
void smallzero(double a,double b,double c,double d);
double x1,x2;
int main()
{   
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double judge=b*b-4*a*c;
    if(judge>0){
        bigzero(a,b,c,judge);
    }
    else if(judge==0){
        equalzero(a,b,c,judge);
    }
    else{
        smallzero(a,b,c,judge);
    }
    return 0;
}
void bigzero(double a,double b,double c,double d){
    x1=(-1*b+sqrt(d))/(2*a);//实根公式，推导见图一
    x2=(-1*b-sqrt(d))/(2*a);
    printf("x1=%.3lf %.3lf",x1,x2);
}
void equalzero(double a,double b,double c,double d){
    x1=(-1*b)/(2*a);
    printf("x=%.3lf",x1);
}
void smallzero(double a,double b,double c,double d){
    double t=sqrt(-d)/(2*a);
    //证明：
    //当有虚根时sqrt(b*b-4ac)=sqrt(-1*(4ac-b*b))=sqrt(-1)*sqrt(4ac-b*b)=i*sqrt(4ac-b*b)
    //x的虚根解公式与实跟相同，用上述取代开根即可，见图二
    printf("x1=%.3lf+%.3lfi\t",-b/(2*a),t);
    printf("x2=%.3lf-%.3lfi",-b/(2*a),t);
}
