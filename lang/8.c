#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(void) {
	FILE *fp; // FILE型構造体
	char fname[] = "English.txt";
	int i = 0;
	char moji[999999];//1文字1文字の配列

	int alp[26];
	int speace;

 
	fp = fopen(fname, "r"); // ファイルを開く。

	for(i = 0; ((moji[i] = fgetc(fp)) != EOF); i++) {

		if(isalpha(moji[i])){
			//putchar(moji[i]);
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
			moji[i] = 32; speace++;
			//putchar(moji[i]);
		}

	}
 
  printf("\ntotal words(include speace)=%d\n", i);
  printf("A and a = %d\n", alp[0]);
  printf("B and b = %d\n", alp[1]);
  printf("C and c = %d\n", alp[2]);
  printf("D and d = %d\n", alp[3]);
  printf("E and e = %d\n", alp[4]);
  printf("F and f = %d\n", alp[5]);
  printf("G and g = %d\n", alp[6]);
  printf("H and h = %d\n", alp[7]);
  printf("I and i = %d\n", alp[8]);
  printf("J and j = %d\n", alp[9]);
  printf("K and k = %d\n", alp[10]);
  printf("L and l = %d\n", alp[11]);
  printf("M and m = %d\n", alp[12]);
  printf("N and n = %d\n", alp[13]);
  printf("O and o = %d\n", alp[14]);
  printf("P and p = %d\n", alp[15]);
  printf("Q and q = %d\n", alp[16]);
  printf("R and r = %d\n", alp[17]);
  printf("S and s = %d\n", alp[18]);
  printf("T and t = %d\n", alp[19]);
  printf("U and u = %d\n", alp[20]);
  printf("V and v = %d\n", alp[21]);
  printf("W and w = %d\n", alp[22]);
  printf("X and x = %d\n", alp[23]);
  printf("Y and y = %d\n", alp[24]);
  printf("Z and z = %d\n", alp[25]);
  printf("(speace) = %d\n", speace);
	
return 0;
}
