#include<stdio.h>
int sumdigits(int n);
int sum=0;
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("The sum of the digits of a number is %d",sumdigits(num));
}
int sumdigits(int n)
{
    if(n>=1)
    {
        int last=n%10;
        sum=sum+last;
        sumdigits(n/10);
    }
    return sum;
}