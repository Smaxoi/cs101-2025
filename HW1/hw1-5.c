#include <stdio.h>

int main()
{
    int x, y;
    int n; //要列印幾行
    scanf("%d", &n);
    
    for(x = 1; x <= n; x++) {
        
        for (y = 1; y <= n; y++) {
            
            if(y <= n - x) {
                printf(" ");
            }
            else if (y == n) {
                printf("%d",x);
            }
            else{
                printf("%d ",x);
            }
            
        }
        
        printf("\n");
    }

    return 0;
}
