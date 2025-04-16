#include <stdio.h>                  //use string.h
#include <string.h>
int main() {
    char ip[20];
    scanf("%s", ip);
    int soa = strlen(ip);
    for(int i = soa;i >= 0; i--){
        printf("%c",ip[i]);
    }
    printf("\n");
}


#include <stdio.h>
int main() {
    char ip[20];
    scanf("%s",ip);
    int soa = 0;
    for(int i = 0;ip[i] != '\0'; i++){
        soa++;
    }
    
    for(int i = soa;i >= 0; i--){
        printf("%c",ip[i]);
    }
    printf("\n");
}
