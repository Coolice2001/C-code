#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*
int main()
{
	//1.���泣��
	3;
	4;
	2.1;
	//2.const���εĳ�������
	const int num = 3;	//const-�����ԡ���һ���������г����ԣ����ʻ��Ǳ�����
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);
	return 0;
}
*/



/*
int main()
{
	const int a = 10;	//a��һ����������
	int arr[a] = { 0 };	//������Ҫ������
	return 0;
}
*/



/*
//3.#define����ı�ʶ��������
#define max 10
int main()
{
	int arr[max] = { 0 };
	printf("%d\n", max);
	return 0;
}
*/



/*
//4.ö�ٳ�����
enum Color
{
	Red,
	Yellow,
	Blue
};

int main()
{
	enum Color A = Red;
	printf("%d\n", Red);	//0
	printf("%d\n", Yellow);	//1
	printf("%d\n", Blue);	//2
	return 0;
}
*/