#include <stdio.h>
#include <string.h>
int main()
{
    char ip[101];
    int len;
   
    scanf("%s", ip);
    len = strlen(ip);
    int count = 1;
    
    for (int i = 0; i < len;i++) {
        while( i < len && ip[i] == ip[i+1]){
            i++;
            count++;
        }
        printf("%c%d", ip[i], count);
        
        count = 1;
    }
    printf("\n%d", len);    
    printf("\n");
    return 0;
    

}
