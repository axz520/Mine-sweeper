#include <stdio.h>
#include <stdlib.h>

void out()
{
    FILE *p;
    int a;
    char s[100];
    p=fopen("dat.DAT","r");
    if(p!=NULL)
    {
        printf("���а�\n����***************��ʱ*********\n");
        while(!feof(p))
        {
            fscanf(p,"%s %d ",s,&a);
            printf("%-14s     %d\n",s,a);
        }
    }
}
