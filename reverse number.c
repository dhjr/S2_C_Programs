#include <stdio.h>
void main()
{
    int n,rev=0,dig,temp;
    printf("Enter a number: \n");
    scanf("%d",&n);
    temp = n;
    while (temp>0){
        dig = temp%10;
        rev = (rev*10) + dig;
        temp/=10;
    }

    printf("%d",rev);



}


