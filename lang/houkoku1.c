#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(void) {
	FILE *fp; // FILE型構造体
	char fname[] = "English.txt";
	int i = 0;
	char moji[999999];//1文字1文字の配列
	fp = fopen(fname, "r"); // ファイルを開く。

	for(i = 0; ((moji[i] = fgetc(fp)) != EOF); i++) {

		if(isalpha(moji[i])){
			putchar(moji[i]);
		}

		else if(moji[i] == 10){
		moji[i] = 10;
		putchar(moji[i]);
		}

		else{
			moji[i] = 32;
			putchar(moji[i]);
		}

	}
	
return 0;

}












