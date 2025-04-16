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

towerOfHanoi(3, A, C, B)
├── towerOfHanoi(2, A, B, C)
│   ├── towerOfHanoi(1, A, C, B)
│   │     → print "Move disk 1 from A to C"   ←【return 回到上層】
│   └── print "Move disk 2 from A to B"
│   └── towerOfHanoi(1, C, B, A)
│         → print "Move disk 1 from C to B"   ←【return 回到上層】
├── print "Move disk 3 from A to C"
├── towerOfHanoi(2, B, C, A)
│   ├── towerOfHanoi(1, B, A, C)
│   │     → print "Move disk 1 from B to A"   ←【return 回到上層】
│   └── print "Move disk 2 from B to C"
│   └── towerOfHanoi(1, A, C, B)
│         → print "Move disk 1 from A to C"   ←【return 回到上層】
