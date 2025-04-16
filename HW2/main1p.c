#include <stdio.h>
#include <stdlib.h>

void generate_lotto_numbers(int lotto[], int size) {
    int used[70] = {0};  
    int i = 0;

    while (i < size) {  
        int num = rand() % 69 + 1;  
        if (used[num] == 0) {  
            used[num] = 1;
            lotto[i] = num;
            i++;  
        }
    }
}

int main() {
    int N;
    FILE *file = fopen("lotto.txt", "w");  

    if (!file) {
        return 1;  
    }

    scanf("%d", &N);  
    srand(1);  

    fprintf(file, "========= lotto649 =========\n");   //注意!!!!!fprintf(FILE *stream, const char *format, ...);檔案放在前
                                                       //        fwrite(const void *ptr, size_t size, size_t count, FILE *stream);檔案放在後
        fprintf(file, "[%d]: ", i + 1);
        if (i < N) {  
            int lotto[7];
            generate_lotto_numbers(lotto, 7);
            for (int j = 0; j < 7; j++) {
                if(j < 6){
                    fprintf(file, "%02d ", lotto[j]);
                }
                else {
                    fprintf(file, "%02d", lotto[j]);
                }  
            }
        } else {
            fprintf(file, "__ __ __ __ __ __ __");  
        }
        fprintf(file, "\n");
    }
    fprintf(file, "========= csie@CGU =========\n");

    fclose(file);  
    return 0;
}

