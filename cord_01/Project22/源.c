#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	/*int a, b;
	scanf("%d\n", &a);
	printf("请输入一个数：");

	switch(a)
	{
	case 1 :b = 1;
	case 2 :b = 2;
	defaul:b = 3;

	}
	printf("%d\n", b);*/
	//	/*
	//	i
	//	int 
	//	
	//}
	//do
	/*double a = 1439.5;
	printf("%4.1f\n", a)*//*;*/
	/*int a, b, c = 0;
	for(a = 6; a > 0; a++)
		for(b = 0; b < 4; b++)
		c++;
	printf("c=%d\n", c);*/
	/*int a = 5;
	printf("%d\n", a++);
}*/
	/*int i, j, n = 4;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
			printf("");
		for (j = 0; j <= n; j++)
			printf("*");
		printf("\n");
	}*/
	int a[5], i, j, t;
	for(i=0;i<5;i++)
	{
		printf("enter data %d:", i + 1);
		scanf("%d:", &a[i]);
	}
	for(i=0;i<4;i++)
		for(j=0;i<4-i;j++)
			if(a[j]<a[j+1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;}
	for (i = 0; i < 5; i++)
		printf("%-4d", a[i]);
}