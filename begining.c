#include "head.h"

//��ʼ���û���ͼ
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

void start() //�������
{
    int ff,gbegin,gend,t,x,y,flag;
    gbegin=clock()/1000;

    while(1)
    {
        print();

        scanf("%d%d",&y,&x);

        if(x>=0&&y>=0&&x<=9&&y<=9)
        {
            printf("\n���еĲ�����1ֱ��̽���������0���̽���Ҽ�����");

            scanf("%d",&flag);

            if(flag==1||flag==0)
            {

                boom(x,y);

                ff=change(flag,x,y);
                break;
            }
            else
            {
                printf("\n����ʲô������ʽ������\n\n");
            }
        }
        else
        {
            printf("\n�����������ڻ��ǡ�����\n\n");
        }
    }

    while(ff)   //ffΪ�ж�ͨ�صı�־
    {
        print();

        scanf("%d%d",&y,&x);

        if(x>=0&&y>=0&&x<=9&&y<=9)
        {
            printf("\n���еĲ�����1ֱ��̽���������0���̽���Ҽ�����");

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
                printf("\n����ʲô������ʽ������\n\n");
            }
        }
        else
        {
            printf("\n�����������ڻ��ǡ�����\n\n");
            continue;
        }
    }
    gend=clock()/1000;
    t=gend-gbegin;
    printf("\n��ʱ��%d\n",t);
    if(ff==2)
        save(t);
}
