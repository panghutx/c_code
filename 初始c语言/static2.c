#include<stdio.h>
 void test()
 {
 	//static���ξֲ��������������ڱ䳤 
 	static a=0;//a��һ����̬�ľֲ����� 
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
