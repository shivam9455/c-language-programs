#include<stdio.h>
#include<math.h>
float numerator(float,int);
float denominator (int);
int main()
{
    float x,n,d,term ,sum,oldsum;
    int i,j;
    printf("Enter a  number\n");
    scanf("%d",&x);
    i=j=1;
    sum=0;
    while(1)
    {
        n=numerator(x,j);
        d=denominator(j);
        term=n/d;
        oldsum=sum;
        (i%2==0)?sum=sum-term:(sum=sum+term);
        break;
        j++;
        j+=2;
    }
    printf("sum=%f\n",sum);
    return 0;
}
//calculate power
float numerator(float y,int j)
{
    float k=1;
    int m;
    for(m=1;m<=j;m++)
        k*=y;
    return (k);
}
//calculate factorial
float denominator(int j)
{
    int m;
    float h=1;
    for(m=1; m<=j; m++)
        h=h*m;
    return 0;
}
