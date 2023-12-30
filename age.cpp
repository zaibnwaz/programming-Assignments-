#include<stdio.h>
int main(void)
{
int age;
char sts;
printf("enter the age ");
scanf("%d",& age);
if (age>59){
	getchar();
	printf("enter the sts");
	scanf("%c",& sts);

	if(sts == 'w'){
		printf("working senior\n");
		} else 
		printf("retired senior");
	}
		printf("enter an age again");
		scanf("%d",& age);
		if(age>20){
			printf("adult");
		} else 
		printf("enter the age again");
		scanf("%d",& age);
		if(age>12){
			printf("teen");
		}
		printf("child");

return 0;
}
