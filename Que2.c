//function to calculate sum of n natural numbers
#include<stdio.h>
int sumnumbers(int sum);
int sum=0;
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    sum=sumnumbers(num);
    printf("the sum of the %d even numbers is %d",num,sum);
}


int sumnumbers(int n)
{
    if(n>=1)
    {
        sum=sum+(n*2);
        sumnumbers(n-1);
    }
    else
    return sum;
}