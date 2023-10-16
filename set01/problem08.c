//Write a C program to find sum of n different numbers entered by the user.
#include <stdio.h>
int get_array_size();
void get_array_values(int n, int a[n]);
int find_sum_array(int n, int a[n], int sum);
void output(int sum);
int main()
{
    int n,i=0, sum=0;
    n=get_array_size();
    int a[n];
    get_array_values(n,a);
    sum=find_sum_array(n,a,sum);
    output(sum);     
    return 0;
}
int get_array_size()
{
    int n;
    printf("The size of array is ");
    scanf("%d",&n);
    return n;
}
void get_array_values(int n, int a[n])
{
    int i=0;
    for(i=0;i<n;i++)
    {
       printf("Enter the array values\n");
       scanf("%d",&a[i]);
    }
}
int find_sum_array(int n, int a[n], int sum)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int sum)
{
    printf("The array sum is %d",sum);
}
