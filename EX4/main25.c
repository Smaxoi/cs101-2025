#include <stdio.h>

int multi(int i, int j) {
    if(i == 1 && j == 0) {
        return 0;
    }
    else if(j == 0) {
        multi(i - 1, j + 9);
        printf("\n");
    }
    else {
        multi(i, j - 1);
        printf("%d*%d=%d\t", i, j, i * j);
    }
}

int main() {
    multi(9 , 9);

    return 0;
}
