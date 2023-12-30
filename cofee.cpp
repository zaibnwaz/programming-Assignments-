#include<stdio.h>

int main   (void)
{
	char ch;
	char cup_size;
	char ch1;
	float total_timeW, total_timeB ;
printf("select your cofee type B for black and W for white");
	scanf("%c",&ch);
	printf("choose cup size if double then press D and if single press S\n");
	scanf("%c",&cup_size);
	printf("press M for manual and A for automation\n");
	scanf("%c",& ch1);
	switch(ch)
	{case 'W' :
		printf(" here is how long your cofee will take\n ");
		printf("put waater-15 miutes \nAdd sugar-15 minutes \nMix well 20-minutes \nadd cofee-2 minutes \nAdd milk-4 minutes \nMix well-20 miutes \n");

			total_timeW=15+15+20+2+4+20;    
			if(cup_size=='D'){
				total_timeW=((total_timeW*0.5)+total_timeW);}

	printf("total time for your cofee is %f", total_timeW);
	break;
	case'B':
		printf(" here is how long your cofee will take ");
		printf(" put water-20mintes \nAdd sugar-20 minutes/nixwell-25inutes \add cofee-15nutes  \nMix well-25minutes");
		total_timeB=20+20+25+15+25;
		if (cup_size=='D'){
			total_timeB=((total_timeB*0.5)+total_timeB);
		}
		printf("total time taken for cofee is %f", total_timeB);
	}
}

		
		


