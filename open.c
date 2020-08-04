#include "head.h"

void csearch(int i,int j) //0的展开
{
    loc[i][j]=really[i][j];

    if(loc[i][j]=='0'&&u[i][j]==0)      //0区的扩展
    {
        if(j-1>=0)loc[i][j-1]=really[i][j-1];

        if(j+1<=9)loc[i][j+1]=really[i][j+1];

        if(i-1>=0)loc[i-1][j]=really[i-1][j];

        if(i+1<=9)loc[i+1][j]=really[i+1][j];

        if(i-1>=0&&j-1>=0)
            loc[i-1][j-1]=really[i-1][j-1];

        if(i-1>=0&&j+1<=9)
            loc[i-1][j+1]=really[i-1][j+1];

        if(i+1<=9&&j-1>=0)
            loc[i+1][j-1]=really[i+1][j-1];

        if(i+1<=9&&j+1<=9)
            loc[i+1][j+1]=really[i+1][j+1];

    }
    u[i][j]=1;              //递归循环直到没有0为止

    if(j+1<=9&&u[i][j+1]==0&&loc[i][j+1]=='0')csearch(i,j+1);

    if(j-1>=0&&u[i][j-1]==0&&loc[i][j-1]=='0')csearch(i,j-1);

    if(i-1>=0&&u[i-1][j]==0&&loc[i-1][j]=='0')csearch(i-1,j);

    if(i+1<=9&&u[i+1][j]==0&&loc[i+1][j]=='0')csearch(i+1,j);

    if(i-1>=0&&j-1>=0&&u[i-1][j-1]==0&&loc[i-1][j-1]=='0')csearch(i-1,j-1);

    if(i-1>=0&&j+1<=9&&u[i-1][j+1]==0&&loc[i-1][j+1]=='0')csearch(i-1,j+1);

    if(i+1<=9&&j-1>=0&&u[i+1][j-1]==0&&loc[i+1][j-1]=='0')csearch(i+1,j-1);

    if(i+1<=9&&j+1<=9&&u[i+1][j+1]==0&&loc[i+1][j+1]=='0')csearch(i+1,j+1);

}
