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
    x1=(-1*b+sqrt(d))/(2*a);//ʵ����ʽ���Ƶ���ͼһ
    x2=(-1*b-sqrt(d))/(2*a);
    printf("x1=%.3lf %.3lf",x1,x2);
}
void equalzero(double a,double b,double c,double d){
    x1=(-1*b)/(2*a);
    printf("x=%.3lf",x1);
}
void smallzero(double a,double b,double c,double d){
    double t=sqrt(-d)/(2*a);
    //֤����
    //�������ʱsqrt(b*b-4ac)=sqrt(-1*(4ac-b*b))=sqrt(-1)*sqrt(4ac-b*b)=i*sqrt(4ac-b*b)
    //x������⹫ʽ��ʵ����ͬ��������ȡ���������ɣ���ͼ��
    printf("x1=%.3lf+%.3lfi\t",-b/(2*a),t);
    printf("x2=%.3lf-%.3lfi",-b/(2*a),t);
}
