#include "head.h"

void boom(int xx,int yy)  //����λ��  �Լ���һ�α�Ȼ��boom,xx��yyΪ��boom������
{
    int i,j,ff,seed,x,y;
    int x0[10],y0[10];

    seed=time(0);
    srand((unsigned)seed);

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            really[i][j]='0';
        }
    }

    i=0;

    while(i<10)
    {
        while(1)
        {
            x=rand()%10;
            y=rand()%10;
            ff=1;

            for(j=0;j<i;j++)
            {
                if(x==x0[j])
                {
                    if(y==y0[j])
                    {
                        if(x==xx)
                        {
                            if(y==yy)
                            {
                                ff=0;
                                break;
                            }
                        }
                    }
                }
            }

            if(ff==1)
            {
                x0[i]=x;
                y0[i]=y;
                really[x][y]='!';
                break;
            }

        }

        i=i+1;

    }
                          //���������ͬλ�õĵ���
    other();                    //��������������
}

void other() //������������������
{
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(really[i][j]=='!')
            {
                if(really[i][j-1]!='!'&&j-1>=0)really[i][j-1]+=1;
                if(really[i][j+1]!='!'&&j+1<=9)really[i][j+1]+=1;
                if(really[i+1][j]!='!'&&i+1<=9)really[i+1][j]+=1;
                if(really[i-1][j]!='!'&&i-1>=0)really[i-1][j]+=1;
                if(really[i+1][j-1]!='!'&&i+1<=9&&j-1>=0)really[i+1][j-1]+=1;
                if(really[i-1][j-1]!='!'&&i-1>=0&&j-1>=0)really[i-1][j-1]+=1;
                if(really[i-1][j+1]!='!'&&i-1>=0&&j+1<=9)really[i-1][j+1]+=1;
                if(really[i+1][j+1]!='!'&&i+1<=9&&j+1<=9)really[i+1][j+1]+=1;
            }
        }
    }
}
