//�������� char short int long  long long float double
//Ϊ�˵õ�ĳ�����ͻ�ĳ���������ض�ƽ̨�ϵ�׼ȷ��С��ʹ�� sizeof �������
//���ʽ sizeof(type) �õ���������͵Ĵ洢�ֽڴ�С 
#include<stdio.h>
int main()
{
	printf("char�Ĵ洢��СΪ%d\n", sizeof(char));//1 
	printf("short�Ĵ洢��СΪ%d\n", sizeof(short));//2
	printf("int�Ĵ洢��СΪ%d\n", sizeof(int));//4
	printf("long�Ĵ洢��СΪ%d\n", sizeof(long));//4
	printf("long long�Ĵ洢��СΪ%d\n", sizeof(long long));//8
	printf("float�Ĵ洢��СΪ%d\n", sizeof(float));//4
	printf("double�Ĵ洢��СΪ%d\n", sizeof(double));//8
	return 0;
}
