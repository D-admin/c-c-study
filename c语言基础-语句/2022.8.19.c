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
	static int b = 3;//����b+= ���������֣���һ��ѭ�������������¼���b+= Ȼ��������������ѭ��
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

//Switch�Ƿ�֧��䣬 continue����ѭ�������
/*   �����*С�ɻ�
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

/*  �ܱ�������yes �������no
int main()
{
	//����
	int m = 0;
	scanf("%d", &m);

	//�жϲ����
	if (m%5==0)//�������0���
		printf("yes\n");
	else
		printf("no\n");

	return 0;

}
*/

//c�����ǽṹ���ĳ����������   ˳��ṹ  ѡ��ṹ  ѭ���ṹ
//c �������� �� �ֿ��ľ���һ�����

//��֧��䣨ѡ��   if   Switch
/*
int main()
{
	int age = 30;
	//��һ�֣��������if��������������
	/*if (age >= 18)
		printf("����\n");
	//�ڶ���  ѡ��һ���������ÿ������ֻ����һ����䣬���Ǽ���{}
	/*if (age >= 18)
		printf("����\n");
	else
		printf("δ����\n");
	//������  ���֧ ��д���������Ҫ����&& ����else if ���Բ�д��һ���еĵ�����
	if (age < 18)
		printf("����\n");
	else if (age>=18 && age<26)//����д��18>=age<26
	{
		printf("����\n");
	}
	else if(age>=26&&age<40)
	{
		printf("׳��\n");
	}
	return 0;
}
*/

//switch     һ�㶼��cast���

//switch���Ӧ��1
/*
int main()
{
	int day = 0;
	scanf("%d\n", &day);

	switch (day)//Switch�����α��ʽ��{����}
	{
	case 1://�������α��ʽ
			printf("day1\n");//���
			break;//����   ���к�����{} ,
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

//Switch ���Ӧ��2
/*
int main()
{
	int day = 0;
	scanf("%d\n", &day);

	switch (day)//Switch�����α��ʽ��{����}
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;//break���Ǳ���ӣ�����Ҫ��ֹ
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;//����������break����ֹ�Ĵ����һֱ����
	default://�����ܴ�caseƥ��ʱ����    �������
	//defaul��caseû��˳�����⣬Ҳ���Է���ǰ�棬��ϰ���Է����
		printf("�������\n");
		break;
	}
	return 0;
}
*/

//switch ���Ӧ��3
/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)//��n���룬��Ϊa��1�����Դ�case 1����
	{
	case 1:
		m++;// m = 3

	case 2:
		n++;// n = 2

	case 3:
		switch (n)//switch����Ƕ��ʹ��
		{
		case 1:
			n++;

		case 2://��Ϊn = 2���Դ�case 2���룬����case 1��
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

//ѭ�����  while  for   do while

//while ѭ�� 
//while�����ʽ ) --ѭ����� 
/*
int main()
{
	int i = 1;//��ʼ���Ƕ��ٻ�Ӱ��ѭ��
	//��ʼ������
	while (i <= 10)//�������� ����ʱ���룬������ʱ����
	//�жϲ���
	{
		printf("%d ", i);//����������ӡ
		i++;
		//��������
	}

	return 0;
}
*/

// whileѭ���У�break�������õ���ֹѭ��
/*
int main()
{
	int i = 1;
	while (i <= 10)//�������� ����ʱ���룬������ʱ����
	{
		if (i == 5)// ������ifֱ��break��ͣ����
			break;//��ͣ
		printf("%d ", i);//����������ӡ
		i++;
	}

	return 0;
}
*/

//whileѭ���У� continue���ڼ���
/*
int main()
{
	int i = 1;
	while (i <= 10)//�������� ����ʱ���룬������ʱ����
	{
		if (i == 5)
		continue;//����    ��������ѭ��continue����Ĵ��룬ֱ��ȥwhile������жϲ��֣�������һ����ڵ��ж�
		printf("%d ", i);//����������ӡ
		i++;
	}

	return 0;
}
*/

//getchar//��ȡ�ַ�����˼ //���ص�������int����  
//��ȡ��ȷ���ص�������ַ���ASIMֵ����ȡ���󷵻ص�eof --- end of file -�ļ�������־
/*
int main()
{
	int ch = getchar();//��ȡһ���ַ�
	//getchar �Ķ�ȡ��ʽ�Ǵӻ������У�����󰴻س��൱�������Ӹ�\n ���Կ���ֱ������س�
	//printf("%c\n", ch);
	putchar(ch);//��Ӧgetchar�����  �������һ���ַ�������������printf


	return 0;
}
*/

//getchar  EOF���÷�
/*
int main()
{
	int ch = 0;//ctrl+z -getchar �Ͷ�ȡ����
	while ((ch = getchar()) != EOF)//���ַ�������EOF�Ǿʹ�ӡ����Ļ�� ����EOF����ͣ
	{
		putchar(ch);
	}
	return 0;
}
*/

//getchar��Ӧ��
/*
int main()
{

	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);//���������Ǹ��ַ���   ���Ƕ�ȡ���˿ո񣬵��ո��ֹͣ
	printf("��ȷ������(Y/N)��>");
	//��Ϊ���������س����и�\n����Ȼscanfȡ�������룬���ǻ�ʣ��\n������getcharֱ�Ӷ�ȡ\n

	//�����������ѻ��������ȡ��
	//getchar();//����'\n'  �����getcharֻȡ��һ���ַ�

	int tmp = 0;
	while ((tmp = getchar()) !='\n')//�������ַ���ֱ������\n
		//getchar��ȡ�ַ������Ƿ��ص������� ��ΪASCII
	{
		;
	}
	int ch = getchar();//����һ���ַ���ȡ


	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;
}

*/

//whileѭ����ѡ��
/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')//����Ƿ������ַ��Ͳ���ӡ���������ַ��ʹ�ӡ
			continue;
	}



	return 0;
}
*/

