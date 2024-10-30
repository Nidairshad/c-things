#include <stdio.h>
#include <stdlib.h>

int main() {
	int thisnum,reversed = 0,remainder;
	printf("enter the number to be reversed:");
	scanf("%d",&thisnum);
	if (thisnum == 0) {
		printf("0\n");
	}
	else{
		while (thisnum!=0){
			remainder = thisnum%10;
			reversed = reversed * 10 + remainder;
			thisnum = thisnum/10;
			
		}
	printf("your reversed integer %d",reversed);
	}
	return 0 ;
}
