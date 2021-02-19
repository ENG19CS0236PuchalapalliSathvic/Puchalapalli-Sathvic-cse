//Write a program to find the sum of n different numbers using 4 functions

#include<stdio.h>
int input()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
return num;
}
int compute(int n,int num[n] )
{
int i;
int sum = 0;
for(int i=0;i<n;i++)
{
printf("enter %d numbers\n",i);
scanf("%d",&num[i]);
sum = sum + num[i];
}
return sum;
}
void output(int sum)
{
printf("The sum is %d",sum);
}
int main()
{
int n,sum;
n = input();
int num[n];
sum = compute(n, num);
output(sum);
return 0;
}
