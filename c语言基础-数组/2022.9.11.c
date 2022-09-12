#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>



//数组-一组相同类型元素的集合
//type_t 数组元素类型   arr_name  数组名   [const_n]  一个常量表达式，用来指定数组的大小

/*
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
	int arr[10] = { 1,2,3,4,5 };//不完全初始化 剩余是0
	int arr[] = { 1,2,3,4,5 };//会根据{}中的内容确定[]
	char ch[5] = { 'a', 'b', 'c' };//剩余位置是\0
	char ch[] = { 'a', 'b', 'c' };//同理
	char ch[5] = "abc";// a b c \0 0
	char ch[] = "abc";// a b c \0


	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 0 };//数组的不完全初始化
	arr[4] = 5;//下标引用操作符 给数组中下标是4的赋值5
	int sz = sizeof(arr) / sizeof(arr[0]);
	//计算数组的元素个数 最大数值/最小数值
	int i = 0;
	//对数组内容赋值，数组是使用下标来访问的，下标从0开始
	for ( i = 0; i <sz; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
*/

//一维数组在内存中的存储
//一维数组在内存中是连续存放的
//随着数组下标的增长地址是由低到高变化的
/*
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p\n", i,  &arr[i]);
		//%p 按地址的格式打印，十六进制的打印
	}
	return 0;
}
*/

/*
int main()
{

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;//因为知道数组存储是连续的所以可以连续打印。
	}

	return 0;
}
*/

//二维数组
/*
int main()
{
	//创建
//	int rr[3][4];//三行四列
//	char ah[3][4];//三行四列
	//初始化 创建的同时赋值
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//所有数值全部放进去 是一个一个往后放
	//int arr[3][4] = { 1,2,3,4 };//不完全初始化后面补0
	
//	int arr[3][4] = { {1,2},{1,2},{1,2} };//一行一行赋值
	//[]可以省略行但是列不能省略 行列号从0开始，第二行列才是1
	
	//二维数组的打印
	int arr[3][4] = { {1,2},{1,2},{1,2} };
	int i = 0;
	int j = 0;
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

//二维数组在内存中的存储形式
/*
int main()
{
	int arr[][4] = { {1,2},{1,2},{1,2} };
	int i = 0;
	int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//	printf("&arr[%d][%d] = %p\n",i, j, &arr[i][j]);
	//	//二维数组在内存中的储存也是连续的
	//	//一行内部连续，换行也是连续
	//	}
	//}
	int* p = &arr[0][0];
	for ( i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}

	return 0;
}
*/

//数组作为函数参数
/*
void bubble_sort(int arr[], int sz)//形参arr本质是指针
{
	
	//确认趟数
	int i = 0;
	for ( i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		for ( j = 0; j < sz-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}


}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序- 冒泡排序:两两相邻的元素进行比较，并且可能的话需要交换！
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);


	return 0;
}
*/

//数组名是什么 数组名就是首元素地址，但是有两个例外 
//sizeof（数组名）-数组名表示整个数组-计算的是整个数组的大小，单位是字节
//&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
/*
int main()
{
	int arr[10] = { 0 };

	int sz = sizeof(arr);//数组名表示整个数组

	printf("%p\n", &arr);//&arr取出的是数组的地址 
	printf("%p\n", &arr+1);// 虽然看起来和打印首地址一样，但是内存中的存储不一样，但是+1后就会发现区别


	printf("%p\n", &arr[0]);//打印首元素地址
	printf("%p\n", arr);//打印的也是首元素地址


	return 0;
}
*/

//升序排列数组
void bubble_sort(int arr[], int sz)//形参arr本质是指针
{

	//确认趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序- 冒泡排序:两两相邻的元素进行比较，并且可能的话需要交换！
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);

	
	return 0;
}
