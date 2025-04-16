#include <stdio.h>

int main(){
    FILE* originalF = fopen("main.c","r");
    FILE* copyF = fopen("main.txt","w");
    char c[200];
    while(fgets(c, sizeof(c), originalF) != NULL){   //fgets – 讀取一整行字串（文字檔） fgets(char *str, int n, FILE *stream)
        fprintf(copyF,"%s",c);
    }
    fclose(originalF);
    fclose(copyF);
}



fgets; – 讀取一整行字串（文字檔）  fgets(char *str, int n, FILE *stream);
char line[100];
fgets(line陣列, sizeof(line), fp檔案);
fprintf; – 寫入文字（格式化）     fprintf(FILE *stream, const char *format, ...);
fprintf(fp !!!檔案放在前面較特殊, "Name: %s, Age: %d\n", name, age);


fread; – 讀取資料（binary）      fread(void *ptr, size_t size, size_t count, FILE *stream);
fread(data #待存取陣列 , sizeof(int), 1, fp檔案);
fwrite; – 寫入資料（binary       fwrite(const void *ptr, size_t size, size_t count, FILE *stream);  
fwrite(num #輸出的陣列, sizeof(int), 1, fp檔案);
