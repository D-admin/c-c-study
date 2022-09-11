#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//����   �⺯����ַ https://cplusplus.com/reference
// MSDN     c/c++���� (zh)en.cppreference.com
//f(x) = 2*x+1;
//f(x,y) = x+y

//�⺯������
//IO���� �����������
//�ַ�����������
//�ַ���������
//�ڴ��������
//ʱ��/���ں���
//��ѧ����
//�����⺯��

//strcpy��ʹ��   strcpy(1��2)�Ѷ������ݷŵ�1����
/*
int main()
{
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3); //% s--���ַ�����ʽ��ӡ
	return 0;
}
*/

//memset��ʹ��
/*
int main()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);//��ǰ6���ַ��滻Ϊ�����е��ַ���ʣ�¼�����ӡ
	puts(str);
	return 0;
}
*/

//�Զ��庯��
/*
ret_type fun_name(para1, *)
ret_type ��������
fun_name ������
para1    ��������
{
	statement;//����� ������
}
*/

//дһ������������֮��Ľϴ�ֵ
/*
int get_max(int x, int y)//����һ�����ε�get_max����
{
	int z = 0;
	if (x > y)
		z = x;
	else
	{
		z = y;
	}
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	//�����ĵ���
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}
*/

//дһ���������Խ������͵�����
/*
void Swap(int* x, int* y)//��ָ��
//        �β� �������������еı�������Ϊ�β�ֻ�к��������õĹ����в�ʵ������ �βε���������֮����Զ����٣������β�ֻ�к�������Ч
//�����������͵ĵط�д��void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
{
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int a = 10;
	int b = 20;
	//дһ�������������������ͱ�����ֵ
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap(&a, &b);//Ҫ����ַ��������ָ��
	//   ʵ�� ��ʵ���ݺ����Ĳ��� ���Գ����������ʽ������ ���Ǳ�����ȷ����ֵ
	printf("������a=%d b=%d\n",a, b);



	return 0;
}
*/

//��ֵ����  �������βκ�ʵ�ηֱ�ռ�ò�ͬ�ڴ�飬���βε��޸Ĳ���ı�ʵ��
//��ַ����  �Ѻ����ⲿ����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ�������ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���

//��ӡ100-200֮�������
/*
int is_prime(int n)//���жϺ����в������ӡ
{
	//2-n-1 ֮�������
	int j = 0;
	for ( j = 2; j < n; j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for ( i = 100; i <=200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\ncount=%d\n", count);

	return 0;
}
*/

/*
int is_prime(int n)//���жϺ����в������ӡ
{
	//2-n-1 ֮�������
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)//#include<math.h>
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}

	printf("\ncount=%d\n", count);

	return 0;
}
*/

//�ö��ֺ������±�
/*
int binary_search(int arr[], int key, int sz)//����������ַ�����������ĳ�������±�
{
	
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;//û�ҵ�
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���:%d\n", ret);
	}
	return 0;
}
*/

//����ַ
/*
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);

	return 0;
}
*/

//������Ƕ�׵��ú���ʽ����
/*
int test1()
{
	//int test2() {}�����Ǵ���ģ������ں������ٶ��庯�������ǿ���Ƕ�׵���
}
int main()
{
	//int len = strlen("abc");
	//printf("%d\n", len);

	////��ʽ���� ��1
	//printf("%d\n", strlen("abc"));
	//��ʽ���� ��2
	char arr1[20] = {0};
	char arr2[] = "hehe";
	printf("%s\n", strcpy(arr1, arr2));
	//��ʽ���� ��3
	printf("%d", printf("%d", printf("%d", 43)));
	//�������ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
	return 0;
}
*/

//���������Ͷ���
/*
int main()
{
	int a = 10;
	int b = 20;
	//��������һ��
	int Add(int, int);//����������ǰ��ʱ�Ϳ��Բ�����

	int c = Add(a, b);//�ѵ��õĺ������ں���ͻᵼ�´�����Ҫ����

	printf("%d\n", c);
	return 0;
}

//�����Ķ���
int Add(int x, int y)
{
	return x + y;
}
*/

//�����ݹ� һ�����̻������䶨���˵������ֱ�ӻ�����������һ�ַ�������ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬�ݹ����ֻ�������ĳ���Ϳ��������������������Ҫ�Ķ���ظ����㣬���ؼ����˳���Ĵ��������ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С
/*
int main()
{
	printf("hehe");
	main();//�����Լ������Լ�
	return 0;
}
*/

//�õݹ��ӡÿһλ�Ǽ�
/*
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);

}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);//1234
	//�ݹ�- �����Լ������Լ�
	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ

	return 0;
}
*/

//д�ݹ�����ʱ��1.�������ݹ飬Ҫ������������2.�ݹ��β���̫��
/*
void a(int n)
{
	if (n<1000)//��Ȼ������ȷ�����ǻ�ջ���
	{
		a(n + 1);
	}
}
int main()
{
	a(1);
	return 0;
}
*/

//https://stackoverflow.com/ //�൱�ڳ���Ա��֪��

//��д��������������ʱ���������ַ������ȣ��õݹ鷽��
/*
int my_strlen(char* arr)//�����ַ�����
{

	if (*arr != '\0')
		return 1 + my_strlen(arr + 1);//arr+1����һ����ַ,��1+�Ƿ���ʱ���㣬�ڵݹ�ʱ����1+
	else
		return 0;

}

int main()
{
	char arr[] = "hehe";

	//printf("%d\n", strlen(arr));//��������

	printf("%d\n", my_strlen(arr));

	return 0;
}
*/

//n!����
/*
int Fac(int n)
{
	
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	printf("%d\n", Fac(n));
	return 0;
}
*/

//���n��쳲����������ݹ�ķ���
/*
int count = 0;
int Fib(int n)// Ч��̫�ͣ��ظ���������
{
	//ͳ�Ƶ�����Fib�ļ��������
	if (n == 3)
	{
		count++;
	}
	if (n<=2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	printf("%d\n", Fib(n));
	printf("count = %d\n", count);
	return 0;
}
*/

//���n��쳲��������������ķ���
/*
int Fib(int n)// Ч�ʸߵ���ջ����ᵼ�¼������
{
	
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);

	printf("%d\n", Fib(n));
	return 0;
}
*/

//��ŵ������  һ���ƶ�һ��������c������������Ų��c

//������̨������ һ����1����2��̨�� n��̨�׶���������
