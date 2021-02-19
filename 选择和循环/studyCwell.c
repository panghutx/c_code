#include<stdio.h>
#include<string.h>
int main()
{
	//You can study C well
	//********************
	//Y******************l
	//Yo****************ll
	//      .....
	//You can study C well
	char arr1[] =" I can study C well\0";
	char arr2[] = "******************\0";
	int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0] - 1;//err
	int right = strlen(arr1)-1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}
		return 0;
}