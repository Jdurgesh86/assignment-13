#include<stdio.h>
int power(int po,int n);
int count=0;
int main()
{
    int num,p;
    printf("Enter the power and number ");
    scanf("%d%d",&p,&num);
    printf("The %d power of  %d is %d",p,num,power(p,num));
}
int ans=1;
int power(int po,int n)
{
    if(po>=1)
    {
        ans=n*ans;
        power(po-1,n);
    }
    return ans;
}