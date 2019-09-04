#include<stdio.h>

int min(int a , int b){
	if (a <= b) return a;
	return b;
}

int main(){
	int i,j,not_end_flag=1,job_found=0; // flags and inter variales
	int job_queue[100][2],burst_times[100],job_count,quantum,time=0,curr_index=0;
	float wait_time=0,turn_time=0;

	printf("enter the number of jobs and quantum size followed next line the cpu times  and arival times(max 100)\n");
	scanf("%d %d",&job_count,&quantum);

	for(i = 0;i < job_count;i++) scanf("%d %d",&job_queue[i][0],&job_queue[i][1]);
	for(i = 0;i < job_count;i++) burst_times[i] = job_queue[i][0];
	while(1 == 1){

		not_end_flag = 0; // to see if all processes are done
		for(i = 0;i<job_count;i++) not_end_flag += job_queue[i][0];
		if (!not_end_flag) break;

		job_found = 0;

		while(!job_found){ // finding the shorted available job
			if(job_queue[curr_index][1] <= time && job_queue[curr_index][0] != 0) job_found = 1;
			else curr_index = (curr_index+1)%job_count;
		}

		time += min(quantum,job_queue[curr_index][0]);
		if ((job_queue[curr_index][0] - min(quantum,job_queue[curr_index][0])) == 0){
			turn_time += time - job_queue[curr_index][1];
			wait_time += time - job_queue[curr_index][1]- burst_times[curr_index];
		}

		job_queue[curr_index][0] -= min(quantum,job_queue[curr_index][0]); 
		curr_index = (curr_index+1)%job_count;

	}

	printf("averge turn around time:%f\naverage waiting time:%f\n",(turn_time/job_count),(wait_time/job_count));

	printf("\n");
	return 0;
}
