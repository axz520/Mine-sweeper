#include "head.h"


int change(int f,int x,int y) //�����ı�Ŀ��ƣ�fΪ�ı䷽ʽ
{
    int ff;          //ffΪ�ж�ʤ��������

    if(f==0)loc[x][y]='F';
    else if(f==1)
    {

        if(really[x][y]=='!')       //��ը
        {
            ff=0;
        }

        else if(really[x][y]!='0')  //�㿪����Ȧ������ֱ����ʾ
        {
            loc[x][y]=really[x][y];
            ff=1;
        }

        else if(really[x][y]=='0')  //����������0��Ҫչ������תcsearch
        {
            csearch(x,y);
            ff=1;
        }

    }

    return win(x,y,ff);             //����ֵΪ�Ƿ����
}

int win(int x,int y,int f) //������е�����Ϊʤ������ ok
{
    if(f==0) //ʧ��
    {
        int i,j;

        printf("\n\n\n\n\n\n");
        printf("\t\t\tʵ����������\n\n");
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

    else if(f==1) //�ж��Ƿ����
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
            printf("\t\t\tʵ�ʵ�ͼ��\n\n");
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
