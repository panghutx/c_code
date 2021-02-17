#include<stdio.h>
 void test()
 {
 	//static修饰局部变量，生命周期变长 
 	static a=0;//a是一个静态的局部变量 
 	a++;
 	printf("a=%d\n",a);//a=1,2,3,4,5 
 }
 
 int main()
 {
 	int i=0;
 	while(i<5)
	{
 		test();
 		i++;
	}
 		
return 0;
	 
 }
