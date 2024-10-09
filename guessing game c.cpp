#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int randomnum,userguess,attempts = 0 ;
	char playagain;
	srand(time(0)); //initilizing random number generator
	
	do{
	
	randomnum = rand() %100 + 1; //generate a random number between 0 to 100
	printf("i have already choosen , can you guess my love:))"); //loop until user guesses correctly
	while (attempts<5){
		printf("Enter your guess:");
		scanf("%d",&userguess);
		attempts = attempts + 1;
		if (userguess<randomnum) {
			printf("oh your guess is too low:( try again..");
			
		}
		else if (userguess>randomnum) {
			printf("oh this time your guess is too high :( try again..");
		}
		else {printf("congratulations!,you guess it correctly in number of %d attempts",attempts);
		break;}	//exit the loop if user guessed it  correctly
	   }
	   if (attempts == 5 && userguess != randomnum){printf("sorry you used all your 5 attempts , the correct answer is %d better luck next time:)",randomnum);
	   }
   
   printf("Do you want to play again type yes for y and no for n;");
   scanf("%c",&playagain);}
   while (playagain =='y' || playagain =='Y');
   printf("thanks for playing! bye bye.\n");
   return 0;
}
