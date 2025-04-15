#include <stdio.h>
#include <string.h>
void replace_all(char* str, char oldChar, char newChar)
{
    char* ptr=str;
    while(*ptr != '\0'){
        
        if(*ptr==oldChar)
        {
            *ptr=newChar; 
        }
        ptr++;
    }
}

int main()
{
    char str[100];
    char oldChar='a';
    char newChar='A';
    scanf("%s", str);
    replace_all(str, oldChar, newChar);
    printf("%s", str);
}
