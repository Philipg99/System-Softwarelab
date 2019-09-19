#include<stdio.h>

int main(){
	int job_queue[100],job_count,i,disk_size,pos;


	printf("enter job count (max 100) disk size and initial position of head\n");
	scanf("%d %d %d",&job_count,&disk_size,&pos);

	for(i = 0;i < job_count;i++){
		scanf("%d",&job_queue[i]);
	}
	
	for(i = 0;i < job_count;i++){
		printf("%d to %d\n", pos,job_queue[i]);
		pos = job_queue[i];
	}

	printf("\n");
	return 0;
}
