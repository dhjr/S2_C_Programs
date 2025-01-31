#include <stdio.h>

int main() 
{
    int a[10][10] , t[10][10],i,j,m,n;
    printf("Enter row and column\n");
    scanf("%d%d",&m,&n);
    printf("\n");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                t[j][i]=a[i][j];
            }

    }
    
printf("\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",t[i][j]);
        }
        
    printf("\n");
    }

    return 0;
}