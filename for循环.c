//num 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
			printf("1");//输出100个1
	}
	return 0;
}
//num 2
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	for (; a < 10; a++)
	{
		for (; b < 10; b++)
			printf("1");//输出10个1
	}
	return 0;
}