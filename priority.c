#include<stdio.h>


int main(){
	int i,j,not_end_flag=1; // flags and inter variales
	int job_queue[100][3],job_count,time=0,curr_highest = -1,curr_index;
	float wait_time=0,turn_time=0;

	printf("enter the number of jobs (max 100)and next line the cpu times , arival times and prority(higher the number higher the priority)\n");
	scanf("%d",&job_count);

	for(i = 0;i < job_count;i++) scanf("%d %d %d",&job_queue[i][0],&job_queue[i][1],&job_queue[i][2]);
	while(1 == 1){

		not_end_flag = 0; // to see if all processes are done
		for(i = 0;i<job_count;i++) not_end_flag += job_queue[i][0];
		if (!not_end_flag) break;

		curr_highest = -1;

		for(i = 0;i < job_count;i++){ // finding available job with higerst priority
			if( job_queue[i][2] > curr_highest && job_queue[i][0] != 0){
			curr_highest = job_queue[i][2];
			curr_index = i;
			}
		}

		time += job_queue[curr_index][0];
		turn_time += time - job_queue[curr_index][1];
		wait_time += time - job_queue[curr_index][1]- job_queue[curr_index][0];
		job_queue[curr_index][0] = 0;


	}

	printf("averge turn around time:%f\naverage waiting time:%f\n",(turn_time/job_count),(wait_time/job_count));

	printf("\n");
	return 0;
}
