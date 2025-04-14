#include <stdio.h>

int main()
{
    char c[100];
    int count = 0;
    scanf("%s",c);
    for(int i = 0; c[i] != '\0'; i++){
        count++;
        
    }

    for(int j = count; j >= 0; j--){
        printf("%c",c[j]);
    }
    return 0;
}
