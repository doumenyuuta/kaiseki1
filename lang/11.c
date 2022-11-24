#include<stdio.h>
#include<stdlib.h>

int main(void){

int M = 100;

for(int i = 0; i < 10; i++)
	printf("%d\n", rand()% M + 0);

return 0;
}
