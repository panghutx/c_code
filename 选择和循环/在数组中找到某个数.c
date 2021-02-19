//在一个数组中找到某个数字
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 17;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了,下角标是%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("没找到");
	return 0;
}
//拆半查找算法
#include<stdio.h>
int main()
{
	int k = 7;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左角标
	int right = sz - 1;//右角标
	while (left <= right)
	{
		int mid = (left + right)/2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
		printf("没找到");
	return 0;