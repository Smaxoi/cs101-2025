#include <stdio.h>

void str_cpy(char a[], char b[], int len){
    for(int i = 0; i < len; i++){
        b[i] = a[i];
    }
    b[len] = 0;
    return;
}

int main() {
    char a[] = "abcdef";
    int len = sizeof(a)/sizeof(char);
    char b[len];
    str_cpy(a, b, len);
    printf("a = %s , b = %s", a, b);
 
}
