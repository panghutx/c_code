#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int d;
		d = a;
		a = b;
		b = d;
	}
	if (a < c)
	{
		int d;
		d = a;
		a = c;
		c = d;
	}
	if (b<c)
	{
		int d;
		d = b;
		b = c;
		c = d;
	}
	printf("%d%d%d", a, b, c);
	return 0;
}