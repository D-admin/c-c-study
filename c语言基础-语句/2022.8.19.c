#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
int main()
{
	int a = 10;
	int b = 20;
	if (a>b)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", b);
	}

	return 0;
}
*/


/*
int Max(int x, int y)
{

	if (x > y)
		return x;
	else
		return y;

}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, & b);
	int m = Max(a, b);


	printf("%d\n", m);



	return 0;
}
*/

/*
#include <stdio.h>
int sum(int a)
{
	int c = 0;
	static int b = 3;//先算b+= 后锁定数字，在一次循环后锁定后重新计算b+= 然后在锁定，依次循环
	c +=1;
	b += 2;
	return (a + b + c);
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", sum(a));
	}
}
*/

//Switch是分支语句， continue用于循环语句里
/*   输出个*小飞机
int main()
{
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("    *  *\n");
	printf("    *  *\n");

	return 0;
}
*/

/*  能被五除输出yes 否则输出no
int main()
{
	//输入
	int m = 0;
	scanf("%d", &m);

	//判断并输出
	if (m%5==0)//求余等于0输出
		printf("yes\n");
	else
		printf("no\n");

	return 0;

}
*/

//c语言是结构化的程序设计语言   顺序结构  选择结构  循环结构
//c 语言中由 ； 分开的就是一个语句

//分支语句（选择）   if   Switch
/*
int main()
{
	int age = 30;
	//第一种，如果满足if就输出，否则不输出
	/*if (age >= 18)
		printf("成年\n");
	//第二种  选择一种输出，但每个里面只能有一个语句，除非加上{}
	/*if (age >= 18)
		printf("成年\n");
	else
		printf("未成年\n");
	//第三种  多分支 想写多个条件需要加上&& 或者else if 可以不写上一个有的的条件
	if (age < 18)
		printf("少年\n");
	else if (age>=18 && age<26)//不能写成18>=age<26
	{
		printf("青年\n");
	}
	else if(age>=26&&age<40)
	{
		printf("壮年\n");
	}
	return 0;
}
*/

//switch     一般都是cast语句

//switch语句应用1
/*
int main()
{
	int day = 0;
	scanf("%d\n", &day);

	switch (day)//Switch（整形表达式）{语句项；}
	{
	case 1://常量整形表达式
			printf("day1\n");//语句
			break;//出口   运行后跳出{} ,
	case 2:
			printf("day2\n");
			break;
	case 3:
			printf("day3\n");
			break;
	case 4:
			printf("day4\n");
			break;
	case 5:
			printf("day5\n");
			break;
	case 6:
			printf("day6\n");
			break;
	case 7:
			printf("day7\n");
			break;
	}



		return 0;
}
*/

//Switch 语句应用2
/*
int main()
{
	int day = 0;
	scanf("%d\n", &day);

	switch (day)//Switch（整形表达式）{语句项；}
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;//break不是必须加，除非要截止
	case 6:
	case 7:
		printf("休息日\n");
		break;//建议最后加上break，防止改代码后一直运行
	default://当不能从case匹配时输入    运行这个
	//defaul和case没有顺序问题，也可以放最前面，但习惯性放最后
		printf("输入错误\n");
		break;
	}
	return 0;
}
*/

//switch 语句应用3
/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)//从n进入，因为a是1，所以从case 1进入
	{
	case 1:
		m++;// m = 3

	case 2:
		n++;// n = 2

	case 3:
		switch (n)//switch允许嵌套使用
		{
		case 1:
			n++;

		case 2://因为n = 2所以从case 2进入，跳过case 1；
			m++;// m = 4
			n++;// n = 3
			break;
		}

	case 4:
		m++;//m = 5
		break;

	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}
*/

//循环语句  while  for   do while

//while 循环 
//while（表达式 ) --循环语句 
/*
int main()
{
	int i = 1;//初始化是多少会影响循环
	//初始化部分
	while (i <= 10)//设置条件 满足时进入，不满足时跳出
	//判断部分
	{
		printf("%d ", i);//满足条件打印
		i++;
		//调整部分
	}

	return 0;
}
*/

// while循环中，break用于永久的终止循环
/*
int main()
{
	int i = 1;
	while (i <= 10)//设置条件 满足时进入，不满足时跳出
	{
		if (i == 5)// 当满足if直接break暂停跳出
			break;//暂停
		printf("%d ", i);//满足条件打印
		i++;
	}

	return 0;
}
*/

//while循环中， continue用于继续
/*
int main()
{
	int i = 1;
	while (i <= 10)//设置条件 满足时进入，不满足时跳出
	{
		if (i == 5)
		continue;//继续    跳过本次循环continue后面的代码，直接去while语句中判断部分，进行下一次入口的判断
		printf("%d ", i);//满足条件打印
		i++;
	}

	return 0;
}
*/

