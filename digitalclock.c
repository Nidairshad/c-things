#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void clearscreen();
void fill_time(char[],int);
void fill_date(char[]);
int input_format();
int main(){
	char time[50],date[100];
	
	int format = input_format();
while (1){

	fill_time(time,format);
	fill_date(date);
	clearscreen();
	printf("%s\n",time);
	printf("Date:%s\n",date);
	sleep(1);//sleep for 1 second pls
}
	return 0;
}
void fill_time(char *buffer,int format){
	time_t raw_time;
	struct tm *current_time;

	
	time(&raw_time);
	current_time = localtime(&raw_time);
	if (format == 1){
		
	strftime(buffer,50,"%H:%M:%S %p",current_time);
}
else {
	strftime(buffer,50,"%I:%M:%S %p",current_time);
}	
}

void fill_date(char *buffer){
	time_t raw_time;
	struct tm *current_time;

	time(&raw_time);
	current_time = localtime(&raw_time);
	strftime(buffer,100,"%A %B %d %Y",current_time);
}

int input_format(){
	int format;
	printf("choose the time format:\n");
	printf("1.24 hour format\n2.12 hour format(default)\n");
	scanf("%d",&format);
	return format;
}
void clearscreen(){
	#ifdef _WIN32
	    system("cls");
	#else 
	    system("clear");
	#endif
}
