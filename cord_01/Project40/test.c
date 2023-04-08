#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//
//int main()
//{
//    int year;
//    printf("输入年份：");
//    scanf("%d", &year);
//    // year = 400;
//
//    // （四年一闰，百年不闰) || 四百年在闰年
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//    {
//        printf("y\n");
//    }
//    else
//    {
//        printf("n\n");
//    }
//
//    return 0;
//}
//#include<stdio.h>
//void main()
//
//{
//
//    int r;
//    int n = 48;
//    int m = 18;
//
// /*   scanf("%d%d", &n, &m);*/
//
//    do {
//
//        r = n % m;
//
//        n = m, m = r;
//
//    } while (r);
//
//    printf("%d\n", n);
//
//}
//

#include<stdio.h>

int age(int n)
{
    int c;
    if (n == 1)
        c = 10;
    else
        c = age(n - 1) + 2;
    return(c);
}
int main()
{

    printf("NO.5,age:%d\n", age(5));
    return 0;
}