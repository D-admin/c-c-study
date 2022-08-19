#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//设置一个全局变量（用作详情见2022.8.18 行446）
//int g_val = 2022;

//static 修饰全局变量 使得这个全局变量只能在自己所在的源文件（.c）内部使用 其他源文件不能使用
    //static g_val = 2022;
//全局变量在其他源文件内部可以被使用，因为全局变量具有外部链接属性，但是被static修饰后，就变成了内部链接属性，其他源文件不能链接到这个静态的全局变量  函数也一样

//用作2022.8.18.c 行457
/*
int Add(int x, int y)
{


	return x + y;
}
*/