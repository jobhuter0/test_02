#define  _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

void print(unsigned int n)
{
	if (n > 9)//������벻Ϊһλ�����������10ȡ��
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