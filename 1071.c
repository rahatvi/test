#include<stdio.h>
int main()
{
    int a,b,i,j,sum=0;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        for(i=b+1;i<a;i++)
        {
            if(i%2 !=0)
            sum=sum+i;
        }
    }

    else if(b>a)
    {
        for(j=a+1;j<b;j++)
        {
            if(j%2 !=0)
            sum=sum+j;
        }
    }

    printf("%d\n",sum);
}
