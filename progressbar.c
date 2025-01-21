#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>//for seeding
#include <time.h>

const int BAR_LENGTH  = 50;
const int MAX_TASKS = 3;
typedef struct{
	int id;
	int progress;
	int step;
}thistask;

void clear_screen();
void print_bar(thistask task);

int main(){
	thistask task[MAX_TASKS];
	srand(time(NULL));
	int i;
	for (i =0;i<MAX_TASKS;i++){
		task[i].id = i + 1;
		task[i].progress = 0;
		task[i].step = rand() %5 +1;
	}
	int task_incomplete = 1;
	while (task_incomplete){
		for (i =0 ; i<MAX_TASKS;i++){
			task[i].progress+=task[i].step;
			if (task[i].progress>100){
				task[i].progress=100;
			}
			else if(task[i].progress <100){
				task_incomplete = 1;
			}
			print_bar(task[i]);
			
		}
		
		sleep(1);
		clear_screen();
	}
	printf("All tasks completed.\n");
	return 0;
	
}

void print_bar(thistask task){
	int bars_to_show = (task.progress * BAR_LENGTH)/100;
	printf("Task %d [",task.id);
	int i;
	for (i= 0;i< BAR_LENGTH;i++){
		if(i<bars_to_show){
			printf("=");
		}
		else{
			printf(" ");
		}
	}
	printf(" ] %d%%\n",task.progress);
}

void clear_screen(){
	system("cls");// my system is windows:)
}
