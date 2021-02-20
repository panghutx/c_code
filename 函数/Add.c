#include<stdio.h>
//自定义函数
Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int add = Add(3, 4);
	printf("%d", add);
	return 0;
}