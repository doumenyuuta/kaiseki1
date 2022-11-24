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
	while((moji[i] = fgetc(fp)) != EOF) {

  
//if(moji[i] >= 65 && 90 <= moji[i])
if((33 <= moji[i]) && (moji[i] <= 47))
    moji[i] = 32; 
if((58 <= moji[i]) && (moji[i] <= 64))
    moji[i] = 32; 
if((91 <= moji[i]) && (moji[i] <= 96))
    moji[i] = 32; 
if((123 <= moji[i]) && (moji[i] <= 126))
    moji[i] = 32; 

    putchar(moji[i]);

///if(moji[i] >= 97 && 122 <= moji[i])

   /// putchar(moji[i]);
		//putchar(chr);
  //moji[i] = chr;
  
//printf("%d ", moji[i]);
i++;
	}
 
  
  
	fclose(fp); // ファイルを閉じる
 
	return 0;
}
