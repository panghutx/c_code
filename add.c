#include <stdio.h>
 
// �����ⶨ����� x �� y
int x;
int y;
int addtwonum()
{
    // �������������� x �� y Ϊ�ⲿ����
    extern int x;
    extern int y;
    // ���ⲿ������ȫ�ֱ�����x �� y ��ֵ
    x = 1;
    y = 2;
    return x+y;
}
 
int main()
{
    int result;
    // ���ú��� addtwonum
    result = addtwonum();
    
    printf("result Ϊ: %d",result);
    return 0;
}

//else 
#include<stdio.h>
int Add(int x,int y)
{

return x+y;
}

int main()
{
    printf("%d",Add(1,2));
	return 0;	
}
