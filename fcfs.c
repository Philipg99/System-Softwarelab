#include<stdio.h>

int main(){
	int job_queue[100],count,i,time=0;
	float wait_time=0,turn_time=0;
	printf("enter the size followed by the cpu times required(max 100)\n");
	scanf("%d",&count);

	for(i=0;i<count;i++){
		scanf("%d",job_queue+i);
	}
	for(i=0;i<count;i++){
		wait_time += time;
		time += job_queue[i];
		turn_time += time;
	}
	printf("turn averge around time:%f\naverage waiting time:%f\n",(turn_time/count),(wait_time/count));
	
	
	return 0;
}


