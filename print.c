#include "head.h"

void print() //start���������
{
    int i,j;

    printf("\t\t\t*Ϊδ̽������!Ϊ������FΪ���ӣ�����Ϊ��������������Ϊ������Χ������\n\n");
    printf("\t\t\t   0 1 2 3 4 5 6 7 8 9\n");

    for(i=0;i<10;i++)
    {
        printf("\t\t\t%d  ",i);

        for(j=0;j<10;j++)
        {
            printf("%c ",loc[i][j]);
        }

        printf("\n");

    }

    printf("̽��������Ϊ��");

}
