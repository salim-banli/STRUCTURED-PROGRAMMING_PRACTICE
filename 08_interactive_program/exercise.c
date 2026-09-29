#include <stdio.h>
int main(void)
{
int aCount=0;
int bCount=0;
  printf("Enter the letter grades:");
printf("Enter the EOF characterto end input:");
int grade =0;
while((grade = getchar())!=EOF)
{
switch(grade)
{
case "A":
case "a":
++aCount;
break;
case "B":
case "b":
++bCount;
break;
  default;
  printf("Incorrect grade letter entered \n");
  puts("Enter correct grade:");
  break;
   }
}
puts("\n Total of each grade letter are:");
printf("A: %d\n",aCount);
printf("B: %d\n",bCount);
  return 0;
}


