#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void main()
//{
//	int a = 5, b = 5, c1, c2;
//	c1 = a++;
//	c2 = ++b;
//	printf("a=%d,b=%d,c1=%d,c2=%d\n", a, b, c
//		, c2);
//}



//#include<stdio.h>
//void main()
//{
//	int a, b;
//	printf("输入一个整数:"); scanf(" % d",&a); 
//	switch(a)
//	{
//	case 1: b = 1;
//	case 2:b = 2; 
//	case 3:b = 3; 
//	case 4:b = 4; 
//	defaul: b = 5; 
//	}
//	printf("%d\n", b);
//int main()
//{
//	int a, b, c;
//	int a = 10;
//	scanf("%d\n", &b);
//
//	c = b/a;
//	switch (c)
//	{
//	case1:
//	case2:
//	case3:
//	case4:
//	case5:printf("E"); break;
//		case6: printf("D");
//
//			}
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//
//{
//
//	int a, b, c;
//
//	a = 10;
//	printf("请输入成绩:");
//	scanf("%d", &b);
//
//	
//	c = b / a;
//
//	switch (c)
//	{ 
//			case 0:
//			case 1:
//			case 2:
//			case 3:
//
//			case 4:
//			case 5: printf("E"); break;
//
//			case 6: printf("D"); break;
//
//			case 7: printf("C"); break;
//
//			case 8: printf("B"); break;
//
//			case 9:
//
//			case 10: printf("A"); break;
//
//		default: putchar('\a');
//		}
//
//
//
//		return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//#include <tchar.h>
//
//float f(float x, float y, float z) {
//	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//
//float h(float x, float z) {
//	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//		if (f(x, y, z) <= 0.0f)
//			return y;
//	return 0.0f;
//}
//
//int main() {
//	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
//	_TCHAR buffer[25][80] = { _T(' ') };
//	_TCHAR ramp[] = _T(".:-=+*#%@");
//
//	for (float t = 0.0f;; t += 0.1f) {
//		int sy = 0;
//		float s = sinf(t);
//		float a = s * s * s * s * 0.2f;
//		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
//			_TCHAR* p = &buffer[sy++][0];
//			float tz = z * (1.2f - a);
//			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
//				float tx = x * (1.2f + a);
//				float v = f(tx, 0.0f, tz);
//				if (v <= 0.0f) {
//					float y0 = h(tx, tz);
//					float ny = 0.01f;
//					float nx = h(tx + ny, tz) - y0;
//					float nz = h(tx, tz + ny) - y0;
//					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//					*p++ = ramp[(int)(d * 5.0f)];
//				}
//				else
//					*p++ = ' ';
//			}
//		}
//
//		for (sy = 0; sy < 25; sy++) {
//			COORD coord = { 0, sy };
//			SetConsoleCursorPosition(o, coord);
//			WriteConsole(o, buffer[sy], 79, NULL, 0);
//		}
//		Sleep(33);
//	}
//}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define I 20
#define R 340

int main(void)
{
    int i, j, e;
    int a;
    long time;
    system("title 爱心");
    for (i = 1, a = I; i < I / 2; i++, a--)
    {
        for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
            printf(" ");
        for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
            printf("\3");
        for (j = (int)(2 * (I - sqrt(I * I - (a - i) * (a - i)))); j > 0; j--)
            printf(" ");
        for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
            printf("\3");
        printf("\n");
    }
    for (i = 1; i < 80; i++)
    {
        if (i == 35)
        {
            printf(" 编程俱乐部 ");
            i += 30;
        }
        printf("\3");
    }
    printf("\n");
    for (i = 1; i <= R / 2; i++)
    {
        if (i % 2 || i % 3)
            continue;
        for (j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
            printf(" ");
        for (e = 1; e <= 2 * (sqrt(R * R - i * i) - (R - 2 * I)); e++)
            printf("\3");
        printf("\n");
    }

    for (;;)
    {
        system("color a");
        for (time = 0; time < 99999999; time++);

        system("color b");
        for (time = 0; time < 99999999; time++);

        system("color c");
        for (time = 0; time < 99999999; time++);

        system("color d");
        for (time = 0; time < 99999999; time++);

        system("color e");
        for (time = 0; time < 99999999; time++);

        system("color f");
        for (time = 0; time < 99999999; time++);

        system("color 0");
        for (time = 0; time < 99999999; time++);

        system("color 1");
        for (time = 0; time < 99999999; time++);

        system("color 2");
        for (time = 0; time < 99999999; time++);

        system("color 3");
        for (time = 0; time < 99999999; time++);

        system("color 4");
        for (time = 0; time < 99999999; time++);

        system("color 5");
        for (time = 0; time < 99999999; time++);

        system("color 6");
        for (time = 0; time < 99999999; time++);

        system("color 7");
        for (time = 0; time < 99999999; time++);

        system("color 8");
        for (time = 0; time < 99999999; time++);

        system("color 9");
        for (time = 0; time < 99999999; time++);

    }
    return 0;
}