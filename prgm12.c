#include<stdio.h>
#include<conio.h)
void main()
{
clrscr();
int n,r=0,t;
printf("enter a value");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=r*10;
r=r+t%10;
t=t/10;
}
if(n==r)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
getch();
}
