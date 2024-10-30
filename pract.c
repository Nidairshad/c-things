#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1,num2,product;
	
	printf("enter your 2 numbers to find their product and if they re even or odd");
	scanf("%d %d",&num1,&num2);
	product = num1*num2;
	if (product%2 == 0) {
		printf("your product is %d and your ans is even !",product);}
	
	else {
		printf("your product of 2 numbers is = %d  and its not even ", product);
	}
return 0;
}

