#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ѡ�����
/*
int main()
{

	int input = 0;//�����ֵ

	printf("�Ƿ�ú�ѧϰ?(1/0)\n");//ѡ����

	scanf("%d\n", &input);//����

	if (input == 1)//�������1
		printf("��\n");
	else		   //����
	    printf("��\n");

	return 0;
}
*/

//ѭ�����

//while     
//for 
//do...while

/*
int main()
{
	int line = 0;
	while (line<30000)//��С��30000ʱ��ѭ��+
	{
		printf("д����:%d\n", line);

		line++;
	}
	if (line >= 30000)//�������
	{
		printf("good");

	}


	return 0;
}
*/

//����
/*
Add(int x, int y)//������ʽ ��������ʹ�ã������ÿ������
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//������ʽ
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	//int c = a + b;
	
	//������ʽ
	int c= Add(a, b);


	printf("%d\n", c);



	return 0;
}
*/

//���� һ����ͬ���͵ļ���
/*
int main()//1-10������
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//�洢��������
	int i = 0;
	while (i < 10)
	{
		printf(" % d\n", arr[i]);
		i++;
	}
	//���������±��ʾ��
	
	//char ch[5] = {'a','b','c','d'};//����ȫ������ʣ���Ĭ��Ϊ0

	return 0;
}
*/
//������

//һ    ����������  + - * / %     �������˶��������ǵó����Ķ������������ǼӸ�.0
/*
int main()
{
	//int a = 9 / 2;      //��%d\n ���ܵĳ���������%f\n�ò���������
	//float a = 9 / 2.0;    //��%f\n���ܵĳ�С��
	int a = 9 % 2; //ȡģ��ȡ������
	printf("%d\n", a);

	return 0;
}
*/

//��     ��λ������ >> ����     << ����  �����Ƕ�����
/*
int main()
{
	int a = 2;
	int b = a << 1;

	printf("%d\n", b);
	return 0;

}
*/

//��     λ������   & ��λ��   ^ ��λ���  | ��λ�� 

//��     ��ֵ������ =    +=     -=    *=    /=    &=    ^=   |=    <<=    >>=
/*
int main()
{
	int a = 2;
	a = a + 5; ����д��a += 5;ͬ��
	
}
*/

//��     ��Ŀ������  ���߼�������    -��ֵ +��ֵ &ȡ��ֵ    sizeof �����������ͳ���    �����ͣ� ǿ������ת
//   ~ ��һ�����Ķ����ư�λȡ��   -- ǰ��,����--    ++ ǰ�ã�����++      * ��ӷ��ʲ������������ò�������
/*
int main()
{
	//c������ 0��ʾ�� ��0��ʾ��
	int a = 1;
	printf("%d\n", !a);//1������
	//ʹ�÷�ʽ
	if (a)//���aΪ��....
	{

	}
	if (!a)//���aΪ��....
	{

	}

	return 0;
}
*/

//sizeo��ʹ��
/*
int main()
{
	//sizeo ��һ�������� �������ͻ��߱����Ĵ�С

	int a = 10;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//����ʡ��sizeof��ģ�������һ�㲻ʡ��

	return 0;
}
*/

//sizeo����������Ԫ�ظ���
/*
int main()
{
	//10��Ԫ��
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//����������ܴ�С	
	printf("%d\n", sizeof(arr[0]));//���������е�һ���Ĵ�С
	int sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�ظ���
	printf("%d\n", sz);
		return 0;
}
*/

//~ʹ��
/*
int main()
{
	int a = 0;
	printf("%d\n", ~a);//��λȡ���������ж������е����֣�1���0��0���1.

	return 0;	
}
*/
//һ��������32byte ������0��32��0byte ����0��~a��32��1byte �������ڴ��д�����ǲ��룬����0�Ĳ�����-1�Ĳ���������-1
//һ�������Ķ����Ʊ�ʾ������  ԭ�� ���� ����
//  ����  -1��ԭ��1000000000000000000000001  �������λ����0��1���� 1111111111111111111111111111111111111111110  ����Ҫ����1 1111111111111111111111111111111111111111111
//������ ԭ�� ���� ������ͬ  

//++��ʹ��
/*
int main()
{
	//int a = 10;
	//int b = ++a;//ǰ��++  ��++ ��ʹ��
	//printf("%d\n", b);
	//printf("%d\n", a);

	int a = 10;
	int b = a++;//��++  ��ʹ�� ��++
	printf("%d\n", b);
	printf("%d\n", a);

	return 0;
}
*/

//(����) ǿ������ת��
/*
int main()
{
	int a = (int)3.14; //���ϣ�int�� ǿ������ת�� ���Ͳ�ƥ���ʱ���ʹ�ã���һ�㲻�Ƽ���˵�����ʱ��������
	printf("%d\n", a);//��Ϊa������ ���Կ��ܶ�ʧ����

	return 0;
}
*/

//��ϵ������ >=   <=  <  >   !=���ڲ��Բ����  ==���ڲ������

//�߼������� && �߼���(���ҵ���˼)  || �߼��򣨻��ߣ�
/*
int main()
{
	int a = 3;
	int b = 5;
	int c = a || b;
	printf("%d\n", c);
	
	//int a = 3;
	//int b = 5;
	//int c = a && b;
	//printf("%d\n", c);//�����1 ����Ϊ��
	//if (a && b);
	{

	}
	return 0;
}
*/

//��������������Ŀ�������� exp1 ��exp2 ��exp3 ��exp�������������� ��
//exp1  ����   exp2���㣬�������ʽ�Ľṹ��exp2�Ľ�� 
//exp1  ������ exp3���㣬�������ʽ�Ľṹ��exp3�Ľ��
/*
int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	// ��һ��д��
	if (a > b)
		max = a;
	else
		max = b;
	
	//�ڶ���д��
	max = a > b ? a : b;


	printf("%d\n", max);

	return 0;
}
*/

