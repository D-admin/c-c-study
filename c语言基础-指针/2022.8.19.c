#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ָ��  ָ����ǵ�ַ��ָ��������ĵ�ַ����ָ���������ʹ������ĵ�ַ������ָ����ǵ�ַ
// �ڴ�Ĺ����Ǹ�ÿ�����򻮷֣�Ȼ���ÿ���ռ��� 
// 32λ - 32����ַ�� - ������ -ͨ�� -1/0�ź� //  ���ź�ת���������ź� 1��0��ɵĶ��������� Ҳ�ͳ��˵�ַ
// 32����ַ�� 2��32�η��ĵ�ַ����2��32�η����ڴ浥Ԫ 
//һ���ڴ浥Ԫ��һ�ֽڣ�byte��
/*
int main()
{
	int a = 10;	//a���ڴ���Ҫ���俴�ռ䣬4���ֽ�

	printf("%p\n", &a);// %p ר��������ӡ��ַ

	int*pa = &a;// pa��������ŵ�ַ�ģ���c������pa��ָ�����
	// * ˵��pa��ָ����� int˵��paָ��Ķ�����int���͵�

	char ch = 'w';
	char*pc = &ch;
	return 0;	
}
*/

//��Ҫ����д ����������
/*
int main()
{

	int* pa = &pa;

	return 0;
}
*/

//*paĿ��
/*
int main()
{
	int a = 10;//���Ǵ����������ַ��Ϊ���ҵ�a
	int* pa = &a;
	*pa = 20;//*�����ò���  *pa����ͨ��pa����ĵ�ַ���ҵ�a
	//��Ӹı�a���ҵ�a
	printf("%d\n", a);
	return 0;
}
*/

//ָ�������С   ָ��Ĵ�С����ͨ�� ָ��������ȡ��ַ�ģ�ָ����Ҫ���ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ���ռ�
//32λ 32bit -4byte
//64λ 64bit -8byte
/*
int main()
{

	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));

	return 0;
}
*/


//�ṹ�� ������������������ ������c���Դ����µ����ͳ���
/*
//����һ��ѧ��
struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;//˫���ȴ�ӡ��%lf
};
//����һ���������
struct Book
{
	char name[20];
	//20���ַ�����
	float price;
	char id[30];
};
int main()
{
	struct Stu s = {"����", 20, 85.5};//����һ��ѧ��s

	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����  .��Ա����
	//%s���ַ���  %c�ǵ��ַ�  %d����  %lf ˫���ȸ�����
	struct Stu*ps = &s;//struct Stu�ṹ����ָ��
	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);//��ָ����  psָ��s ���Կ�����

	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//������һ������д������   
	//ʹ�÷���    �ṹ���ָ�� -> ��Ա������ 
	return 0; 
}
*/