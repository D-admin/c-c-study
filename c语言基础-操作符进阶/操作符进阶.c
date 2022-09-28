#include<stdio.h>


//算数操作符 + - * / %
//  /使用 想得到小数 除号两边至少一边有小数才能的到
//% 的使用%前后必须都是整数

//移位操作符 <<   >>
 /*
int main()
{
	int a = 2;
	//把a的二进制位向左移动一位
	//向左移  左边丢弃，右边补齐0

	//向右移  算术右移 右边丢弃，左边补齐原符号位（正数就补0；负数就补1
	//逻辑右移  右边丢弃，左边补齐0
	int b = a << 1;
	printf("b=%d", b);
	return 0;

}
*/

//位操作符   &按位与  |按位或   ^按位异或
/*
int main()
{
	int a = 3;
	int b = 5;
	//&按（二级制）位与
	//两个对应的二进制里除对应1 1结果是1其他都变成0
	//int c = a & b;

	//|按位或   两个二进制里对应 有1就是1
	//int c = a | b;

	//^   对应的二进制位进行异或 相同为0；不同为1
	// 相同异位是0 0异位任何值都是任何值本身
	//int c = a ^ b;

	//不用中间变量交换两个值
	//1; 数值太大会溢出
	//a = a + b;
	//b = a - b;
	//a = a - b;

	//2 
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

}
*/


//赋值操作符 = += -= *= /= >>= <<= %= &= |= ^=
/*
int main()
{
	int a = 0;
	//下面两种写法一个意思
	a += 100;
	a = a + 100;
	//下面写法相同
	a = a >> 3;
	a >>= 3;

	return 0;
 }
 */
//c语言中 =是赋值 ==是判断
 
//单目操作符  ！逻辑反操作    -负值 +正值 &取地值    sizeof 操作数的类型长度    （类型） 强制类型转
//   ~ 对一个数的二进制按位取反   -- 前置,后置--    ++ 前置，后置++      * 间接访问操作符（解引用操作符）
/*
int main()
{
	int flag = 5;
	//flag 为真打印
	if (flag)
	{
		printf("hehe");
	}
	int flag = 0;
	//flag为假打印
	if (!flag)
	{
		printf("haha");
	}

	return 0;
 }
 */

//`按位取反是按二进制中的1 0 取反
 

//关系操作符 < <= ? >= != ==



//逻辑操作符&& ||


//条件操作符(三目操作符) 
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//
//	//三目操作符  和上面代码一样
//	b = (a > 5 ? 1 : -1);
//	
//
//	return 0;
//}

//逗号表达式 , , , ,逗号表达式要从左向右依次计算，但整个表达式的结果是最后一个表达式的结果

//int main()
//{
//	int a = 3, b = 5, c = 0;
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//
//	printf("%d\n", d);
//	return 0;
//}

//下标引用 函数调用和结构成员

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", arr[4]);//[]就是下标引用操作符
//
//	return 0;
//}


//结构成员访问操作符  . ->

//结构体
//int float ...
//可以自己创建结构体  struct固定的语法形式 后面放名
//使用结构体.变量名

//struct Book//自定义类型，自己创造的
//{
//	//结构体的成员（变量）
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct Book b = {"c语言", "C20210509", 55};//用自定义类型创建了一本书
//	/*printf("书名： %s\n", b.name);
//	printf("书号： %s\n", b.id);
//	printf("定价： %d\n", b.price);*/
//	struct Book* pb = &b;//另一种写法
//	printf("书名： %s\n", pb->name);
//	printf("书号： %s\n", (*pb).id);
//	printf("定价： %d\n", pb->price);
//	return 0;
//}

//表达式操作符
