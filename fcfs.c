#include<stdio.h>

int main(){
	int job_queue[100][2],count,i,time=0;
	float wait_time=0,turn_time=0;
	printf("enter the size followed by the cpu times required(max 100)\n");
	scanf("%d",&count);

	for(i=0;i<count;i++){
		scanf("%d %d",&job_queue[i][0],&job_queue[i][1]);
	}
	for(i=0;i<count;i++){
		wait_time += time-job_queue[i][1];
		time += job_queue[i][0];
		turn_time += time-job_queue[i][1];
	}
	printf("turn averge around time:%f\naverage waiting time:%f\n",(turn_time/count),(wait_time/count));
	
	
	return 0;
}