//getchar//获取字符的意思 //返回的类型是int类型  
//读取正确返回的是这个字符的ASIM值，读取错误返回的eof --- end of file -文件结束标志
/*
int main()
{
	int ch = getchar();//获取一个字符
	//getchar 的读取方式是从缓冲区中，输入后按回车相当于输入后加个\n 所以可以直接输入回车
	//printf("%c\n", ch);
	putchar(ch);//对应getchar的输出  代表输出一个字符可以替代上面的printf


	return 0;
}
*/

//getchar  EOF的用法
/*
int main()
{
	int ch = 0;//ctrl+z -getchar 就读取结束
	while ((ch = getchar()) != EOF)//当字符不等于EOF那就打印在屏幕上 等于EOF就暂停
	{
		putchar(ch);
	}
	return 0;
}
*/

//getchar的应用
/*
int main()
{

	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//假设密码是个字符串   但是读取不了空格，到空格就停止
	printf("请确认密码(Y/N)：>");
	//因为输完密码后回车会有个\n，虽然scanf取走了密码，但是还剩个\n，所以getchar直接读取\n

	//清理缓冲区，把缓冲区里的取走
	//getchar();//处理'\n'  但这个getchar只取走一个字符

	int tmp = 0;
	while ((tmp = getchar()) !='\n')//清理多个字符，直到清理到\n
		//getchar读取字符，但是返回的是整型 因为ASCII
	{
		;
	}
	int ch = getchar();//输入一个字符获取


	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	return 0;
}

*/

//while循环的选择
/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')//如果是非数字字符就不打印，是数字字符就打印
			continue;
	}



	return 0;
}
*/

//for循环的语法     for(表达式1； 表达式2； 表达式3）---循环语句
//表达式1代表初始化部分，用于初始化循环变量   表达式2为条件判断部分，用于判断循环终止  表达式3为调整部分用于循环条件的调整

//for循环
/*
int main()
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	//   初始化   判断    调整
	{
		printf("%d ", i);
	}
	return 0;
}
*/

//for循环判断一个数是否为奇数
/*
int main()
{
	int i = 0;
	for ( i = 0; i < 100; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);
	}

	return 0;
}
*/

//break和continue在for循环中的作用
/*
int main()
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		//if (i == 5)
			//break;//终止循环 跳出循环 输出01234
		if (i == 5)
		{
			continue;//跳过5继续循环 输出012346789
		}

		printf("%d", i);
	}




	return 0;
}
*/

//不可在for循环体内修改循环变量，防止for循环失去控制
/*
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		i = 5;//循环内部改变量  会导致代码死循环
		i++;//这种可以，但是要把for后（）内的删掉
	}
	return 0;
}
*/

//建议for语句的循环变量的取值采用前闭后开的写法   即for(i = 0; i <= 10, i++)，但可以这么写，不建议
//for循环的 初始化 判断 调整都可以省略，但是判断省略就会导致死循环。
 
//for循环初始化省略 也可以同时多个变量 判断部分省略恒为真语法规定
/*
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)//当初始化省略后 再次循环不会被初始化
		{
			printf("hehe\n");
		}
	}

	return 0;
 }
*/

//for死循环
/*
int main()
{
	int i = 0;
	int k = 0;
	for (i =0, k =0; k =0; i++,k++)
	{
		k++;
	}

	return 0;
}
*/

//do wile循环语法
//do ---循环语句；----while（表达式）；

//do while循环
/*
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
		{
			//break;//打印到5就停止 跳出循环到while后面也就直接结束 一个break只能跳出自己的循环
			continue;//即使继续但因为i++在后面所以可能会被跳过所以打到4就无限循环
		}
		printf("%d ", i);
		i++;
	} while (i <= 10);


	return 0;
}
*/

//for循环计算n的阶乘（n！）
/*
int main()
{

	int i = 0;
	int k = 0;
	int arr = 1;

	scanf("%d", &k);
	for(i = 1; i <= k; i++)//一直循环计算到i=k
	{
		arr *= i;
	}
		printf("%d\n", arr);

	return 0;
}
*/

//计算1!+2!+3!+.....+n!
/*
int main()
{

	int i = 0;
	int n = 0;
	int a = 1;
	int b = 0;
	for (n = 1; n <= 10; n++)//计算加到10的阶乘
	{
		a = 1;//计算n的阶乘之前，把a初始为1
		for (i = 1; i <= n; i++)
		{
			a *= i;
		}
		b += a;
	}
	printf("%d\n", b);

	return 0;
}
*/

