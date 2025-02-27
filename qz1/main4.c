#include <stdio.h>

int main () {
    
    for (int x = 1, y = 1;x <= 9; ){
        printf("%d*%d=%d\t", x, y, x*y);
        y++;
        if (y > 9){
        x++;
        y = 1;
        printf("\n");
        }
    }
    return 0;
    
}
