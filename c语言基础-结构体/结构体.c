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
	//��Ա����
	struct B sb;
	char name[20];
	int age;
	char id[20];

}S1,S2;//S1 S2Ҳ�ǽṹ����� Ҳ��ȫ�ֱ�����{}��
//S1 S2�������͵�ͬʱ�������

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
	//��ʼ���ֲ�����s
	struct Stu s = { {'W', 20, 3.14}, "����", 30, "20220928"};//ÿһ����������������ṹ���еı���

	//struct Stu* ps = &s;
	//printf("%c\n", (*ps).sb.c);
	//printf("%c\n", ps->sb.c);
	print1(s);//��ֵ����
	print2(&s);//��ַ����
	return 0;
}
*/

int Add(int x, int y)//ÿһ�κ������ö������ڴ��ջ���Ͽ���һ��ռ䣡�������ε�ʱ�򣬲�������Ҫѹջ�ģ��������һ���ṹ������ʱ��ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
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