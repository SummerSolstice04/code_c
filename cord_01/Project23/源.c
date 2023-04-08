#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int ret = 1;
	int sum = 0;
	/*for (a = 1; a <= 10; a++)
	{
		ret = 1;
		for (b = 1; b <= a; b++)
		{
			ret *= b;
		}
		sum += ret;
	}*/
	for (a = 1, b = 1; a <= 10;a++)
	{
		ret *= a;


		sum += ret;
	}
	printf("%d",sum);
	return 0;
}