#include<stdio.h>

int main(){
	int job_queue[100][2],count,i,time=0,j,tmp,min,imin;
	float wait_time=0,turn_time=0;
	printf("enter the size followed by the cpu times required(max 100)\n");
	scanf("%d",&count);

	for(i=0;i<count;i++){
		scanf("%d %d",&job_queue[i][0],&job_queue[i][1]);
	}

	for(i=0;i<count;i++){
		min = 30000
		imin = -1
		for(j=0;j<count;j++){
			if (job_queue[j][0]!=-1 && job_queue[j][0]<min ){
				min = job_queue[j][0]
				imin = j
			}
			
		}
		
	}
	printf("turn averge around time:%f\naverage waiting time:%f\n",(turn_time/count),(wait_time/count));

	printf("\n");
	return 0;
}
