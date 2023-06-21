#include<stdio.h>
int fact(int n);
int facto=1;
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    printf("The factorial of the %d is %d",num,fact(num));
}

int fact(int n)
{
    if(n>=1)
    {
        facto=facto*n;
        fact(n-1);
    }
    return facto;
}