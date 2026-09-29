#include <stdio.h>
#include <math.h>
int main(void)
{
  double principle=1000;
double rate=0.05;
printf("%3s%21s\n","year","Amount on deposit");
for(int year = 1;year<=5;year++)
{
double amount = priniple * pow(1.0 + rate,year);
printf("%4d%21.2f\n",year,amount);
}
return 0;
}
