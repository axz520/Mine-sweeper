#include "head.h"

void print() //start的输出控制
{
    int i,j;

    printf("\t\t\t*为未探索区域，!为雷区，F为旗子（你认为的雷区），数字为雷区周围的雷数\n\n");
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

    printf("探索的坐标为：");

}
