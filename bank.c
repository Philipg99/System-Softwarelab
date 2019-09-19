#include<stdio.h>

int doable(int a,int b,int c,int d,int w,int x,int y,int z){
	if ( (a>=w) && (b>=x) && (c>=y) && d >= z ){
		return 1;
	}
	return 0;
}

int main(){
	int i,j,not_end_flag=1; // flags and inter variales
	int alocated[100][4],needed[100][4],free[4],done[100],job_count,finish=1;

	for(i=0;i<100;i++) done[i]=1;

	printf("enter the number of jobs (max 100)\n");
	scanf("%d",&job_count);

	printf("enter free reosuces (4 types)\n");
	scanf("%d %d %d %d",free,free+1,free+2,free+3);

	printf("enter the alocated resouce then the needed number of reosuces\n");
	for(i = 0;i < job_count;i++){
		scanf("%d %d %d %d %d %d %d %d",alocated[i],alocated[i]+1,alocated[i]+2,alocated[i]+3,needed[i],needed[i]+1,needed[i]+2,needed[i]+3);
	}
	

	while(1==1){

		for(i=0;i<job_count;i++){
			if (doable(free[0] + alocated[i][0],free[1] + alocated[i][1],free[2] + alocated[i][2],free[3] + alocated[i][3],needed[i][0],needed[i][1],needed[i][2],needed[i][3])){
				free[0] += alocated[i][0];
				free[1] += alocated[i][1];
				free[2] += alocated[i][2];
				free[3] += alocated[i][3];

				alocated[i][0] = 0;
				alocated[i][1] = 0;
				alocated[i][2] = 0;
				alocated[i][3] = 0;

				if (done[i]){ 
					printf("job %d done %d %d %d %d\n",i,free[0],free[1],free[2],free[3] );
					done[i]=0;
				}
			}
		}
		finish = 0;
		for(i=0;i<job_count;i++) finish += done[i];

		if (finish==0) break;

	}

	printf("\n");
	return 0;
}