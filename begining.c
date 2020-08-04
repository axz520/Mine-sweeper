#include "head.h"

//初始化用户地图
void begining()
{
    int i,j;

    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            {
                loc[i][j]='*';
                u[i][j]=0;
            }

}

void start() //界面控制
{
    int ff,gbegin,gend,t,x,y,flag;
    gbegin=clock()/1000;

    while(1)
    {
        print();

        scanf("%d%d",&y,&x);

        if(x>=0&&y>=0&&x<=9&&y<=9)
        {
            printf("\n进行的操作（1直接探索即左键，0间接探索右键）：");

            scanf("%d",&flag);

            if(flag==1||flag==0)
            {

                boom(x,y);

                ff=change(flag,x,y);
                break;
            }
            else
            {
                printf("\n这是什么操作方式。。。\n\n");
            }
        }
        else
        {
            printf("\n这个坐标可能在火星。。。\n\n");
        }
    }

    while(ff)   //ff为判断通关的标志
    {
        print();

        scanf("%d%d",&y,&x);

        if(x>=0&&y>=0&&x<=9&&y<=9)
        {
            printf("\n进行的操作（1直接探索即左键，0间接探索右键）：");

            scanf("%d",&flag);

            if(flag==1||flag==0)
            {

                if(loc[x][y]!='0')
                   ff=change(flag,x,y);

                if(ff==2)
                {
                    printf("YOU WIN!!\n");
                    break;
                }
            }
            else
            {
                printf("\n这是什么操作方式。。。\n\n");
            }
        }
        else
        {
            printf("\n这个坐标可能在火星。。。\n\n");
            continue;
        }
    }
    gend=clock()/1000;
    t=gend-gbegin;
    printf("\n用时：%d\n",t);
    if(ff==2)
        save(t);
}
