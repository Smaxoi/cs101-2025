#include <stdio.h>

int main()
{
    char h[100];
    int c=0;
    scanf("%s",h);
    for(int i=0; h[i]!='\0'; i++)
    {
        c=c*2 +(h[i]-'0');
    }   
    printf("%X",c);
}