//���ű��ʽ exp1��exp2��exp3��...expN  ���ű��ʽ�Ǵ��������Դ˼��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
/*
int main()
{

	//(2, 4 + 5, 6);//�򵥵Ķ��ű��ʽ
	int a = 0;
	int b = 3;
	int c = 5;
	int d = (a = b + 2, c = a - 4, b = c + 2);//��������Ƕ��ű��ʽ ��������һ�������൱�ڸ�ֵһ��
	printf("%d\n", d);
	return 0;
}
*/

//�±����ã��������úͽṹ��Ա []	() . ->
/*
int	main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%d\n", arr[4]);//[]�����±����ò�����

	return 0;
}
*/
/*
int main()
{
	//���ú�����ʱ�򣬺���������ģ������Ǻ������ò�����  ��������������ַ�����
	printf("%d\n", 100);


	return 0;
}
*/

//�����ؼ��� 1.c�����ṩ�Ĺؼ��֣������Լ������ؼ��� 2.��Щ�ؼ��ֲ�����������
//auto break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static struct switch typedef union unsigned void volatile while

//�ؼ���
/*
auto ���Զ��ģ�ÿ���ֲ���������auto���ε�
break ѭ���switch�����
case  safe_cast �����ʹ��
char �ַ�����
const ������
continue ����
default Ĭ��
do 
double ˫���ȸ�����
enum ö��
extern ���������ⲿ���ŵ�
float �����ȸ�����
for forѭ��
goto goto���
if  if���
int ����
long ������
register �Ĵ��� ��ʹ��д������Ҳ���Լ��ж��Ƿ�ŵ��Ĵ�����
return ����
short ������
signed �з��ŵ�
sizeof ���С
static ��̬��
struct �ṹ��
switch ���
typedef ���Ͷ���
union ������/������
unsigned �޷��ŵ�
void ��/��
volatile 
while
*/

//register ��ʹ��
/*
int mian()
{
	register int num = 100;//����num��ֵ����ڼĴ����У������飬�Ƿ���������ȥ�ж�
			//�洢λ��   �Ĵ���  ���ٻ���  �ڴ�  Ӳ��  ���� ��д�ٶ��ɿ쵽�� �洢�ռ�Ҳ��С����
			//���Խ�� �ٶ�Խ�� �ռ�ԽС  �Ĵ�����cpu��
	return 0;
}
*/

//auto��ʹ��
/*
int mian()
{
	int a = 10;//a���Զ��������Զ����ٵģ��Զ�����    ����ǰ��auto����ʡ�Ե�

	return 0;
}
*/

//typedef �����ض���
/*
typedef unsigned int u_int;//��unsigned����������u_int��������ʹ�ÿ��Լ�
int mian()
{
	unsigned int num = 100;
	u_int num = 100;//����ĵ�ͬ�����


	return 0;
}
*/

//static ��̬��  1.���ξֲ����� 2.����ȫ�ֱ��� 3.���κ���
//δ��static
/*
void test()//c�����У�void�ǿյ���˼���������������޷���ֵ���ͣ�����return���
{
	int a = 1;
	a++;
	printf("%d", a);

}

int main()
{
	int i = 0;
	while (i<10)
	{
		test();
		i++;
	}


	return 0;
}
*/

//ʹ��static ���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�

// ����static���κ� ��������ջ���ı䵽��̬��
//static ���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
//������ϣ��һ�������������ķ�Χ�����٣�����static����
/* 
void test()
{
	static int a = 1; //�����ϴεĸı䣬������
	a++;
	printf("%d", a);

}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}

	return 0;
}
*/
// �ڴ�ּ�������ѧϰ���������ʱѧϰ�� ջ�� ���� ��̬��
// ջ�� ��� �ֲ����� �����Ĳ���
// ���� ��̬�ڴ����
// ��̬�� ȫ�ֱ��� static���εľ�̬����
// ��̬�����������ǳ�����������ڣ����Ըı���������ںܳ�

//extern �����ⲿ���ţ������2022.8.18-2  ��4�� 
/*
extern int g_val;
int main()
{
	printf("%d\n", g_val);
	return 0;
}
*/
//ȫ�ֱ���������Դ�ļ��ڲ����Ա�ʹ�ã���Ϊȫ�ֱ��������ⲿ�������ԣ����Ǳ�static���κ󣬾ͱ�����ڲ��������ԣ�����Դ�ļ��������ӵ������̬��ȫ�ֱ���  ����Ҳһ���ᱻ�ı��ⲿ���ڲ�

//�����ⲿ�����������2022.8.18-2.c  ��12��
/*
extern int Add(int x, int y);//��������
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
*/

//define ���峣���ͺ�    #define //��һ��Ԥ����ָ��

//1.define �������
/*
#define Max 1000//�������ʾ��
int main()
{
	printf("%d\n", Max);

	return 0;
}
*/
//2.define �����
//���ӣ���
/*
#define ADD(X,Y) X+Y //��Ȼ���������У�����Ϊdefine����ĺ����滻�� 
int main()
{


	printf("%d\n", 4*ADD(2, 3)); // �ᱻ����4*2+3�����Եó�������20
	return 0;
}
*/
//�ӣ���
/*
#define ADD(X, Y) ((X)+(Y)) //��Ȼ���������У�����Ϊdefine����ĺ����滻�� ���Լ��ϣ���
int main()
{

	printf("%d\n", 4 * ADD(2, 3));  //��������
	return 0;
}
*/

