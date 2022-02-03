#include<stdio.h>

void main()
{
  int sum;
printf("finding sum of two numbers"); 
int num1,num2;
printf("Enter two numbers");
scanf("%d%d",&num1,&num2);
sum=add(num1,num2);
printf("%d The sum is",sum);
}
 int add(int num1,int num2)
{
int sum;
sum=num1+num2; 
return sum;
}