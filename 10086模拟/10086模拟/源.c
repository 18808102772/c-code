#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("��������������������10086��ѯ���ܡ�������������������\n");
		while (2)
	{
			printf("����1����ѯ��ǰ�������\n");
			printf("����2����ѯ��ǰʣ������\n");
			printf("����3����ѯ��ǰʣ��ͨ��\n");
			printf("����0���˳�������ѯϵͳ�������룺\n");
			int x;
			scanf("%d", &x);
			if (x == 1)
			{
				printf("��ǰ�������Ϊ��999Ԫ\n");
			}
			else if (x == 2)
			{
				printf("��ǰʣ������Ϊ5G\n");
			}
			else if (x == 3)
			{
				printf("��ǰʣ��ͨ��Ϊ��189����\n");
			}
			else if (x == 0)
			{
				break;
			}
			else
			{
				printf("�������\n");
			}
		{

		}
	}
	return 0;
}