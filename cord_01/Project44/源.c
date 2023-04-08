#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
//typedef struct node
//{
//	int data;
//	struct node* next;
//} *Link, Lnode;
//Link creat(int n)
//{
//	int i, d;
//	Link L = NULL, p;
//	for (i = 1; i <= n; i++)
//	{
//		printf("Enter a element:");
//		scanf_s("%d", &d);
//		p = (Link)malloc(sizeof(Lnode));
//		p->data = d;
//		p->next = L;
//		L = p;
//	}
//	return L;
//}
//void BL(Link L)
//{
//	Link p = L;
//	while (p != NULL)
//	{
//		printf("%4d", p->data);
//		p = p->next;
//	}
//}
//void main()
//{
//	Link L; int n;
//	printf("Enter the number of element:");
//	scanf_s("%d", &n);
//	L = creat(n);
//	BL(L);
//}
int main()
{
	struct Student
	{
		int num;
		char name[20];
		char sex;
		char adds[100];
	}a = { 10010,"Liming",'M',"123beijing rode" };
	printf("NO.:%d\nname:%s\nsex:%c\naddress:%s\n", a.num, a.name, a.sex, a.adds);
	return 0;
}