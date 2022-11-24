#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(void) {
	FILE *fp; // FILE型構造体
	char fname[] = "English.txt";
	int i = 0;
	float moji[999999];//1文字1文字の配列		
	int M;//アルファベットの個数とスペースの個数の総数
	fp = fopen(fname, "r"); // ファイルを開く。

	char talp[999999];int s;//第1近似で表示するために用いる配列

	for(i = 0; ((moji[i] = fgetc(fp)) != EOF); i++) {

	if(isalpha(moji[i])){
		if(moji[i] == 'a') moji[i] = 'A'; 
		if(moji[i] == 'b') moji[i] = 'B'; 
		if(moji[i] == 'c') moji[i] = 'C'; 
		if(moji[i] == 'd') moji[i] = 'D'; 
		if(moji[i] == 'e') moji[i] = 'E'; 
		if(moji[i] == 'f') moji[i] = 'F';
		if(moji[i] == 'g') moji[i] = 'G';
		if(moji[i] == 'h') moji[i] = 'H'; 
		if(moji[i] == 'i') moji[i] = 'I';
		if(moji[i] == 'j') moji[i] = 'J';
		if(moji[i] == 'k') moji[i] = 'K'; 
		if(moji[i] == 'l') moji[i] = 'L';
		if(moji[i] == 'm') moji[i] = 'M'; 
		if(moji[i] == 'n') moji[i] = 'N';
		if(moji[i] == 'o') moji[i] = 'O';
		if(moji[i] == 'p') moji[i] = 'P';
		if(moji[i] == 'q') moji[i] = 'Q';
		if(moji[i] == 'r') moji[i] = 'R';
		if(moji[i] == 's') moji[i] = 'S';
		if(moji[i] == 't') moji[i] = 'T';
		if(moji[i] == 'u') moji[i] = 'U';
		if(moji[i] == 'v') moji[i] = 'V';
		if(moji[i] == 'w') moji[i] = 'W';
		if(moji[i] == 'x') moji[i] = 'X';
		if(moji[i] == 'y') moji[i] = 'Y';
		if(moji[i] == 'z') moji[i] = 'Z';

		M++;
		talp[M] = moji[i];
		}
		else if(moji[i] == 32) {
			M++; talp[M] = moji[i];
		}
		
}
	printf("\n\n");
for(int j = 0; j < 100; j++) putchar(talp[rand()%M+0]);
	printf("\n\n\n");

return 0;
}

























