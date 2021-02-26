//递归求n！
int Fac1(int n)
{
		if (n <= 1)
			return 1;
		else
			return n*Fac1(n - 1);

}
#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	int result = Fac1(num);
	printf("%d", result);
	return 0;
}