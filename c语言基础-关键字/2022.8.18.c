#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//选择语句
/*
int main()
{

	int input = 0;//输入的值

	printf("是否好好学习?(1/0)\n");//选择题

	scanf("%d\n", &input);//接收

	if (input == 1)//如果输入1
		printf("是\n");
	else		   //否则
	    printf("否\n");

	return 0;
}
*/

//循环语句

//while     
//for 
//do...while

/*
int main()
{
	int line = 0;
	while (line<30000)//当小于30000时，循环+
	{
		printf("写代码:%d\n", line);

		line++;
	}
	if (line >= 30000)//如果大于
	{
		printf("good");

	}


	return 0;
}
*/

//函数
/*
Add(int x, int y)//函数方式 ，方便多个使用，否则得每个计算
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//正常方式
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	//int c = a + b;
	
	//函数方式
	int c= Add(a, b);


	printf("%d\n", c);



	return 0;
}
*/

//数组 一组相同类型的集合
/*
int main()//1-10存起来
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//存储数字类型
	int i = 0;
	while (i < 10)
	{
		printf(" % d\n", arr[i]);
		i++;
	}
	//数组是用下标表示的
	
	//char ch[5] = {'a','b','c','d'};//不完全的数组剩余的默认为0

	return 0;
}
*/
//操作符

//一    算数操作符  + - * / %     除号两端都是整数那得出来的都是整数，除非加个.0
/*
int main()
{
	//int a = 9 / 2;      //用%d\n 才能的出整数，用%f\n得不出来数字
	//float a = 9 / 2.0;    //用%f\n才能的出小属
	int a = 9 % 2; //取模（取余数）
	printf("%d\n", a);

	return 0;
}
*/

//二     移位操作符 >> 右移     << 左移  看的是二进制
/*
int main()
{
	int a = 2;
	int b = a << 1;

	printf("%d\n", b);
	return 0;

}
*/

//三     位操作符   & 按位与   ^ 按位异或  | 按位或 

//四     赋值操作符 =    +=     -=    *=    /=    &=    ^=   |=    <<=    >>=
/*
int main()
{
	int a = 2;
	a = a + 5; 或者写成a += 5;同理
	
}
*/

//五     单目操作符  ！逻辑反操作    -负值 +正值 &取地值    sizeof 操作数的类型长度    （类型） 强制类型转
//   ~ 对一个数的二进制按位取反   -- 前置,后置--    ++ 前置，后置++      * 间接访问操作符（解引用操作符）
/*
int main()
{
	//c语言中 0表示假 非0表示真
	int a = 1;
	printf("%d\n", !a);//1就是真
	//使用方式
	if (a)//如果a为真....
	{

	}
	if (!a)//如果a为假....
	{

	}

	return 0;
}
*/

//sizeo的使用
/*
int main()
{
	//sizeo 是一个操作符 计算类型或者变量的大小

	int a = 10;
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//可以省略sizeof后的（）但是一般不省略

	return 0;
}
*/

//sizeo计算数组中元素个数
/*
int main()
{
	//10个元素
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算数组的总大小	
	printf("%d\n", sizeof(arr[0]));//计算数组中第一个的大小
	int sz = sizeof(arr) / sizeof(arr[0]);//求元素个数
	printf("%d\n", sz);
		return 0;
}
*/

//~使用
/*
int main()
{
	int a = 0;
	printf("%d\n", ~a);//按位取反，把所有二进制中的数字，1变成0，0变成1.

	return 0;	
}
*/
//一个整型是32byte ，所以0是32个0byte 所以0的~a是32个1byte 整数在内存中储存的是补码，所以0的补码是-1的补码所以是-1
//一个整数的二进制表示有三种  原码 反码 补码
//  负数  -1的原码1000000000000000000000001  反码符号位不变0和1互换 1111111111111111111111111111111111111111110  补码要补上1 1111111111111111111111111111111111111111111
//正整数 原码 反码 补码相同  

//++的使用
/*
int main()
{
	//int a = 10;
	//int b = ++a;//前置++  先++ 后使用
	//printf("%d\n", b);
	//printf("%d\n", a);

	int a = 10;
	int b = a++;//后++  先使用 后++
	printf("%d\n", b);
	printf("%d\n", a);

	return 0;
}
*/

//(类型) 强制类型转换
/*
int main()
{
	int a = (int)3.14; //加上（int） 强制类型转换 类型不匹配的时候才使用，但一般不推荐，说明设计时就有问题
	printf("%d\n", a);//因为a是整型 所以可能丢失精度

	return 0;
}
*/

//关系操作符 >=   <=  <  >   !=用于测试不相等  ==用于测试相等

//逻辑操作符 && 逻辑与(并且的意思)  || 逻辑或（或者）
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
	//printf("%d\n", c);//输出的1 代表都为真
	//if (a && b);
	{

	}
	return 0;
}
*/

