//һ�������������ݵ����� a��
//һ�� int ������ n ��ʾ��Ҫ����������ݸ�����
//Ҫ��
//
//���� for ѭ���������� a ���±�Ϊ 0~n - 1 ���� n ��Ԫ�أ������ÿһ�����ݡ�
//Ҫ�����ÿһ�����ݺ������һ������, ��
//�������������һ���У���������������������������һ�����С�

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int arrorder1(int* a, int n){
	for (int x = 0; x < n; x++){
		printf("%d,", *(a+x));
	}
	printf("\n");
}


int arrorder2(int* a, int n){
	int (*arr)[] = a;
	for (int x = 0; x < n; x++){
		printf("%d,", (*arr)[x]);
	}
	printf("\n");
}