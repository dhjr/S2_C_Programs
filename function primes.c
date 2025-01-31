#include<stdio.h>
void main()
{
    int primes(int n)
    {
        int i,flag =0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag =1;
                
            }
        }
        if(flag ==1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        
            
    }

    
    int n;
    printf("Enter a range: \t");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(primes(i)==1)
        {
            printf("%d\t",i);
        }
    }
}
