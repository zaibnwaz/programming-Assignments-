#include <stdio.h>  
int main()  
{  
float a,b,c;
printf("Enter The Num 1  ");
scanf("%f",&a);
printf("Enter The Num 2  ");
scanf("%f",&b);
printf("\n\nFor Sum Press 1\nFor Subtraction Press 2\nFor Multiplication Press 3\nFor Division Press 4\n\n");
scanf("%f",&c);

if (c==1)
{
printf("The Sum Of %f and %f is %f",a,b,a+b);
}
else if (c==2)
{
printf("The Difference of %f and %f is %f",a,b,a-b);
}
else if (c==3)
{
printf("The  Product of %f and %f is %f",a,b,a*b);
}
else if (c==4)
{
printf("The Division Of %f and %f is %f",a,b,a/b);
}
else 
{
printf("Input is NOT Valid");
}
printf("\n\nThis calculator is made by\"Muhammad Ali\" so Thank him");

return 0;
}