#include<stdio.h>

int main(){
	int phil_count,phil_no,frokarr[100],i;
	char action;
	for(i=0;i<100;i++) frokarr[i]=1;

	printf("number of philosopher(max 100)\n");
	scanf("%d",&phil_count);


	while(1==1){
		scanf("%c %d",&action,&phil_no);

		if( action == 'e'){

			if (frokarr[phil_no]==1 && frokarr[(phil_no+1)%phil_count]==1){
				frokarr[phil_no]=0;
				frokarr[(phil_no+1)%phil_count] =0;
				printf("philosopher %d is eating\n",phil_no );
			}
			else
				printf("philosopher %d is unable to eat\n",phil_no );

		}

		if( action == 'f'){
			frokarr[phil_no]=1;
			frokarr[(phil_no+1)%phil_count] =1;
			printf("philosopher %d is no longer eating\n",phil_no );

		}
			
		if( action == 'q')
			break;


	}
	

	printf("\n");
	return 0;
}