#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

void main()
{
	//	int i = 10, j = 3, k = 0, l = 0, m = 0;
	//	while(i!=j)
	//	{ 
	//		++k;
	//		while(i>j)
	//		{
	//
	//			i -= j;
	//			++i;
	//		}
	//		if(j>i)
	//		{
	//			j -= i;
	//			continue;
	//		}
	//		++m;
	//	}
	//	printf("%d,%d,%d\n",k,l,m);
	//	/*char str1[10] = "abcde", str2[10] = "xyz";
	//	strcpy(str1, str2);
	//	printf("%d", strlen(str1));*/
	//	/*int a = 7;
	//	a *= a + 3;
	//	printf("%d", a);*/
	//	/*int a[4] = { 0,1,2,3 };
	//	int *p;
	//	p = &a[1];
	//	++(*p);
	//	printf("%d", *p);*/
	//
	//
	int i, j, n = 3;
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= (n - 1) / 2; j++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
