#include <stdio.h>
#include <string.h>

int main()
{
    char w[50];
    scanf("%s",w);
    int i;
    int count = 1;
    
    for (i = 0; i < strlen(w); i++){
        
        while(w[i] == w[i+1]) {
            count++;
            i++;
        }    
        printf("%c%d", w[i], count);
        count = 1;
    }
    printf("\n");
    return 0;
    
}
