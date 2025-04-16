#include <stdio.h>

int main() {
    char ip[20];
    scanf("%s",ip);
    int count = 1;
    for(int i = 0;ip[i] != '\0'; i++){
        if(ip[i] == ip[i + 1]){
            count++;
        }
        else{
            printf("%c%d",ip[i] ,count);
            count = 1;
        }
    }
}
