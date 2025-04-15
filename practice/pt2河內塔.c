#include <stdio.h>

void towerOfHanoi(int n,char from, char to, char aux ){ //from出發點 to 目的地 aux作為暫存
    if (n == 1){
        printf("\n Move disk 1 form rod %c to rod %c", from, to);
        return;
    }
    towerOfHanoi(n - 1, from, aux, to); //移n-1環,從出發點到暫存區
    printf("\n Move disk %d form rod %c to rod %c", n, from, to); // 移最大環
    towerOfHanoi(n-1, aux, to, from); // 移n-1環,從暫存區到目的地
}
    
int main()
{
    int n = 3;
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
