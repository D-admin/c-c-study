#include<stdio.h>

/*
struct B
{
	char c; 
	short s;
	double d;
};

struct Stu
{
	//成员变量
	struct B sb;
	char name[20];
	int age;
	char id[20];

}S1,S2;//S1 S2也是结构体变量 也是全局变量在{}外
//S1 S2声明类型的同时定义变量

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);

};

void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);

};
int main()
{
	//初始化局部变量s
	struct Stu s = { {'W', 20, 3.14}, "张三", 30, "20220928"};//每一个，都是上面这个结构体中的变量

	//struct Stu* ps = &s;
	//printf("%c\n", (*ps).sb.c);
	//printf("%c\n", ps->sb.c);
	print1(s);//传值调用
	print2(&s);//传址调用
	return 0;
}
*/

int Add(int x, int y)//每一次函数调用都会在内存的栈区上开辟一块空间！函数传参的时候，参数是需要压栈的，如果传递一个结构体对象的时候结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);

	return 0;
}