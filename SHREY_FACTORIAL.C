#include<stdio.h>
#include<conio.h>
int main()
{
 int fact =1,n;

 printf("Enter a Number of which you want Factorial:");
 scanf("%d",&n);
 for( int i=1;i<=n;i++)
 {
  fact=fact*i;
 }
 printf("Factorial of Given Number:%d",fact);
 getch();
}
