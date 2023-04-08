#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 10;
	&num;
	printf("%p\n", &num);

	return 0;

}