#include <stdio.h>
void main()
{
    int parr[20],np,nb,bloc,temp,lowest=10000,alloc[20];
    np=4;
    nb=5;
    int p[]={90,50,30,40};
    int b[]={20,100,40,200,10};
    /*printf("enter np:");
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
    }*/
    
    for(int i=0;i<np;i++)
    {
        for(int j=0;j<nb;j++)
        {
            if(alloc[j]!=1)
            {
               
                if(b[j]>=p[i])
                {
                    
                        bloc=j;
                        break;
                    
                }
            }
            else
            {
                bloc=-2;
            }
        }
        parr[i]=bloc+1;
        alloc[bloc]=1;
    }
    
    for(int i=0;i<np;i++)
    {
        printf("%d\n",parr[i]);
    }
    
}

