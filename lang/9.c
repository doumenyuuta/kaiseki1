#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(void) {
	FILE *fp; // FILE型構造体
	char fname[] = "English.txt";
	int i = 0;
	float moji[999999];//1文字1文字の配列

	float alp[26];
	float pro[26];
	int speace;

	char salp[] = {'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K'
			, 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X' , 'Y', 'Z', ' '};
	int j, l, k, tmp, stmp; 
 int p = 0;
	fp = fopen(fname, "r"); // ファイルを開く。

	for(i = 0; ((moji[i] = fgetc(fp)) != EOF); i++) {

		if(isalpha(moji[i])){
			if(moji[i] == 'A' || moji[i] == 'a') alp[0] +=1;
			if(moji[i] == 'B' || moji[i] == 'b') alp[1] +=1;
			if(moji[i] == 'C' || moji[i] == 'c') alp[2] +=1;
			if(moji[i] == 'D' || moji[i] == 'd') alp[3] +=1;
			if(moji[i] == 'E' || moji[i] == 'e') alp[4] +=1;
			if(moji[i] == 'F' || moji[i] == 'f') alp[5] +=1;
			if(moji[i] == 'G' || moji[i] == 'g') alp[6] +=1;
			if(moji[i] == 'H' || moji[i] == 'h') alp[7] +=1;
			if(moji[i] == 'I' || moji[i] == 'i') alp[8] +=1;
			if(moji[i] == 'J' || moji[i] == 'j') alp[9] +=1;
			if(moji[i] == 'K' || moji[i] == 'k') alp[10] +=1;
			if(moji[i] == 'L' || moji[i] == 'l') alp[11] +=1;
			if(moji[i] == 'M' || moji[i] == 'm') alp[12] +=1;
			if(moji[i] == 'N' || moji[i] == 'n') alp[13] +=1;
			if(moji[i] == 'O' || moji[i] == 'o') alp[14] +=1;
			if(moji[i] == 'P' || moji[i] == 'p') alp[15] +=1;
			if(moji[i] == 'Q' || moji[i] == 'q') alp[16] +=1;
			if(moji[i] == 'R' || moji[i] == 'r') alp[17] +=1;
			if(moji[i] == 'S' || moji[i] == 's') alp[18] +=1;
			if(moji[i] == 'T' || moji[i] == 't') alp[19] +=1;
			if(moji[i] == 'U' || moji[i] == 'u') alp[20] +=1;
			if(moji[i] == 'V' || moji[i] == 'v') alp[21] +=1;
			if(moji[i] == 'W' || moji[i] == 'w') alp[22] +=1;
			if(moji[i] == 'X' || moji[i] == 'x') alp[23] +=1;
			if(moji[i] == 'Y' || moji[i] == 'y') alp[24] +=1;
			if(moji[i] == 'Z' || moji[i] == 'z') alp[25] +=1;
			
		}
		else if(moji[i] == 10){
		moji[i] = 10;
		//putchar(moji[i]);
		}
		else{
			moji[i] = 32; alp[26]++;
			//putchar(moji[i]);
		}

	}

for(j = 0; j <= 26; j++){
	for(l = j + 1; l <= 26; l++){

		if(alp[j] < alp[l]){
		tmp = alp[j];
		stmp = salp[j];

		alp[j] = alp[l];
		salp[j] = salp[l];

		alp[l] = tmp;
		salp[l] = stmp;
		}

	}
}

for(p = 0; p <=26; p++)
	pro[p] = (alp[p] / i)*100;

for(k = 0; k <= 26; k++)
	printf("%c = %.0f   %f%% \n", salp[k],alp[k], pro[k]);

printf("\ntotal words(include speace)=%d\n", i);

return 0;

}

























