#include <stdio.h>
int main(void)
{
  int first_count=1;
while (first_count <= 10)
  { int second_count=1;
while (second_count<=first_count)
{
printf("*  ");
  second_count++;
}
printf("\n");
first_count++;
}
return 0;
}
