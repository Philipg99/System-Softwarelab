#include<stdio.h>

int diff(int x,int y){
	if (x>y) return x-y;
	return y-x;
}

int main(){
	int job_count,temp,i,disk_size,pos,locarr[10000],totmov=0;

	for(i=0;i<10000;i++) locarr[i] = 0;

	printf("enter job count (max 100) disk size(max 10 000)and initial position of head\n");
	scanf("%d %d %d",&job_count,&disk_size,&pos);

	for(i = 0;i < job_count;i++){
		scanf("%d",&temp);
		locarr[temp]=1;

	}
	
	for(i=pos;i<disk_size;i++){
		if (locarr[i]){
			printf("%d to %d\n", pos,i);
			totmov += diff(pos,i);
			pos=i;
			locarr[i]=0;
		}
	}
	printf("%d to %d\n",pos,disk_size-1 );
	totmov += diff(pos,disk_size-1);
	pos = disk_size-1;

	for(i=disk_size-1;i>=0;i--){
		if (locarr[i]){
			printf("%d to %d\n", pos,i);
			totmov += diff(pos,i);
			pos=i;
		}
	}
	
	printf("total header movement : %d",totmov);

	printf("\n");
	return 0;
}