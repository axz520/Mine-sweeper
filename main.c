#include "head.h"

int main() //主调用ok
{
    int choice,m=2;
    system("title 超级无敌逗比扫雷!!!");
    system("color 4F");
    while(1)
    {
        begining();
        printf("\t\t\t\t***********************************************\n");
        printf("\t\t\t\t****************超级无敌逗比扫雷***************\n");
        printf("\t\t\t\t****************1.开始游戏！！  ***************\n");
        printf("\t\t\t\t****************2.查看大佬记录  ***************\n");
        printf("\t\t\t\t****************3.你忍心退出吗？***************\n");
        printf("\t\t\t\t***********************************************\n");
        printf("\t\t\t\t***********************************************\n");
        printf("\t\t\t\t****************所以：");
        scanf("%d",&choice);
        if(choice==2)
        {
            load
            system("cls");
            out();
        }
        else if(choice==1)
        {
            load
            system("cls");

            start();
            printf("游戏结束！");
            printf("1.退出程序\t2.返回菜单\n");
            scanf("%d",&m);
            if(m==2);
            else
            {
                break;
            }
        }
        else if(choice==3)
        {
            break;
        }
        else
        {
            fflush(stdin);
            printf("\n\t\t\t\t你的想法超过我的大脑计算了、、\n");
            Sleep(2000);
        }

    }
    return 0;
}


