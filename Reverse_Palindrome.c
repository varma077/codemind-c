#include<stdio.h>
int rev(int a)
{
    int b,rev=0;
while(a>0)
{
  b=a%10;
  rev=rev*10+b;
  a=a/10;
}
return rev;
}
 int main()
 {
     int x;
     scanf("%d",&x);
     do
     {
         x=x+rev(x);
     }
  
 while(x!=rev(x));
 {
     printf("%d",rev(x));
 }
 }
 