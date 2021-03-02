#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };
	
	printf("%d\n", sizeof(arr1));//4
	printf("%d\n", sizeof(arr2));//3
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//随机数
	
	return 0;
}