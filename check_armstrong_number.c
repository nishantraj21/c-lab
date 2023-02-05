#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a,x=0,sum=0,b,c,d,e;
    printf("Enter a number to check armstrong or not: ");
    scanf("%d",&n);
    for(i=1; ;i=10*i)
    {
        if(n/i!=0)
        {
            x++;
        }
        else
        break;
    }
    printf("size of number is %d\n", x);
    for(i=1;i<=x;i++)
    {
    	a=pow(10,i);
    	b=n%a;
    	c=pow(10,i-1);
    	d=b/c;
    	e=pow(d,x);
    	sum=sum+e;
	}
	if(sum==n)
	{
		printf("It is armstrong number");
	}
	else
	{
		printf("It is not a armstrong number");
	}
    return 0;
}
