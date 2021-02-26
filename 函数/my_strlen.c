//编写函数，求字符串长度
//method 1
#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str !='\0')
	{
		count++;
		str++;
	}	
	return count;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d", len);

	return 0;
}
//2递归求字符串长度
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}