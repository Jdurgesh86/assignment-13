#include<stdio.h>
int fibonacci(int n);
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    fibonacci(num);
}
int num1=-1,num2=1,result;
int fibonacci(int n)
{
    if(n>=1)
    {
        result=num1+num2;
        printf("%d ",result);
        num1=num2;
        num2=result;
    }
    fibonacci(n-1);
}