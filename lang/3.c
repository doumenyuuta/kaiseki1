#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
	FILE *fp; // FILE型構造体
	char fname[] = "English.txt";
	int chr;
  int i = 0;
  int moji[99999];

 
	fp = fopen(fname, "r"); // ファイルを開く。失敗するとNULLを返す。
/*	if(fp == NULL) {
		printf("%s file not open!\n", fname);
		return -1;
	}
*/
	while((chr = fgetc(fp)) != EOF) {
		putchar(chr);
  moji[i] = chr;
  
printf("%d", moji[i]);
i++;
	}
 
  
  
	fclose(fp); // ファイルを閉じる
 
	return 0;
}
