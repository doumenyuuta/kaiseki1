#include<stdio.h>

double get_x1(double x2, double x3){

  return((10. - x2 - x3) / 5.);

}
double get_x2(double x1, double x3){

return((12.0 - x1 - x3) / 4.);

}

double get_x3(double x1, double x2){

return((13.0 - 2.*x1 - x2) / 3.);

}

int main(){

double x1, x2, x3;
int i = 1;

double a[100];
double b[100];
double c[100];

a[0] = 0;

x1 = x2 = x3 = 1.0;

printf( "round: %2d (%12.10f, %12.10f, %12.10f)\n", 0, x1, x2, x3 );

while(1){

  x1 = get_x1(x2, x3);
  x2 = get_x2(x1, x3);
  x3 = get_x3(x1, x2);

  a[i] = x1;
  b[i] = x2;
  c[i] = x3;

printf("round %d, (%12.15f, %12.15f, %12.15f), %12.15f, %12.15f, %12.15f\n", i, a[i], b[i], c[i],
a[i]-a[i-1], b[i]-b[i-1], c[i]-c[i-1]);

if((((a[i]-a[i-1])*(a[i]-a[i-1]))<0.0000000000000000001) &&
   (((b[i]-b[i-1])*(b[i]-b[i-1]))<0.0000000000000000001) &&
   (((c[i]-c[i-1])*(c[i]-c[i-1]))<0.0000000000000000001)) break;

i++;

}

i++;
x1 = get_x1(x2, x3);
  x2 = get_x2(x1, x3);
  x3 = get_x3(x1, x2);

  a[i] = x1;
  b[i] = x2;
  c[i] = x3;

printf("round %d, (%12.10f, %12.10f, %12.10f), %12.10f, %12.10f, %12.10f\n", i, a[i], b[i], c[i],
a[i]-a[i-1], b[i]-b[i-1], c[i]-c[i-1]);


printf("%d回で収束する\n", i-1);
printf("よってx1 = %12.10f, x2 = %12.10f, x3 = %12.10f\n", a[i-1], b[i-1], c[i-1]);
return 0;

}
