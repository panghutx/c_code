//列出n!
#include<stdio.h>
int jiecheng(int n)
{
	int a = 0;
	int rst = 1;
	while (a<n)
	{
		a++;
		rst = rst*a;
	}
	return rst;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	jiecheng(i);
	printf("%d", jiecheng(i));

	return 0;