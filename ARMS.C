#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,Sum=0,r=0;
clrscr();
printf("Enter the Number: ");
scanf("%d",&n);
num=n;
while(n>0)
{
r=n%10;
Sum=Sum+(r*r*r);
n=n/10;
}
if(Sum==num)
{ printf("Number is Armstrong");
}
else
 { printf("Number is Not Armstrong");
 }
 getch();
 }