#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char cChar;
	cChar = getchar();
	putchar(cChar);
	putchar('\n');
	//getchar();               �õ���getchar()     ���س�����=����
	putchar(getchar());
	putchar('\n');
	return 0;
}