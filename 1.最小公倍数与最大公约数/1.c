//写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入 
#include <stdio.h>
#include <stdlib.h>
//最容易想的方法 
int minmultiply(int a,int b);//声明函数 
int maxdivisor(int a,int b);
int main(int argc, char *argv[])
{
    int a,b;
    scanf("%d%d", &a, &b);
    int c=maxdivisor(a,b);
     printf("%d %d",maxdivisor(a,b),minmultiply(a,b));
    return 0;
}
int maxdivisor(int a,int b){//最大公约数为能整除a,b且小于a,b均值的数 
    int c,i;
    for(i=1;i<(a+b)/2;i++){
        if(a%i==0 && b%i==0){
            c=i;
        }
    }
    return c;
}
int minmultiply(int a,int b){//最小公倍数为大于a,或b,且能整除a,b的数 
	int i;
    for(i=a;i<=(a*b);i++){
        if(i%a==0&&i%b==0){
            return i;
            break;
        }
    }
    return 0;
}
