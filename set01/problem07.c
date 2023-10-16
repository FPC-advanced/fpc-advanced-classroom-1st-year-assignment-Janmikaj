//Write a C program to find sum of all natural numbers until n
#include <stdio.h>
int input();
int sum_n_nos(int n);
void sum(int n, int sum);
int main()
{
    int n,sum;
    n=input();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}
int input()
{
    int x;
    printf("Enter the value\n");
    scanf("%d",&x);
    return x;
}
int sum_n_nos(int n)
{
    int sum=0;
    int i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum of of natural numbers till %d is %d",n, sum);
}

