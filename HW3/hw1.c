#include <string.h>
#include <stdio.h>

int main()
{
    FILE* readfile=fopen("lotto.txt", "r");
    FILE* winning=fopen("win.txt", "w");
    char num[40];
    
    while(fgets(num, sizeof(num), readfile)!= NULL)
    {
        if(strstr(num,"02")||strstr(num,"04")||strstr(num,"06"))
        {
            fprintf(winning, "%s", num);
        }
    }
}
