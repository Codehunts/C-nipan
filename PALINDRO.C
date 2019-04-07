#include<stdio.h>
#include<conio.h>
void main()
{
 int n,rev=0,rem=0,num;
 clrscr();
 printf("Enter Number: ");
 scanf("%d",&n);
 num=n;
 while(n>0)
 {
 rem=n%10;
 rev=(rev*10)+rem;
 n=n/10;
 }
 if
  (num==rev)
  { printf("Palindrome");
  }
  else
  {
   printf("Not Palindrome");
   }
   getch();
   }