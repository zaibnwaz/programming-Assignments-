#include <stdio.h>  
int main()  
{  
int a,b,c;
printf("Enter The Num 1  ");
scanf("%d",&a);
printf("Enter The Num 2  ");
scanf("%d",&b);
printf("\n\nFor Sum Press 1\nFor Subtraction Press 2\nFor Multiplication Press 3\nFor Division Press 4\n\n");
scanf("%d",&c);
switch (c)
{
case 1 :
printf("The Sum Of %d and %d is %d",a,b,a+b);
break;
case 2 :
printf("The Difference of %d and %d is %d",a,b,a-b);
break;
case 3 :
printf("The  Product of %d and %d is %d",a,b,a*b);
break;
 case 4 : 
 printf("The Division Of %d and %d is %d",a,b,a/b);
break;
default : 
printf("Input is NOT Valid");
}
return 0;
}