//求第n个斐波那契数 1 1 2 3 5 8 13 21 34 55 
#include<stdio.h>
Fib(int n)
{
	int x = 1;
	int y = 1;
	int z = 1;
	while (n>2)    
	{
		z = x + y;
		x = y;
		y = z;
		n--;
	}
	return z;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = Fib(a);
	printf("%d", ret);
	return 0;
}