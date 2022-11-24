#include<stdio.h>
#include<ctype.h>

int main(void) {

  int i = 0;
  char moji[999999];

  int alp[28];

  printf("Please write words\n");
  scanf("%[^\n]%*c", moji);

    while(moji[i]!='\0'){

      //printf("%d\n", moji[i]);
    

              if(moji[i] == 97 || moji[i] == 65) alp[0] += 1; //aA
		if(moji[i] == 98 || moji[i] == 66) alp[1] += 1; //bB
		if(moji[i] == 99 || moji[i] == 67) alp[2] += 1; //cC
		if(moji[i] == 100 || moji[i] == 68) alp[3] += 1; //dD
		if(moji[i] == 101 || moji[i] == 69) alp[4] += 1; //eE
		if(moji[i] == 102 || moji[i] == 70) alp[5] += 1; //fF
		if(moji[i] == 103 || moji[i] == 71) alp[6] += 1; //gG
		if(moji[i] == 104 || moji[i] == 72) alp[7] += 1; //hH
		if(moji[i] == 105 || moji[i] == 73) alp[8] += 1; //iI
		if(moji[i] == 106 || moji[i] == 74) alp[9] += 1; //jJ
		if(moji[i] == 107 || moji[i] == 75) alp[10] += 1; //kK
		if(moji[i] == 108 || moji[i] == 76) alp[11] += 1; //lL
		if(moji[i] == 109 || moji[i] == 77) alp[12] += 1; //mM
		if(moji[i] == 110 || moji[i] == 78) alp[13] += 1; //nN
		if(moji[i] == 111 || moji[i] == 79) alp[14] += 1; //oO
		if(moji[i] == 112 || moji[i] == 80) alp[15] += 1; //pP
		if(moji[i] == 113 || moji[i] == 81) alp[16] += 1; //qQ
		if(moji[i] == 114 || moji[i] == 82) alp[17] += 1; //rR
		if(moji[i] == 115 || moji[i] == 83) alp[18] += 1; //sS
		if(moji[i] == 116 || moji[i] == 84) alp[19] += 1; //tT
		if(moji[i] == 117 || moji[i] == 85) alp[20] += 1; //uU
		if(moji[i] == 118 || moji[i] == 86) alp[21] += 1; //vV
		if(moji[i] == 119 || moji[i] == 87) alp[22] += 1; //wW
		if(moji[i] == 120 || moji[i] == 88) alp[23] += 1; //xX
		if(moji[i] == 121 || moji[i] == 89) alp[24] += 1; //yY
		if(moji[i] == 122 || moji[i] == 90) alp[25] += 1; //zZ
		if(moji[i] == 32) alp[26] += 1;
		//else alp[27] += 1;

        i++;  

    }

    //printf("%sは%d字です\n", moji, i);
 
	printf("aは%d回\n", alp[0]);
	printf("bは%d回\n", alp[1]);
	printf("cは%d回\n", alp[2]);
	printf("dは%d回\n", alp[3]);
	printf("eは%d回\n", alp[4]);
	printf("fは%d回\n", alp[5]);
	printf("gは%d回\n", alp[6]);
	printf("hは%d回\n", alp[7]);
	printf("iは%d回\n", alp[8]);
	printf("jは%d回\n", alp[9]);
	printf("kは%d回\n", alp[10]);
	printf("lは%d回\n", alp[11]);
	printf("mは%d回\n", alp[12]);
	printf("nは%d回\n", alp[13]);
	printf("oは%d回\n", alp[14]);
	printf("pは%d回\n", alp[15]);
	printf("qは%d回\n", alp[16]);
	printf("rは%d回\n", alp[17]);
       printf("sは%d回\n", alp[18]);
	printf("tは%d回\n", alp[19]);
	printf("uは%d回\n", alp[20]);
	printf("vは%d回\n", alp[21]);
	printf("wは%d回\n", alp[22]);
	printf("xは%d回\n", alp[23]);
	printf("yは%d回\n", alp[24]);
	printf("zは%d回\n", alp[25]);
	printf(" は%d回\n", alp[26]);
	//printf("その他%d回\n", alp[27]);    

return 0;
}
