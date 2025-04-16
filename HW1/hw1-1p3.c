#include <stdio.h>
#include <string.h>

int main() {
    char ipt[100];
    scanf("%s",ipt);
    int count = 1;
    
    int soa = strlen(ipt);
    
    for(int i = 0; i < soa; i++){
        if(ipt[i] == ipt[i + 1]){
            count++;    
        }
        else{
            printf("%c%d", ipt[i], count);
            count = 1;
        }
    }
}
