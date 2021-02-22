#include<stdio.h>
void Swap(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
	
}
int main()
{
	int x=10;
	int y=20;
	Swap(&x, &y);
	printf("x=%d,y=%d", x, y);
	return 0;
}