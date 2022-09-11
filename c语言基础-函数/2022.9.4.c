#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//函数   库函数网址 https://cplusplus.com/reference
// MSDN     c/c++官网 (zh)en.cppreference.com
//f(x) = 2*x+1;
//f(x,y) = x+y

//库函数种类
//IO函数 输入输出函数
//字符串操作函数
//字符操作函数
//内存操作函数
//时间/日期函数
//数学函数
//其他库函数

//strcpy的使用   strcpy(1，2)把而的内容放到1里面
/*
int main()
{
	char str1[] = "Sample string";
	char str2[40];
	char str3[40];
	strcpy(str2, str1);
	strcpy(str3, "copy successful");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3); //% s--以字符串格式打印
	return 0;
}
*/

//memset的使用
/*
int main()
{
	char str[] = "almost every programmer should know memset!";
	memset(str, '-', 6);//将前6个字符替换为‘’中的字符，剩下继续打印
	puts(str);
	return 0;
}
*/

//自定义函数
/*
ret_type fun_name(para1, *)
ret_type 返回类型
fun_name 函数名
para1    函数参数
{
	statement;//语句项 函数体
}
*/

//写一个函数找两个之间的较大值
/*
int get_max(int x, int y)//定义一个整形的get_max函数
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
	//函数的调用
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}
*/

//写一个函数可以交换整型的内容
/*
void Swap(int* x, int* y)//用指针
//        形参 函数名后括号中的变量，因为形参只有函数被调用的过程中才实例化， 形参当函数调用之后就自动销毁，所以形参只有函数中有效
//函数返回类型的地方写成void，表示这个函数不返回任何值，也不需要返回
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
	//写一个函数，交换两个整型变量的值
	printf("交换前：a=%d b=%d\n", a, b);
	Swap(&a, &b);//要传地址，所以用指针
	//   实参 真实传递函数的参数 可以常量变量表达式函数等 但是必须是确定的值
	printf("交换后：a=%d b=%d\n",a, b);



	return 0;
}
*/

//传值调用  函数的形参和实参分别占用不同内存块，对形参的修改不会改变实参
//传址调用  把函数外部产检变量的内存地址传递给函数参数的一种调用函数的方式，可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量

//打印100-200之间的素数
/*
int is_prime(int n)//在判断函数中不建议打印
{
	//2-n-1 之间的数字
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
		//判断i是否为素数
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
int is_prime(int n)//在判断函数中不建议打印
{
	//2-n-1 之间的数字
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
		//判断i是否为素数
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

//用二分函数找下标
/*
int binary_search(int arr[], int key, int sz)//有序数组二分法查找数组中某个数字下标
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
	return -1;//没找到
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是:%d\n", ret);
	}
	return 0;
}
*/

//传地址
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

//函数的嵌套调用和链式访问
/*
int test1()
{
	//int test2() {}这种是错误的，不能在函数中再定义函数，但是可以嵌套调用
}
int main()
{
	//int len = strlen("abc");
	//printf("%d\n", len);

	////链式访问 例1
	//printf("%d\n", strlen("abc"));
	//链式访问 例2
	char arr1[20] = {0};
	char arr2[] = "hehe";
	printf("%s\n", strcpy(arr1, arr2));
	//链式访问 例3
	printf("%d", printf("%d", printf("%d", 43)));
	//函数返回的是打印在屏幕上的字符的个数
	return 0;
}
*/

//函数声明和定义
/*
int main()
{
	int a = 10;
	int b = 20;
	//函数声明一下
	int Add(int, int);//当函数放在前面时就可以不声明

	int c = Add(a, b);//把调用的函数放在后面就会导致错误，需要声明

	printf("%d\n", c);
	return 0;
}

//函数的定义
int Add(int x, int y)
{
	return x + y;
}
*/

//函数递归 一个过程或函数在其定义或说明中有直接或简介调用自身的一种方法，它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，递归策略只需少量的程序就可以描述出解题过程所需要的多次重复计算，大大地减少了程序的代码量，递归的主要思考方式在于：把大事化小
/*
int main()
{
	printf("hehe");
	main();//函数自己调用自己
	return 0;
}
*/

//用递归打印每一位是几
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
	//递归- 函数自己调用自己
	print(num);//print函数可以打印参数部分数字的每一位

	return 0;
}
*/

//写递归代码的时候：1.不能死递归，要有跳出条件，2.递归层次不能太深
/*
void a(int n)
{
	if (n<1000)//虽然代码正确，但是会栈溢出
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

//https://stackoverflow.com/ //相当于程序员的知乎

//编写函数不允许创建临时变量，求字符串长度，用递归方法
/*
int my_strlen(char* arr)//计算字符长度
{

	if (*arr != '\0')
		return 1 + my_strlen(arr + 1);//arr+1是下一个地址,而1+是返回时计算，在递归时不算1+
	else
		return 0;

}

int main()
{
	char arr[] = "hehe";

	//printf("%d\n", strlen(arr));//正常方法

	printf("%d\n", my_strlen(arr));

	return 0;
}
*/

//n!计算
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

//求第n个斐波那契数。递归的方法
/*
int count = 0;
int Fib(int n)// 效率太低，重复大量计算
{
	//统计第三个Fib的计算机次数
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

//求第n个斐波那契数。迭代的方法
/*
int Fib(int n)// 效率高但是栈溢出会导致计算错误
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

//汉诺塔问题  一次移动一个，借助c，把三个东西挪到c

//青蛙跳台阶问题 一次跳1或者2个台阶 n个台阶多少种跳法
