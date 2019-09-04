#include<stdio.h>

int main(){
	int i,j,not_end_flag=1; // flags and inter variales
	int job_queue[100][2],job_count,time=0,min=9999,mini;
	float wait_time=0,turn_time=0;

	printf("enter the size followed next line the cpu times  and arival times(max 100)\n");
	scanf("%d",&job_count);

	for(i = 0;i < job_count;i++){
		scanf("%d %d",&job_queue[i][0],&job_queue[i][1]);
	}
	
	while(1 == 1){

		not_end_flag = 0; // to see if all processes are done
		for(i = 0;i<job_count;i++) not_end_flag += job_queue[i][0];
		if (!not_end_flag) break;



		for(i = 0;i < job_count;i++){ // finding the shorted available job
			if( job_queue[i][0] < min && job_queue[i][1] <= time && job_queue[i][0] != 0){
			min = job_queue[i][0];
			mini = i;
			}
		}

		time += job_queue[mini][0];
		turn_time += time - job_queue[mini][1];
		wait_time += time - job_queue[mini][1]- job_queue[mini][0];
		job_queue[mini][0] = 0;

		min = 9999;

	}

	printf("averge turn around time:%f\naverage waiting time:%f\n",(turn_time/job_count),(wait_time/job_count));

	printf("\n");
	return 0;
}
