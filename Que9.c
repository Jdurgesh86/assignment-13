#include<stdio.h>
int numberdigits(int n);
int count=0;
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("The number of the digits in a %d  number is %d",num,numberdigits(num));
}
int numberdigits(int n)
{
    if(n>=1)
    {
        count++;
        numberdigits(n/10);
    }
    return count;
}