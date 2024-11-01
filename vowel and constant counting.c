#include <stdio.h>
#include <stdlib.h>


int main() {
	int i =0;
	int vcount =0 ;
	int concount=0;
	char thisstr[100];//declare an array of characters to hold the string
	printf("Enter the word");
	scanf("%s",thisstr);
	for (i ;thisstr[i]!='\0';i++)
	 {
		char ch = tolower(thisstr[i]);
		if (ch>='a' && ch<='z') {
			if(ch =='a' || ch == 'e' || ch =='i' || ch =='o' || ch =='u'){
				vcount++;
			}else{concount++;
			}
					}
	}
	printf("Vowelcount = %d",vcount);
	printf("Constant count = %d",concount);
	
	

	return 0;
}