//条件操作符（三目操作符） exp1 ？exp2 ：exp3 （exp代表三个操作数 ）
//exp1  成立   exp2计算，整个表达式的结构是exp2的结果 
//exp1  不成立 exp3计算，整个表达式的结构是exp3的结果
/*
int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	// 第一种写法
	if (a > b)
		max = a;
	else
		max = b;
	
	//第二种写法
	max = a > b ? a : b;


	printf("%d\n", max);

	return 0;
}
*/

//逗号表达式 exp1，exp2，exp3，...expN  逗号表达式是从左向右以此计算，整个表达式的结果是最后一个表达式的结果
/*
int main()
{

	//(2, 4 + 5, 6);//简单的逗号表达式
	int a = 0;
	int b = 3;
	int c = 5;
	int d = (a = b + 2, c = a - 4, b = c + 2);//括号里就是逗号表达式 ，计算完一个逗号相当于赋值一个
	printf("%d\n", d);
	return 0;
}
*/

//下标引用，函数调用和结构成员 []	() . ->
/*
int	main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%d\n", arr[4]);//[]就是下标引用操作符

	return 0;
}
*/
/*
int main()
{
	//调用函数的时候，函数名后面的（）就是函数调用操作符  这个操作符不限字符数量
	printf("%d\n", 100);


	return 0;
}
*/

//常见关键字 1.c语言提供的关键字，不能自己创建关键词 2.这些关键字不能做变量名
//auto break case char const continue default do double else enum extern float for goto if int long register return short signed sizeof static struct switch typedef union unsigned void volatile while

//关键字
/*
auto 是自动的，每个局部变量都是auto修饰的
break 循环里，switch语句里
case  safe_cast 语句里使用
char 字符类型
const 常变量
continue 继续
default 默认
do 
double 双精度浮点数
enum 枚举
extern 用来申明外部符号的
float 单精度浮点数
for for循环
goto goto语句
if  if语句
int 整型
long 长整型
register 寄存器 即使不写编译器也会自己判断是否放到寄存器里
return 返回
short 短整型
signed 有符号的
sizeof 求大小
static 静态的
struct 结构体
switch 语句
typedef 类型定义
union 联合体/共用体
unsigned 无符号的
void 无/空
volatile 
while
*/

//register 的使用
/*
int mian()
{
	register int num = 100;//建议num的值存放在寄存器中，仅建议，是否做编译器去判定
			//存储位置   寄存器  高速缓存  内存  硬盘  网盘 读写速度由快到慢 存储空间也由小到大
			//造假越高 速度越快 空间越小  寄存器在cpu里
	return 0;
}
*/

//auto的使用
/*
int mian()
{
	int a = 10;//a是自动创建，自动销毁的，自动变量    所以前面auto基本省略掉

	return 0;
}
*/

//typedef 类型重定义
/*
typedef unsigned int u_int;//将unsigned重新起名叫u_int，后续再使用可以简化
int mian()
{
	unsigned int num = 100;
	u_int num = 100;//上面的等同于这个


	return 0;
}
*/

//static 静态的  1.修饰局部变量 2.修饰全局变量 3.修饰函数
//未用static
/*
void test()//c语言中，void是空的意思，代表函数类型是无返回值类型，免用return语句
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

//使用static 修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）

// 当被static修饰后 本来存在栈区改变到静态区
//static 修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//当我们希望一个变量出了他的范围不销毁，就用static修饰
/* 
void test()
{
	static int a = 1; //保留上次的改变，无销毁
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
// 内存分几个区域（学习计算机语言时学习） 栈区 堆区 静态区
// 栈区 存的 局部变量 函数的参数
// 堆区 动态内存分配
// 静态区 全局变量 static修饰的静态变量
// 静态的生命周期是程序的生命周期，所以改变后生命周期很长

//extern 声明外部符号（详情见2022.8.18-2  行4） 
/*
extern int g_val;
int main()
{
	printf("%d\n", g_val);
	return 0;
}
*/
//全局变量在其他源文件内部可以被使用，因为全局变量具有外部链接属性，但是被static修饰后，就变成了内部链接属性，其他源文件不能链接到这个静态的全局变量  函数也一样会被改变外部变内部

//引用外部函数（详情见2022.8.18-2.c  行12）
/*
extern int Add(int x, int y);//声明函数
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
*/

//define 定义常量和宏    #define //是一个预处理指令

//1.define 定义符号
/*
#define Max 1000//定义符号示例
int main()
{
	printf("%d\n", Max);

	return 0;
}
*/
//2.define 定义宏
//不加（）
/*
#define ADD(X,Y) X+Y //虽然能正常运行，但因为define定义的宏是替换的 
int main()
{


	printf("%d\n", 4*ADD(2, 3)); // 会被换成4*2+3，所以得出来不是20
	return 0;
}
*/
//加（）
/*
#define ADD(X, Y) ((X)+(Y)) //虽然能正常运行，但因为define定义的宏是替换的 所以加上（）
int main()
{

	printf("%d\n", 4 * ADD(2, 3));  //正常计算
	return 0;
}
*/

