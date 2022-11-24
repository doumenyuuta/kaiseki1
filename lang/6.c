#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
	FILE *fp; // FILE型構造体
	char fname[] = "English.txt";
	int chr;
  int i = 0;
  int moji[999999];
  int alp[28];
  float a = 0; // アルファベット文字のみ
  float pro[28];
int b;
 
	fp = fopen(fname, "r"); // ファイルを開く。失敗するとNULLを返す。
/*	if(fp == NULL) {
		printf("%s file not open!\n", fname);
		return -1;
	}
*/
	while((moji[i] = fgetc(fp)) != EOF) {

  
//if(moji[i] >= 65 && 90 <= moji[i])
if((33 <= moji[i]) && (moji[i] <= 47))
    {moji[i] = 32; alp[26]--;}
if((58 <= moji[i]) && (moji[i] <= 64))
    {moji[i] = 32; alp[26]--;}
if((91 <= moji[i]) && (moji[i] <= 96))
    {moji[i] = 32; alp[26]--;}
if((123 <= moji[i]) && (moji[i] <= 126))
    {moji[i] = 32; alp[26]--;} 

    //putchar(moji[i]);

       if(moji[i] == 97 || moji[i] == 65) {alp[0] += 1, a += 1;} //aA
	if(moji[i] == 98 || moji[i] == 66) {alp[1] += 1, a += 1;} //bB
	if(moji[i] == 99 || moji[i] == 67) {alp[2] += 1, a += 1;} //cC
	if(moji[i] == 100 || moji[i] == 68) {alp[3] += 1, a += 1;} //dD
	if(moji[i] == 101 || moji[i] == 69) {alp[4] += 1, a += 1;} //eE
	if(moji[i] == 102 || moji[i] == 70) {alp[5] += 1, a += 1;} //fF
	if(moji[i] == 103 || moji[i] == 71) {alp[6] += 1, a += 1;} //gG
	if(moji[i] == 104 || moji[i] == 72) {alp[7] += 1, a += 1;} //hH
	if(moji[i] == 105 || moji[i] == 73) {alp[8] += 1, a += 1;} //iI
	if(moji[i] == 106 || moji[i] == 74) {alp[9] += 1, a += 1;} //jJ
	if(moji[i] == 107 || moji[i] == 75) {alp[10] += 1, a += 1;} //kK
	if(moji[i] == 108 || moji[i] == 76) {alp[11] += 1, a += 1;} //lL
	if(moji[i] == 109 || moji[i] == 77) {alp[12] += 1, a += 1;} //mM
	if(moji[i] == 110 || moji[i] == 78) {alp[13] += 1, a += 1;} //nN
	if(moji[i] == 111 || moji[i] == 79) {alp[14] += 1, a += 1;} //oO
	if(moji[i] == 112 || moji[i] == 80) {alp[15] += 1, a += 1;} //pP
	if(moji[i] == 113 || moji[i] == 81) {alp[16] += 1, a += 1;} //qQ
	if(moji[i] == 114 || moji[i] == 82) {alp[17] += 1, a += 1;} //rR
	if(moji[i] == 115 || moji[i] == 83) {alp[18] += 1, a += 1;} //sS
	if(moji[i] == 116 || moji[i] == 84) {alp[19] += 1, a += 1;} //tT
	if(moji[i] == 117 || moji[i] == 85) {alp[20] += 1, a += 1;} //uU
	if(moji[i] == 118 || moji[i] == 86) {alp[21] += 1, a += 1;} //vV
	if(moji[i] == 119 || moji[i] == 87) {alp[22] += 1, a += 1;} //wW
	if(moji[i] == 120 || moji[i] == 88) {alp[23] += 1, a += 1;} //xX
	if(moji[i] == 121 || moji[i] == 89) {alp[24] += 1, a += 1;} //yY
	if(moji[i] == 122 || moji[i] == 90) {alp[25] += 1, a += 1;} //zZ
	if(moji[i] == 32) alp[26] += 1;


i++;
	}

	//pro[0] = (alp[0] / (a + alp[26]))*100 ;
	for(int j = 0; j <= 26; j++){

		pro[j] = (alp[j] / (a + alp[26]))*100 ;
                  b += alp[j];

}


	printf("aは%d回  probability %f\n", alp[0], pro[0]);
	printf("bは%d回                  %f\n", alp[1], pro[1]);
	printf("cは%d回                  %f\n", alp[2], pro[2]);
	printf("dは%d回                  %f\n", alp[3], pro[3]);
	printf("eは%d回                  %f\n", alp[4], pro[4]);
	printf("fは%d回                  %f\n", alp[5], pro[5]);
	printf("gは%d回                  %f\n", alp[6], pro[6]);
	printf("hは%d回                  %f\n", alp[7], pro[7]);
	printf("iは%d回                  %f\n", alp[8], pro[8]);
	printf("jは%d回                  %f\n", alp[9], pro[9]);
	printf("kは%d回                  %f\n", alp[10], pro[10]);
	printf("lは%d回                  %f\n", alp[11], pro[11]);
	printf("mは%d回                  %f\n", alp[12], pro[12]);
	printf("nは%d回                  %f\n", alp[13], pro[13]);
	printf("oは%d回                  %f\n", alp[14], pro[14]);
	printf("pは%d回                  %f\n", alp[15], pro[15]);
	printf("qは%d回                  %f\n", alp[16], pro[16]);
	printf("rは%d回                  %f\n", alp[17], pro[17]);
       printf("sは%d回                  %f\n", alp[18], pro[18]);
	printf("tは%d回                  %f\n", alp[19], pro[19]);
	printf("uは%d回                  %f\n", alp[20], pro[20]);
	printf("vは%d回                  %f\n", alp[21], pro[21]);
	printf("wは%d回                  %f\n", alp[22], pro[22]);
	printf("xは%d回                  %f\n", alp[23], pro[23]);
	printf("yは%d回                  %f\n", alp[24], pro[24]);
	printf("zは%d回                  %f\n", alp[25], pro[25]);
	printf("(speace) は%d回        %f\n", alp[26], pro[26]);
  printf("toal worda(include speace) = %.0f\n", (a + alp[26]));
     printf("toal words = %.0f\n", a);
printf("%d", b);
	//fclose(fp); // ファイルを閉じる
printf("all total %d", i);
 
	return 0;
}
