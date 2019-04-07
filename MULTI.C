#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,a;
 clrscr();
 printf("\nEnter Number:");
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
  a=i*n;
  printf("\n%d*%d=%d",n,i,a);
  }
  getch();
  }