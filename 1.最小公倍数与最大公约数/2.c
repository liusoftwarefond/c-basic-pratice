//շת����������Լ��֮����С������Ϊ������˳������Լ�� 
#include <stdio.h>
#include <stdlib.h>
int minmultiply(int a,int b);//�������� 
int maxdivisor(int a,int b);
int main(int argc, char *argv[]){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",maxdivisor(a,b),minmultiply(a,b));
	return 0;
}
int maxdivisor(int a,int b){
		int c=a>b?a:b;
		a=(a*b)/c;//cΪ�����нϴ�ֵ��aΪ��Сֵ 
		int d=1;
		while(d){
			d=c%a;//dΪ���� 
			c=a;
			a=d;
		}
		return c; 	
}
int minmultiply(int a,int b){
	return (a*b)/maxdivisor(a,b);
} 

