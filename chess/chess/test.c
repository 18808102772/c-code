#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>


int main()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		printf("***************************************************\n");
		printf("****************** 1.��ʼ  0.�˳� ******************\n");
		printf("***************************************************\n");
		int choice = 0;
		scanf("%d", &choice);
		if (choice == 0)
		{
			printf("�˳�");
			break;
		}
		else if (choice == 1)
		{
			printf("\n\n\n\n");
			game();
		}
		else
		{
			printf("�Ƿ��ַ������������룡");
		}
	}
	return 0;
}