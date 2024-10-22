#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int start,end,number,i;
	printf("Enter the number for its revesrse table:");
	scanf("%d",&number);
	printf("Enter the number for starting value of table:");
	scanf("%d",&start);
	printf("Enter the number for its ending value of table:");
	scanf("%d",&end);
	//check if the start is less than the end for reverse multiplication
	if(start<=end) {
		printf("reverse multiplication table of%d from %d to %d \n",number,end,start);
		for (i = end;i>=start;i--)
		{
			printf("%d x %d = %d\n",number,i,number*i);
		}
	}
	else {
		printf("error! start number should be lesser than end number or equal to end number");
	}
	return 0;
	
	
	
	
	
}
