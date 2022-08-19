//1.主函数 （main函数）
//代码
//执行   从主函数开始执行
//main函数是入口，开始
//int是函数返回类型{整型}       main是函数名 
//{}是函数体
//0就是返回
//***一个工程中有且仅有一个main函数
//***但是一个工程中可以有多个.c函数
//***但是多个.c文件中只能有一个main函数

/*
printf再打印数据的时候，可以指定打印格式， printf("%n", 要打印的东西)；

*/

/*
int main()
{


	return 0;
}
*/

//写个代码，在屏幕上打印：hello world
//printf-来自库函数 代表打印信息
//printf的使用 需要引用头文件用#include(表示包含xx头文件）
//<stdio.h>代表包含的头文件，放在#include引用后面
//编译+链接运行代码   快捷键ctrl+F5   or   fn+ctrl+F5（调试-开始执行不调试）
//\n换行   让前面的单独一行

/*
printf//输出
scanf//输入
*/

//#include<stdio.h>

/*
int main()
{
	printf("hello world\n");


	return 0;
}
*/

//数据类型
//计算机语言-写程序-解决问题
//c语言小数点又叫浮点数
//浮点数描述小数
//整型描述整数

//数据类型
//char       字符
//short      短整型
//int        整型
//long       长整型
//long long  更长的整型
//float      单精度浮点数
//double     双精度浮点数

//'a' 存储字符a
//存储

/*
int main（）
{
	//字符类型
	char ch='a';
	//整型
	int age = 20；
	//短整型
	short num = 10；//short int（int可以省略）...
	//单精度浮点型
	float weight = 55.5;
	//双精度浮点型
	double d = 0.0;

	return 0;
}
*/
 
//研究类型大小
//C语言标准 sizeof（long）>=sizeof(int)

/*
int main ()
{
	//printf("%d\n",100);//打印整数
	//sizeof -关键字- 操作符- 计算类型或者变量所占空间的大小
	//sizeof的单位 byete 字节
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
		return 0;
}
*/

/*
计算机中的单位
bit   比特位 
byte  字节 =8bit
kb=1024byte
mb=1024kb
......
pb=1024tb
*/

//数据类型   类型是为了创建变量
//数据 有可变和不可变
//常量描述不能变得量
//变量描述能变的量

/*
int main()
{
	//创建一个变量
	//类型    变量的名字   赋值 =20；
	//类型    直接变量的名字；//不推荐
	int age = 20;
	double weight = 65.5;

	age = age + 1;
	weight = weight + 1;

	printf("%d\n",age);
	printf("%lf\n",weight);
	return 0;
}
*/

/* 打印格式
%d  整型
%f  float
%lf double
%s  单个字符
%c  打印字符

*/

/*
变量分类
{}内的变量都是局部变量
{}外的变量都是全局变量
当局部变量和全局变量冲突时，局部优先

不建议：全局变量和局部变量名字写的一样
*/

/*
int a = 100;//全局变量
int main()
{



	int a = 10;//局部变量

	printf("%d\n", a);
}

*/

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;//sum代表求和

	scanf("%d %d", &a, &b);//输入  代表第一个%d放第一个&，第二个%d放&
	//编码报错，用use后的放在源文件的第一行即#define
	//报错是vs的编译器提供的，不是c语言标准规定的，所以vs上scanf需要使用这个方法
	//或者vs2019文件下-vc-.......-newc++file.cpp用记事本打开后添加#define _CRT_SECURE_NO_WARNINGS 1再创建就默认出现这句话。

	sum = a + b;//求和要求放在函数后面

	printf("sum = %d\n", sum);

	return 0;
}
*/

//作用域和生命周期
//变量哪里可以用哪里就是作用域
//局部变量的作用域，就是变量所在的局部范围
//全局变量的作用域，整个工程//同个工程不同源文件可以使用，但需要添加
//                                               extern int ...(声明引用)

