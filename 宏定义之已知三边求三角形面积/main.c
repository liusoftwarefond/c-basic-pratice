#include<stdio.h>
#include<math.h>
#define S(a,b,c) (a+b+c)/2
#define AREA(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
   
    printf("%.3lf",AREA(a,b,c, S(a,b,c)));
    return 0;
}
