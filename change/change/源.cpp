#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void Change(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
	//��ֵ������ַ���õ�ַȥ�ҵ�main�е�ֵ������change�е�
}

int main(){
	int a = 10;
	int b = 20;
	Change(&a, &b);
	printf("a:%d,b:%d\n", a, b);
	return 0;
}

