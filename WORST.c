#include <stdio.h>
int main()
{
    int parr[20],np,nb,bloc,temp,max=0,alloc[20];
    np=4;
    nb=5;
    int b[]={100, 500, 200, 300, 600};
    int p[]={212, 417, 112, 426};
   
for(int i=0;i<nb;i++){
alloc[i]=0;}
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
    }
    */
    for(int i=0;i<np;i++)
    {
        bloc=-2;
        for(int j=0;j<nb;j++)
        {
            
            if(alloc[j]!=1)
            {
                temp=b[j]-p[i];
                if(temp>=0)
                {
                    if(temp>max)
                    {
                        max=temp;
                        bloc=j;
                    }
                }
            }
        }
        parr[i]=bloc+1;
        max=0;
        alloc[bloc]=1;
    }
    
    for(int i=0;i<np;i++)
    {
        printf("%d \n",parr[i]);
    }
    
  
    
}
