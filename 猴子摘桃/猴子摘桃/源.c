#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int total;
	int x;
	x = 1;
	total = 1;
	do
	{
		total = (total + 1) * 2;
		x++;
	} while (x<=9);
	printf("��һ��ժ��%d��\n",total);
	return 0;
}