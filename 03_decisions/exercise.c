#include <stdio.h>
int main(void)
{
int num1,num2;
printf("Enter num1:");
scanf("%d",&num1);
printf("Enter num2:");
scanf("%d",&num2);
if(num1==num2)
{
printf("\n number1 %d is equal to number2 %d \n",num1,num2);
}
else if(num1!=num2)
{
printf("\n number1 %d is not equal to number2 %d\n",num1,num2);
}
else
{
  printf("\n Number1 and Number2 are invalid \n");
}
return 0;
}
