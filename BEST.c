#include <stdio.h>
void main()
{
    int b[20],p[20],barr[20],parr[20],np,nb,bloc,temp,lowest=10000,alloc[20];
    
    printf("enter np:");
    scanf("%d",&np);
    printf("enter nb:");
    scanf("%d",&nb);
    printf("enter block size:");
    for(int i=0;i<nb;i++)
    {
        scanf("%d",&b[i]);
    }
    
    printf("enter process size:");
    for(int i=0;i<np;i++)
    {
        scanf("%d",&p[i]);
    }
    
    for(int i=0;i<np;i++)
    {
        for(int j=0;j<nb;j++)
        {
            if(alloc[j]!=1)
            {
                temp=b[j]-p[i];
                if(temp>=0)
                {
                    if(temp<lowest)
                    {
                        lowest=temp;
                        bloc=j;
                    }
                }
            }
        }
        parr[i]=bloc+1;
        lowest=10000;
        alloc[bloc]=1;
    }
    
    for(int i=0;i<np;i++)
    {
        printf("%d %d\n",parr[i]);
    }
   
}
