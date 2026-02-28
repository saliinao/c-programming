#include<stdio.h>
int main()
{
    int count,i;
    char arr[20];
    scanf("%[^\n]",&arr);
    for(i=0;arr[i]!='\0';i++);
    {
        if(arr[i]!=' ')
            count ++;
    }
    printf("length of string:%d",count);
}