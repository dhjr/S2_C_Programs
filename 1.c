#include<stdio.h>
int main()
{
    FILE *fp;
    fp= fopen("hello.txt","r");
    int v=0;
    char ch;

    ch= getc(fp);
    while(ch!=EOF)
    {
        if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
        {
            v++;
        }
    }
    printf("No of vowels: %d",v);
    fclose(fp);
    return 0;
}