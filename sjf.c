#include<stdio.h>

int main(){
	int job_queue[100],count,i,time=0,j,tmp;
	float wait_time=0,turn_time=0;
	printf("enter the size followed by the cpu times required(max 100)\n");
	scanf("%d",&count);

	for(i=0;i<count;i++){
		scanf("%d",job_queue+i);
	}

	//sorting
	for(i=1;i<count;i++)
		for(j=i;j>0;j--)
			if(job_queue[j]<job_queue[j-1]){
				//swap
				tmp=job_queue[j];
				job_queue[j]=job_queue[j-1];
				job_queue[j-1]=tmp;
				//end of sawp
			}
	//end of sorting

	for(i=0;i<count;i++){
		wait_time += time;
		time += job_queue[i];
		turn_time += time;
	}
	printf("turn averge around time:%f\naverage waiting time:%f\n",(turn_time/count),(wait_time/count));

	printf("\n");
	return 0;
}