//forѭ�����﷨     for(���ʽ1�� ���ʽ2�� ���ʽ3��---ѭ�����
//���ʽ1�����ʼ�����֣����ڳ�ʼ��ѭ������   ���ʽ2Ϊ�����жϲ��֣������ж�ѭ����ֹ  ���ʽ3Ϊ������������ѭ�������ĵ���

//forѭ��
/*
int main()
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	//   ��ʼ��   �ж�    ����
	{
		printf("%d ", i);
	}
	return 0;
}
*/

//forѭ���ж�һ�����Ƿ�Ϊ����
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

//break��continue��forѭ���е�����
/*
int main()
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		//if (i == 5)
			//break;//��ֹѭ�� ����ѭ�� ���01234
		if (i == 5)
		{
			continue;//����5����ѭ�� ���012346789
		}

		printf("%d", i);
	}




	return 0;
}
*/

//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
/*
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		i = 5;//ѭ���ڲ��ı���  �ᵼ�´�����ѭ��
		i++;//���ֿ��ԣ�����Ҫ��for�󣨣��ڵ�ɾ��
	}
	return 0;
}
*/

//����for����ѭ��������ȡֵ����ǰ�պ󿪵�д��   ��for(i = 0; i <= 10, i++)����������ôд��������
//forѭ���� ��ʼ�� �ж� ����������ʡ�ԣ������ж�ʡ�Ծͻᵼ����ѭ����
 
//forѭ����ʼ��ʡ�� Ҳ����ͬʱ������� �жϲ���ʡ�Ժ�Ϊ���﷨�涨
/*
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 3; i++)
	{
		for (; j < 3; j++)//����ʼ��ʡ�Ժ� �ٴ�ѭ�����ᱻ��ʼ��
		{
			printf("hehe\n");
		}
	}

	return 0;
 }
*/

//for��ѭ��
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

//do wileѭ���﷨
//do ---ѭ����䣻----while�����ʽ����

//do whileѭ��
/*
int main()
{
	int i = 1;
	do
	{
		if (i == 5)
		{
			//break;//��ӡ��5��ֹͣ ����ѭ����while����Ҳ��ֱ�ӽ��� һ��breakֻ�������Լ���ѭ��
			continue;//��ʹ��������Ϊi++�ں������Կ��ܻᱻ�������Դ�4������ѭ��
		}
		printf("%d ", i);
		i++;
	} while (i <= 10);


	return 0;
}
*/

//forѭ������n�Ľ׳ˣ�n����
/*
int main()
{

	int i = 0;
	int k = 0;
	int arr = 1;

	scanf("%d", &k);
	for(i = 1; i <= k; i++)//һֱѭ�����㵽i=k
	{
		arr *= i;
	}
		printf("%d\n", arr);

	return 0;
}
*/

