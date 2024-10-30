#include <stdio.h>
#include <stdlib.h>
//checking if number is palindrome!

int main() {
	int thisnum,originalnum,reversed,remainder;
	printf("enter your number to be enter");
	scanf("%d",&thisnum);
	originalnum = thisnum;
	if (thisnum>=0 && thisnum<=9)
	{printf("please enter more then one number ! to check if its palindrome or not")
	}
	else{
	
	while (thisnum !=0){
		remainder = thisnum % 10;
		reversed = reversed*10 + remainder;
		thisnum = thisnum/10;
	}
}
	if (originalnum == reversed){
		printf("your number is %d and  yes your num is palindrome!",reversed);
	}
	else{
		printf("your original number was %d and your reversed num is %d and its not palindrome!",originalnum,reversed);
	}
	return 0 ;

}
