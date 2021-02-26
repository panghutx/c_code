//接收一个整型值，按照顺序打印它的每一位
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);
	
	return 0;
}