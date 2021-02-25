//计算n！和1！+2！+...+n!
#include<stdio.h>
int main()
{
	int a = 0;
	int result = 1;
	int add = 0;
	while (a < 5)
	{
		a++; 
		result = result*a;
		add = add + result;
		
	}
	printf("%d", result);//n!
	printf("%d", add);//1!+2!+...+n!
	
	return 0;
}