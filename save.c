#include "head.h"

void save(int t)
{
    FILE *p=NULL;
    char c[100];
    p=fopen("dat.DAT","a+");
    if(p!=NULL)
    {
        printf("\n����������֣�");

        scanf("%s",c);

        fprintf(p,"%s %d ",c,t);
        fclose(p);
    }
}
