//是素数返回1，不是素数返回0
#include <math.h>

int is_prime(int n)//9
{
	//2->n-1
	int j = 0;
	for(j=2; j<=sqrt(n); j++)
	{
		if(n%j == 0)
			return 0;
	}
	return 1;
}


int main()
{
	//打印100-200之间的素数
	int i = 0;
	for(i=100; i<=200; i++)
	{
		//判断i是否为素数
		if(is_prime(i) == 1)
			printf("%d ", i);
	}

	return 0;
}
