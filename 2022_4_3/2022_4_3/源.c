#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>	//strlen��������Ҫ��ͷ�ļ�

/*
int main()
{
	char arr1[] = "abc";	//���飬Ĭ����ת���ַ���\0����"abc"�ַ�����
	char arr2[] = { 'a','b','c' };	// û��ת���ַ���\0������\0����־�ַ����Ľ�����'a','b','c'�ַ���
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
*/



/*
int main()
{
	char arr1[] = "abc";			// ����һ���ַ�����
	char arr2[] = { 'a','b','c' };	// ����һ���ַ�����
	char arr3[] = { 'a','b','c','\0'};	//��\0����־�ַ����Ľ�����
	printf("%d\n", strlen(arr1));	//strlen �����ַ����ĳ��ȡ�3.
	printf("%d\n", strlen(arr2));	//������ȡ�
	printf("%d\n", strlen(arr3));
	return 0;
}
*/



/*
int main()
{
	//printf("\");
	printf("%lld\n",strlen("c\test\32\test.c"));	//"\"ת���ַ���
	printf("%c\n", '\132');	//'\'���1-3��8���ơ�
	printf("%c\n", '\x61');	//'\x'���2��16���ơ�
	return 0;
}
*/
