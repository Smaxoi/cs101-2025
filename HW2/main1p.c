#include #include <stdio.h>
#include <stdlib.h>

void lotto_generater(int lotto[], int size){
    int i = 0;
    int used[70] = {0};
    while(i < size){
        int num = rand() % 69 + 1;
        if(used[num] == 0){
            used[num] = 1;
            lotto[i] = num;
            i++;
        }
    }
}

//注意!!!!! fprintf(FILE *stream, const char *format, ...);檔案放在前
//          fwrite(const void *ptr, size_t size, size_t count, FILE *stream);檔案放在後
int main() {
    int N;
    int lotto[7];
    FILE* file = fopen("lotto.txt","w+");
    scanf("%d",&N);
    fprintf(file, "========= lotto649 =========\n");
    for(int i = 1; i <= 5; i++){
        fprintf(file,"[%d]: ", i);
        if(i <= N){
            lotto_generater(lotto, 7);
            for(int j = 0; j < 7; j++){
                fprintf(file,"%02d ",lotto[j]); //%02d 注意! 他會從6 變06 12變12 為多兩位數空位補0
            }
            fprintf(file, "\n");
        }
        else{
            fprintf(file,"__ __ __ __ __ __ __\n");
        }
    }
    fprintf(file,"========= csie@CGU =========\n");
    fclose(file);
    
}
