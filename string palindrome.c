#include<stdio.h>
#include<string.h>

void main()
{
    char str[50] , rev[50];
    int flag =1;
    printf("Enter a string: \n");
    scanf("%s",str);
    
    int len = strlen(str);
    
    for(int i=0;i<len/2;i++)
    {
        if (str[len-i-1] != str[i])
        {
            printf("It is not a palindrome!");
            flag = 0;
            break;
        }
        
    }
    if (flag == 1)
    {
        printf("It is a palindrome");
    }
}
