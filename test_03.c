#define  _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

void print(unsigned int n)
{
	if (n > 9)//如果输入不为一位数则将这个数对10取整
	{
		print(n /10);
	}
	printf("%d ",n % 10);
}

int main()
{
	char arr0[] = { 0 };
	scanf("%s", &arr0);
	printf("%s \n", arr0);
	int i = 0;
	int a = sizeof(arr0) / sizeof(arr0[0]);
	for (i = 0; i < a; i++)
	{
		printf("输出:%d", arr0[i]);
	}
	return 0;
}