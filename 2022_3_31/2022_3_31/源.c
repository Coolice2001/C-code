#include <stdio.h>	//�����׼���롢���ͷ�ļ���

/*
int main()	//������-�������ڣ����ҽ���һ������f10����
{
	printf("��ã����磡");
	return 0;
}
*/



/*
int main()
{
	char zhl = 'A';	//char����ַ�,�ַ�ע���''	��
	printf("%c\n", zhl);	//%c��ӡ�ַ���ʽ�����ݡ�

	int age = 22;	//int��ʾ����,long��ʾ�����ͣ�long long���������ͣ�short��ʾ�����͡�
	printf("%d\n", age);	//%d��ӡ���͡�

	float xs = 3.14;	//float��ʾ�����ȸ����ͣ�double��ʾ˫���ȸ����͡�
	printf("%f\n", xs);	//%f��ӡ�㾫�ȸ����ͣ�%lf��ӡ˫���ȸ����͡�

	return 0;
}
*/



/*
int main()
{
	printf("%lld\n", sizeof(int));	//�鿴int���͵�������ռ�ڴ�Ĵ�С��4�ֽڡ�
	printf("%lld\n", sizeof(long));	//4�ֽڡ�
	printf("%lld\n", sizeof(long long));	//8�ֽڡ�
	printf("%lld\n", sizeof(short));	//2�ֽڡ�
	printf("%lld\n", sizeof(char));	//1�ֽڡ�
	printf("%lld\n", sizeof(float));	//4�ֽڡ�
	printf("%lld\n", sizeof(double));	//8�ֽڡ�
	return 0;
}
*/



/*
int main()
{
	short age = 22;	//���ڴ�����2���ֽڣ������22��ע���ʡ�ڴ档
	float weight = 60.1f;	//ϵͳĬ�ϱ���Ϊ˫���ȸ����ͣ����Լ�һ��f��ʾ�㾫�ȸ����͡�
	return 0;
}
*/



/*
int num1 = 20;	//ȫ�ֱ���-�����ڴ���飨{}��֮��ı�����
int main()
{
	int num1 = 10;	//�ֲ�����-�����ڴ���飨{}���ڵı�����ֻ���ڴ������ʹ�á�
	printf("%d", num1);	//�ֲ��������ȼ�����ȫ�ֱ�����
	return 0;
}
*/


	
int main()
{
	//�������������ĺ͡�
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1,&num2);	//scanf(scan_s)-���뺯����&ȡ��ַ���š�
	int sum = 0;	//C�����﷨�涨������Ҫ���嵱ǰ��������ǰ�档vs2022�����á�
	sum = num1 + num2;
	printf("sum = %d", sum);
	return 0;
}
