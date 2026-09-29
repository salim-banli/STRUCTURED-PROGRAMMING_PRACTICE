#include <stdio.h>
int main()
{
  int x,y,z;
printf("Enter an integar from 1 to 10:");
scanf("%d",&x);
for(y=1;y<=x;y++)
{
for(z=1;z<=x;z++)
{
if(y==z)
printf("@");
else
  printf("");
}
printf("\n");
}
return 0;
}
