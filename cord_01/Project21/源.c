#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define V 4//�������ηŴ���
#define list (4*V+3)//����
#define row (3*V+3)//����
void FindMainPoint(char line[row][list]);
void Connect(int r1, int r2, int l1, int l2, char line[row][list]);//r��l��
void Print(char line[row][list]);
void Finger(char point[17][20]);
int main(void)
{
    char line[row][list];
    char point[17][20];
    FindMainPoint(line);
    Print(line);
    printf("\n\n");
    Finger(point);
    return 0;
}

//�ҵ��ؼ���
void FindMainPoint(char line[row][list])
{
    int list_mid = (list + 1) / 2 - 1;

    int list_left = (list + 1) / 4 - 1;

    int list_left_right = list_left + 1;

    int list_right = list_mid + list_left + 1;

    int list_right_left = list_right - 1;

    int row_above = 1 - 1;

    int row_mid = row / 3 - 1;

    int row_mid_below = row_mid + 1;

    int row_below = row - 1;

    line[row_above][list_left] = '*';//(4,1)
    line[row_above][list_left_right] = '*';//(5,1)
    line[row_above][list_right] = '*';//(12,1)
    line[row_above][list_right_left] = '*';//(11,1)

    line[row_mid][0] = '*';//(1,4)
    line[row_mid][list_mid] = '*';//(8,4)
    line[row_mid][list - 1] = '*';//(15,4)

    line[row_mid_below][0] = '*';//(1,5)
    line[row_mid_below][list - 1] = '*';//(15,5)

    line[row_below][list_mid] = '*';//(8,12)

    Connect(row_mid, row_above, 0, list_left, line);//(1,4)&&(4,1)
    Connect(row_above, row_mid, list_left_right, list_mid, line);//(5,1)&&(8,4)
    Connect(row_mid, row_above, list_mid, list_right_left, line);//(8,4)&&(11,1)
    Connect(row_above, row_mid, list_right, list - 1, line);//(12,1)&&(15,4)
    Connect(row_mid_below, row_below, 0, list_mid, line);//(1,5)&&(8,12)
    Connect(row_below, row_mid_below, list_mid, list - 1, line);//(8,12)&&(15,5)
    return;
}

//���ӹؼ���
void Connect(int r1, int r2, int l1, int l2, char line[row][list])
{
    int i, j;
    if (r1 > r2)
    {
        for (i = r1, j = l1; i >= r2; i--, j++)
        {
            line[i][j] = '*';
        }
    }
    else
    {
        for (i = r1, j = l1; i <= r2; i++, j++)
        {
            line[i][j] = '*';
        }
    }
    return;
}

//��ӡ����
void Print(char line[row][list])
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        printf("\t\t\t\t\t\t");//��ͼ�ξ������У��ı��С�������޸�
        for (j = 0; j < list; j++)
        {
            if (line[i][j] != '*')
            {
                printf(" ");
            }
            else

                printf("*");
        }
        printf("\n");
    }
}

//��ӡ��ָ
void Finger(char point[17][20])
{
    int i, j;
    for (i = 0, j = 5; j <= 6; j++)
        point[i][j] = '*';//
    for (j = 4, i = 1; i <= 8; i++)
        point[i][j] = '*';//
    for (j = 7, i = 1; i <= 6; i++)
        point[i][j] = '*';//
    for (i = 4, j = 8; j <= 10; j++)
        point[i][j] = '*';//
    for (j = 11, i = 5; i <= 6; i++)
        point[i][j] = '*';//
    for (i = 5, j = 12; j <= 14; j++)
        point[i][j] = '*';//
    for (j = 15, i = 6; i <= 7; i++)
        point[i][j] = '*';//
    for (i = 6, j = 15; j <= 18; j++)
        point[i][j] = '*';
    for (j = 19, i = 7; i <= 11; i++)
        point[i][j] = '*';//
    for (j = 18, i = 12; i <= 13; i++)
        point[i][j] = '*';//
    for (j = 17, i = 14; i <= 15; i++)
        point[i][j] = '*';//
    for (i = 16, j = 6; j <= 16; j++)
        point[i][j] = '*';//
    for (i = 14, j = 7; j <= 15; j++)
        point[i][j] = '*';
    for (j = 7; j <= 15; j += 4)//
        for (i = 10; i <= 12; i++)
            point[i][j] = '*';
    for (j = 5, i = 14; i <= 15; i++)
        point[i][j] = '*';//
    for (j = 2, i = 10; i <= 11; i++)
        point[i][j] = '*';//
    for (j = 0, i = 7; i <= 8; i++)
        point[i][j] = '*';//
    for (i = 6, j = 1; j <= 2; j++)
        point[i][j] = '*';
    point[7][3] = '*';
    point[9][1] = '*';
    point[12][3] = '*';
    point[13][4] = '*';
    for (i = 0; i < 17; i++)
    {
        printf("\t\t\t\t\t\t  ");//��ͼ�ξ������У��ı��С�������޸�
        for (j = 0; j < 20; j++)
        {
            if (point[i][j] != '*')
            {
                printf(" ");
            }
            else

                printf("*");
        }
        printf("\n");
    }
}