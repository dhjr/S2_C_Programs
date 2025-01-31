#include <stdio.h>

int main() 
{
    int elm,i,flag=0;
    int a[10]= {1,2,3,4,5,6,7,8,9,0};
    
    printf("Enter the element to search: \n");
    scanf("%d",&elm);
    
    for(i=0;i<10;i++)
    {
        if (a[i]==elm)
        {
            printf("Element found at index %d",i);
            flag = 1;
            break;
        }

    }
    
    if (flag ==0)
    {
        printf("Element not present\n");
    }
    
    
    return 0;
}
