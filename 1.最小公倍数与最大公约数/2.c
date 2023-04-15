//辗转相除法求最大公约数之后，最小公倍数为两数相乘除以最大公约数 
#include <stdio.h>
#include <stdlib.h>
int minmultiply(int a,int b);//声明函数 
int maxdivisor(int a,int b);
int main(int argc, char *argv[]){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",maxdivisor(a,b),minmultiply(a,b));
	return 0;
}
int maxdivisor(int a,int b){
		int c=a>b?a:b;
		a=(a*b)/c;//c为二者中较大值，a为较小值 
		int d=1;
		while(d){
			d=c%a;//d为余数 
			c=a;
			a=d;
		}
		return c; 	
}
int minmultiply(int a,int b){
	return (a*b)/maxdivisor(a,b);
} 

