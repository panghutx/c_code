
#include<stdio.h>
//������ʵ��
int Max(int x, int y)
{
if (x > y){
	return x;
}
else{
	return y;
}
}
//��Ķ���
#define Max(x,y) (x>y?x:y)
int main()
{
	int a = 10;
	int b = 20;
	//����
	int max = Max(a, b);
	printf("%d\n", max);
	//��
	max = Max(a, b);
	printf("%d\n", max);

	return 0;
}