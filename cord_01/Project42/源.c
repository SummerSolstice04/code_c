#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
/*nt main()
{
	int arr[100];
	int i,j;
	for (i = 0; i < 100; i++)
	{
		arr[i] = i+1;
	}
	arr[0] = 0;
	for (i=1;i<100;i++)
	{
		if (0 == arr[i])
			continue;
		for (j = i+1; j < 100; j++)
		{
			if (arr[i] != 0&&arr[j] % arr[i] == 0)
			{
				arr[j] = 0;
			}
		}

	}
	for (i = 1;i < 100; i++)
	{
		if(0 !=arr[i])
		printf("%d ", arr[i]);
	}
	return 0;
}*/
int main()
{
	char word[10000];
	int n,i =0;
	int num=0;
	char c ;
	/*scanf("%s", word);*/
	
	gets(word);
	for (i = 0; c = word[i]; i++)
	{
		for (i = 0; c != '\0'; i++)
		{
			if (c ==' ')
				num++;
		}
	}
	printf("This is % d in this line", num);
	return 0;
}