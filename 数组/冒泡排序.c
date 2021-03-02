//冒泡排序
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;//趟数
	for (i = 0; i < sz-1; i++)//sz:元素个数
	{
		int flag = 1；//假设这一趟要排列的数据已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0;j<sz-1-i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = 0;
				temp=arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
				flag = 0；//本趟排序数据不完全有序
			}
		}
		if(flag ==1);
			break;
	}
}
int main()
{
	int i = 0;
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//arr是数组，我们对数组进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
	bubble_sort(arr, sz);
	for (i = 0; i < sz ; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}