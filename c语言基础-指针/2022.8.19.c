#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//指针  指针就是地址，指针变量里存的地址，用指针变量就是使用里面的地址，所以指针就是地址
// 内存的管理是给每个区域划分，然后给每个空间编号 
// 32位 - 32根地址线 - 物理线 -通电 -1/0信号 //  电信号转换成数字信号 1和0组成的二进制序列 也就成了地址
// 32根地址线 2的32次方的地址管理2的32次方个内存单元 
//一个内存单元是一字节（byte）
/*
int main()
{
	int a = 10;	//a在内存中要分配看空间，4个字节

	printf("%p\n", &a);// %p 专门用来打印地址

	int*pa = &a;// pa是用来存放地址的，在c语言中pa叫指针变量
	// * 说明pa是指针变量 int说明pa指向的对象是int类型的

	char ch = 'w';
	char*pc = &ch;
	return 0;	
}
*/

//不要这样写 会有类别差异
/*
int main()
{

	int* pa = &pa;

	return 0;
}
*/

//*pa目的
/*
int main()
{
	int a = 10;//我们存起来这个地址是为了找到a
	int* pa = &a;
	*pa = 20;//*解引用操作  *pa就是通过pa里面的地址，找到a
	//间接改变a来找到a
	printf("%d\n", a);
	return 0;
}
*/

//指针变量大小   指针的大小是相通的 指针是用来取地址的，指针需要多大空间取决于地址的存储需要多大空间
//32位 32bit -4byte
//64位 64bit -8byte
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


//结构体 有能力描述复杂类型 可以让c语言创建新的类型出来
/*
//创建一个学生
struct Stu
{
	char name[20];//成员变量
	int age;
	double score;//双精度打印用%lf
};
//创建一个书的类型
struct Book
{
	char name[20];
	//20是字符数量
	float price;
	char id[30];
};
int main()
{
	struct Stu s = {"张三", 20, 85.5};//创建一个学生s

	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量  .成员变量
	//%s是字符串  %c是单字符  %d整型  %lf 双精度浮点型
	struct Stu*ps = &s;//struct Stu结构类型指针
	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);//用指针找  ps指向s 所以可以用

	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);//和上面一样，但写法更简单   
	//使用方法    结构体的指针 -> 成员变量名 
	return 0; 
}
*/