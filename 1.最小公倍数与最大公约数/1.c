//д�����������ֱ����������������Լ������С�������������������������������������������������ɼ������� 
#include <stdio.h>
#include <stdlib.h>
//��������ķ��� 
int minmultiply(int a,int b);//�������� 
int maxdivisor(int a,int b);
int main(int argc, char *argv[])
{
    int a,b;
    scanf("%d%d", &a, &b);
    int c=maxdivisor(a,b);
     printf("%d %d",maxdivisor(a,b),minmultiply(a,b));
    return 0;
}
int maxdivisor(int a,int b){//���Լ��Ϊ������a,b��С��a,b��ֵ���� 
    int c,i;
    for(i=1;i<(a+b)/2;i++){
        if(a%i==0 && b%i==0){
            c=i;
        }
    }
    return c;
}
int minmultiply(int a,int b){//��С������Ϊ����a,��b,��������a,b���� 
	int i;
    for(i=a;i<=(a*b);i++){
        if(i%a==0&&i%b==0){
            return i;
            break;
        }
    }
    return 0;
}
