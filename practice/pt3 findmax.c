#include <stdio.h>
#include <string.h>

int find_max(int narr[], int sizeof_arr){
    int max = -1;
    for(int i = 0; i < sizeof_arr; i++){
        if(narr[i] > max){
            max = narr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {10,9,1,11,3,6,88,4,5,8,18};
    int max = -1;
    int sizeof_arr = sizeof(arr)/sizeof(int);
    max = find_max(arr, sizeof_arr);
    printf("max is :%d", max);
}
