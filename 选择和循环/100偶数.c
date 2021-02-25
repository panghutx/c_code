#define _CRT_SECURE_NO_WARNINGS 1
//输出100以内的所有偶数
//method 1
#include<stdio.h>
int main()
{
	int i = 0;
	while (i <= 100)
	{
		printf("%d", i);
		i += 2;
	}
	return 0;
}

//method 2
#include<stdio.h>
int main()
{
	int i = -1;
	while (i <= 100)
	{
		i++;
		if (i % 2 == 0)
		{   
			printf("%d", i);
		}
	}
	return 0;
}
//method 3
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			printf("%d", i);
	}
	return 0;
}