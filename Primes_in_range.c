#include<stdio.h>
#include<math.h> 
int main()
{
int a, b,f=0, i, j,c=0;
scanf("%d %d", &a, &b);
for(i=a; i<=b; i++)
{
     if (i!=1)
    {
        for(j=2; j<=sqrt(i); j++)
    { 
        if (i%j==0)
        {
          f=1;
          break;   
        }
    }
if(f==0)
c=c+1;
f=0;
}
}
printf("%d",c);
}