//计算1!+2!+3!+.....+n! 简单方式
/*
int main()
{

	int i = 0;
	int n = 0;
	int a = 1;
	int b = 0;
	for (n = 1; n <= 3; n++)
		{
			a *= n;
			b += a;
		}
	
	printf("%d\n", b);

	return 0;
}
*/

//在一个有序数组中查找具体的某个数字n   二分查找法
/*
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//要查找的数字
	//在a这个有序的数组中查找k（7）的值

	int sz = sizeof(a) / sizeof(a[0]);//数组的元素个数

	int l = 0;//确定最左边元素的下标
	int r = sz - 1;//确定最右边元素的下标
	
	//一次二分查找
	// int mid = (l + r) / 2;
	//if (a[mid] < k)//如果中间值小于k
	//{
	//	l = mid + 1;//左边的数是中间值+1，因为下标是从0开始的
	//}
	//else if (a[mid]>k)
	//{
	//	r = mid - 1;
	//}
	//else
	//{
	//	printf("找到了:%d\m", mid);//mid和k相等了就是找到了
	//}

	//循环二分查找，多次二分查找
	while (l>k)//也可以填1，代表如果为真循环这个，否则进行if
	{
		int mid = (l + r) / 2;
		if (a[mid] < k)//如果中间值小于k
		{
		l = mid + 1;//左边的数是中间值+1，因为下标是从0开始的
		}
		else if (a[mid]>k)
		{
		r = mid - 1;
		}
		else
		{
		printf("找到了,下标是:%d\n", mid);//mid和k相等了就是找到了
		break;
		}
	}
	if (l > r)
		printf("找不到");

	return 0;
}
*/

//编写代码，多个字符从两端移动，向中间汇聚
//welcome to china ！！！！！
//w##########！
//we########!!

#include<string.h>//用来使用strlen strcmp 都是字符串函数所以都要引用这个
#include<Windows.h>//用来使用Sleep
/*
int main()
{
	char arr1[] = { "welcome to china!!!" };
	char arr2[] = { "###################" };
	int l = 0;
	int r = strlen(arr1)-1;//求最右边的下标是多少因为最右边有个\0所以要-1

	while (l<=r)
	{


		arr2[l] = arr1[l];//arr2[l]被改成arr1[l]
		arr2[r] = arr1[r];
		printf("%s\n", arr2);
		Sleep(100);//休眠0.1秒
		system("cls");//清空屏幕
		l++;
		r--;
	}
	printf("%s\n", arr2);//清空后打印最后结果
	return 0;
}
*/

//编写代码实现，模拟用户登陆情景，并且只能登录三次（只允许输入三次，三次都错则退出程序，其中一次正确提示登录成功
/*
int main()
{
	int i = 0;
	//假设正确的密码是字符串“123456”
	char password[20] = { 0 };
	for ( i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		//if(pasword == "123456")//arr -两个字符串比较，不能用 == ，应该用strcmp
		if (strcmp(password,"123456") == 0)//strcmp( , " ") ==0 代表比较相等
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}

	if (i == 3)
		printf("三次密码均错误，推出程序\n");
	return 0;
}
*/

//猜数字游戏 1.自动产生一个1-100之间的随机数 2。猜数字  a。猜对了恭喜你，游戏结束 b。猜错了告诉猜大了或猜小了，继续猜直到猜对。 3.游戏一个一直玩，除非退出游戏

#include<stdlib.h>//用来使用rand
#include<time.h>//用来使用time
/*
void menu()
{
	printf("***********************\n");
	printf("******   1.play  ******\n");
	printf("******   0.exit  ******\n");
	printf("***********************\n");

}

void game()
{
	//猜数字游戏实现
	//1.先生成随机数
	//rand函数返回了一个0-32767之间的数，但是不够随机
	//时间 -- 时间戳
	//srand((unsigned int)time(NULL));//把time强制转换为int类型 放在main函数里
	
	int ret = rand()%100+1; //%100的余数是0-99，然后+1，范围就是1-100
	//printf("%d\n", ret);//这是需要猜的数字，测试用
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if(guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
				break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//把time强制转换为int类型
	do
	{
		menu(); //打印菜单
			printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("猜数字\n");//测试用
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);



	return 0;
}
*/

//goto语句
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = 0;
	while (c=a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
*/
// system //用来执行系统命令
// goto只能在单个函数范围内跳转，不能跨函数
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("请注意，你的电脑将在两分钟后关机，如果输入：王龙耀是我亲爱的爸爸，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "王龙耀是我亲爱的爸爸") == 0)//两个字符串比较是不能使用==的，应该使用strcmp（） string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;

	}
	return 0;
}