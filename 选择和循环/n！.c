//计算n！
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int result = 1;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		result = result*a;
	}
	printf("%d", result);
	return 0;
}