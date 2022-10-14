#include<stdio.h>
int count(int n)
{
    int sum=0;
    if(n%10==2 || n%10==3 || n%10==9)
    {
        sum++;
    }
    if(sum==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,coun=0,j,i,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(count(j))
            {
                coun++;
            }
        }
        printf("%d
",coun);
        coun=0;
    }
}