
#include<stdio.h>
//函数的实现
int Max(int x, int y)
{
if (x > y){
	return x;
}
else{
	return y;
}
}
//宏的定义
#define Max(x,y) (x>y?x:y)
int main()
{
	int a = 10;
	int b = 20;
	//函数
	int max = Max(a, b);
	printf("%d\n", max);
	//宏
	max = Max(a, b);
	printf("%d\n", max);

	return 0;
}