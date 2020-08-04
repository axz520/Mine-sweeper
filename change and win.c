#include "head.h"


int change(int f,int x,int y) //输出后改变的控制，f为改变方式
{
    int ff;          //ff为判断胜利的条件

    if(f==0)loc[x][y]='F';
    else if(f==1)
    {

        if(really[x][y]=='!')       //爆炸
        {
            ff=0;
        }

        else if(really[x][y]!='0')  //点开雷区圈的数字直接显示
        {
            loc[x][y]=really[x][y];
            ff=1;
        }

        else if(really[x][y]=='0')  //非雷区数字0需要展开，跳转csearch
        {
            csearch(x,y);
            ff=1;
        }

    }

    return win(x,y,ff);             //返回值为是否结束
}

int win(int x,int y,int f) //点出所有的数字为胜利条件 ok
{
    if(f==0) //失败
    {
        int i,j;

        printf("\n\n\n\n\n\n");
        printf("\t\t\t实际雷区如下\n\n");
        printf("\t\t\t   0 1 2 3 4 5 6 7 8 9\n");

        for(i=0;i<10;i++)
        {
            printf("\t\t\t%d  ",i);

            for(j=0;j<10;j++)
            {
                if(i==x&&j==y)
                {
                    printf("! ");
                }

                else if(loc[i][j]!='*'&&really[i][j]!='!')
                {
                    printf("%c ",loc[i][j]);
                }

                else if(really[i][j]=='!')
                    printf("! ");
                else if(loc[i][j]=='*')
                {
                    printf("* ");
                }

            }

            printf("\n");

        }

        printf("boom!!!\n\n");

    }

    else if(f==1) //判断是否过关
    {
        f=2;
        int i,j;

        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(loc[i][j]=='*'&&really[i][j]!='!')
                {
                    f=1;
                    break;
                }

                if(loc[i][j]=='F'&&really[i][j]!='!')
                {
                    f=1;
                    break;
                }

            }
        }

        if(f==2)
        {
            int i,j;
            printf("\n\n\n\n\n\n");
            printf("\t\t\t实际地图：\n\n");
            printf("\t\t\t   0 1 2 3 4 5 6 7 8 9\n");

            for(i=0;i<10;i++)
            {
                printf("\t\t\t%d  ",i);

                for(j=0;j<10;j++)
                {
                    printf("%c ",really[i][j]);
                }

                printf("\n");
            }
        }
    }

    return f;
}