//����1!+2!+3!+.....+n!
/*
int main()
{

	int i = 0;
	int n = 0;
	int a = 1;
	int b = 0;
	for (n = 1; n <= 10; n++)//����ӵ�10�Ľ׳�
	{
		a = 1;//����n�Ľ׳�֮ǰ����a��ʼΪ1
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

//����1!+2!+3!+.....+n! �򵥷�ʽ
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

//��һ�����������в��Ҿ����ĳ������n   ���ֲ��ҷ�
/*
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ�����
	//��a�������������в���k��7����ֵ

	int sz = sizeof(a) / sizeof(a[0]);//�����Ԫ�ظ���

	int l = 0;//ȷ�������Ԫ�ص��±�
	int r = sz - 1;//ȷ�����ұ�Ԫ�ص��±�
	
	//һ�ζ��ֲ���
	// int mid = (l + r) / 2;
	//if (a[mid] < k)//����м�ֵС��k
	//{
	//	l = mid + 1;//��ߵ������м�ֵ+1����Ϊ�±��Ǵ�0��ʼ��
	//}
	//else if (a[mid]>k)
	//{
	//	r = mid - 1;
	//}
	//else
	//{
	//	printf("�ҵ���:%d\m", mid);//mid��k����˾����ҵ���
	//}

	//ѭ�����ֲ��ң���ζ��ֲ���
	while (l>k)//Ҳ������1���������Ϊ��ѭ��������������if
	{
		int mid = (l + r) / 2;
		if (a[mid] < k)//����м�ֵС��k
		{
		l = mid + 1;//��ߵ������м�ֵ+1����Ϊ�±��Ǵ�0��ʼ��
		}
		else if (a[mid]>k)
		{
		r = mid - 1;
		}
		else
		{
		printf("�ҵ���,�±���:%d\n", mid);//mid��k����˾����ҵ���
		break;
		}
	}
	if (l > r)
		printf("�Ҳ���");

	return 0;
}
*/

//��д���룬����ַ��������ƶ������м���
//welcome to china ����������
//w##########��
//we########!!

#include<string.h>//����ʹ��strlen strcmp �����ַ����������Զ�Ҫ�������
#include<Windows.h>//����ʹ��Sleep
/*
int main()
{
	char arr1[] = { "welcome to china!!!" };
	char arr2[] = { "###################" };
	int l = 0;
	int r = strlen(arr1)-1;//�����ұߵ��±��Ƕ�����Ϊ���ұ��и�\0����Ҫ-1

	while (l<=r)
	{


		arr2[l] = arr1[l];//arr2[l]���ĳ�arr1[l]
		arr2[r] = arr1[r];
		printf("%s\n", arr2);
		Sleep(100);//����0.1��
		system("cls");//�����Ļ
		l++;
		r--;
	}
	printf("%s\n", arr2);//��պ��ӡ�����
	return 0;
}
*/

//��д����ʵ�֣�ģ���û���½�龰������ֻ�ܵ�¼���Σ�ֻ�����������Σ����ζ������˳���������һ����ȷ��ʾ��¼�ɹ�
/*
int main()
{
	int i = 0;
	//������ȷ���������ַ�����123456��
	char password[20] = { 0 };
	for ( i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", password);
		//if(pasword == "123456")//arr -�����ַ����Ƚϣ������� == ��Ӧ����strcmp
		if (strcmp(password,"123456") == 0)//strcmp( , " ") ==0 ����Ƚ����
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}

	if (i == 3)
		printf("��������������Ƴ�����\n");
	return 0;
}
*/

//��������Ϸ 1.�Զ�����һ��1-100֮�������� 2��������  a���¶��˹�ϲ�㣬��Ϸ���� b���´��˸��߲´��˻��С�ˣ�������ֱ���¶ԡ� 3.��Ϸһ��һֱ�棬�����˳���Ϸ

#include<stdlib.h>//����ʹ��rand
#include<time.h>//����ʹ��time
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
	//��������Ϸʵ��
	//1.�����������
	//rand����������һ��0-32767֮����������ǲ������
	//ʱ�� -- ʱ���
	//srand((unsigned int)time(NULL));//��timeǿ��ת��Ϊint���� ����main������
	
	int ret = rand()%100+1; //%100��������0-99��Ȼ��+1����Χ����1-100
	//printf("%d\n", ret);//������Ҫ�µ����֣�������
	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if(guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
				break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��timeǿ��ת��Ϊint����
	do
	{
		menu(); //��ӡ�˵�
			printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("������\n");//������
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);



	return 0;
}
*/

//goto���
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
// system //����ִ��ϵͳ����
// gotoֻ���ڵ���������Χ����ת�����ܿ纯��
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("��ע�⣬��ĵ��Խ��������Ӻ�ػ���������룺����ҫ�����װ��İְ֣���ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "����ҫ�����װ��İְ�") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp���� string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;

	}
	return 0;
}