/*Arithmetic operation*/
#include<stdio.h>

int main()
{
int a,b,add,sub,mul,div,rem;
printf("enter a,b value\n");
scanf("%d,%d",&a,&b);
add=a+b; //addition;
sub=a-b; //subtraction;
mul=a*b ; //multiplication;
div=a/b; //division;
rem=a%b; //remainder;
printf("result of addition is=%d\n",add);
printf("result of subtraction is=%d\n",sub);
printf("result of multiplication is=%d\n",mul);
printf("result of division is=%d\n,",div);
printf("result of remainder is=%d\n", rem);
}
