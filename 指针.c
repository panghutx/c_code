#include<stdio.h>
int main()
{
	int a = 10;
	int*p = &a; 
	printf("%p\n", p);
	*p=20;//-�����ò�����/��ӷ��ʲ����� 
    printf("%d\n",a); 
	return 0;
}
