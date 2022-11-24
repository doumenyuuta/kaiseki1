#include <stdio.h>

 

int main(void)

{

    char moji[99999];

	int i = 0;

    //int num;

    FILE *fp;
 

    fp = fopen("English.txt","rb");

 

    //書式指定で読み込み

    fscanf(fp,"%[^\n]%*c", moji);

	while(moji[i] != '\0'){

	printf("%d\n", moji[i]);

	i++;

	}
 

    //文字列表示

    puts(moji);

 

    //数字表示

    //printf("%d\n",num);

 

    fclose(fp);

     

    return 0;

}