/*
int g_val = 2021;//全局变量

int main()
{
	printf("1:a = %d\n", g_val);


	//int a = 10;

	//printf("a = %d\n", a);
	{
		int a = 10;

		printf("a = %d\n", a);//代码哪里可以使用哪里就是作用域

		printf("2:a = %d\n", g_val);
	}
	printf("3:a = %d\n", g_val);
	return 0;
}
*/

//生命周期
//变量的生命周期；变量的创建和销毁之间的时间段
//局部变量的生命周期；
//全局变量的生命周期；整个程序

/*
int main()
{
	{
		int a = 10;
		printf("%d\n", a);//进入局部范围生命开始，出局部范围生命结束

	}



	//printf("%d\n", a);
	return 0;
}
*/

/*
常量
1.字面常量
	10；
	3.14；
	5；
    a；
2.const修饰的常变量

3.#define 定义的标识符常量

4.枚举常量 可以一一列举的常量，比如性别（enum），星期几
//这种枚举类型的变量的未来可能取值
*/

/*
#define MAX 10000//MAX就是定义的符号
int main()
{
	

	/*
	int	num = 10;//变量
	num = 20;//因为怒骂可变所以是变量

	printf("num = %d\n", num)
	

	/*
	const int	num = 10;//num就是常属性-具有常属性（不能被改变）
	num = 20;//不能变了

	printf("num = %d\n", num)
	

	/*     这里是错误的演示
	int arr[10] = { 0 };//10个元素
	int n = 10;
	int arr2[n] = {0}；//n这里是变量，所以这里不行，即使int n= 10；前加上const也不行，因为本质是常变量，即使修饰完是常属性也不行
	
	/*
	//MAX = 20000;//这是错误的，MAX是不能更改的
	int n = MAX;
	printf("n=%d\n", n);
	
return 0；
}
*/

/*
enum Sex
{
	
	MALE,//MALE = 3. 这里不是改变他的值而是赋初值，后续的都会被改变
	FEMALE,
	SECRET
};

int	main()
{

	enum Sex s = MALE;
	
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);


	return 0;
}
*/

//字符串就是一串字符 用双引号括起来的一串字符 
//字符串的结束标志是\0（\n）的转义字符 在计算字符串长度的时候\0结束标志，不算做字符串内容
//求数组元素个数算\0

/*
#include<string.h>
int main()
{
	//字符数组-数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	//char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', };//最后加个/0才截至要不是随机，直到找到\0才停止

	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	
	
	//求字符串长度

	 printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//int len = strlen("abc");//len警告是没有引用头文件，要引用#include<string.h>
	//printf("%d\n", len);
	return 0;
}
*/


/*
转译字符 转变了他原来的意思
\t 打印八个空格
\n 打印换行
\? 在书写连续多个问号时使用，防止他们被解析成三字母词  
         （are you ok？？）会被解释为(are you ok],但现在很多不支持
\' 用于表示字符常量' ‘’中想打印‘，需要\’ 以下“”同理
\" 用于表示一个字符串内部的双引号
\\ 用于表示一个反斜杠，防止它被解释为一个转译序列符
\a 警告字符，蜂鸣
\b 退格符
\f 禁止符
\r 回车
\t 水平制表符 即tap键
\v 垂直制表符 即回车键
\ddd ddd表示1~3个八进制的数字。如：\130 X     ASCII码表里给每个字符都赋一个值
\xdd dd表示2个十六进制数字。 如: \x30 0   d代表数字

*/

/*
int main()
{
	//printf("c:\test\test.c");//打印出来没有\t的原因是转译了
	//printf("c:\\test\\test.c");//\\后就可以打印出来
	//printf("ab\ncd");//\+n转译字符
	//printf("c:\atest\atest.c");//会警报
	//printf("%c\n", '\130');//八进制的130转换十进制为X   X---ASCII码值是88
	//printf("%c\n", '\x30');
	printf("%d\n", strlen("abc"));//因为有个隐藏的\0字符串长度3
	
	return 0;
}
*/

//注释是用来解释代码的，防止自己忘记或者他人看时看不懂
//   //是c++的注释风格   /**/是c语言的注释风格  不支持嵌套注释，即连续注释