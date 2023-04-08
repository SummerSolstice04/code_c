#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() 
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	int len1 = strlen("abc");
	int len2 = strlen("'a', 'b', 'c'");

	printf("%d\n", len1);
	printf("%d\n", len2);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));



	return 0;
}