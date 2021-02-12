//数据类型 char short int long  long long float double
//为了得到某个类型或某个变量在特定平台上的准确大小，使用 sizeof 运算符。
//表达式 sizeof(type) 得到对象或类型的存储字节大小 
#include<stdio.h>
int main()
{
	printf("char的存储大小为%d\n", sizeof(char));//1 
	printf("short的存储大小为%d\n", sizeof(short));//2
	printf("int的存储大小为%d\n", sizeof(int));//4
	printf("long的存储大小为%d\n", sizeof(long));//4
	printf("long long的存储大小为%d\n", sizeof(long long));//8
	printf("float的存储大小为%d\n", sizeof(float));//4
	printf("double的存储大小为%d\n", sizeof(double));//8
	return 0;
}
