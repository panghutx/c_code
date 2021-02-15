#include<stdio.h>
int main()
{
	int a = 10;
	int*p = &a; 
	printf("%p\n", p);
	*p=20;//-解引用操作符/间接访问操作符 
    printf("%d\n",a); 
	return 0;
}
