#include <stdio.h>
#include <string.h>

int str_cmp(char a[], char b[], int sizeof_arr_a){
    int eq = 1;
    for(int i = 0, j = 0; i < sizeof_arr_a; i++, j++) {
        if(a[i] != b[j]){
            eq = 0;
            break;
        }
    }
    return eq;
}

int main(){
    char a[] = "hello";
    char b[] = "hell0";
    int ot;
    int sizeof_arr_a = sizeof(a)/sizeof(char);
    ot = str_cmp(a, b, sizeof_arr_a);
    if(ot == 1){
        printf("%s == %s", a, b);
    }
    else{
        printf("%s != %s", a, b);
    }
    
}
