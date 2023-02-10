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
	unsigned int i;
	scanf("%d",&i);
	print(i);
	return 0;
}