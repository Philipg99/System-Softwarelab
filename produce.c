#include<stdio.h>

int main(){
	int buffer_pos,i,buffer_size,buffer_full=0,buffer_empty=1;
	char action;

	printf("buffer of buffer(max 100)\n");
	scanf("%d",&buffer_size);


	while(1==1){
		scanf("%c",&action);

		if( action == 'p'){

			if (!buffer_full){
				buffer_pos += 1;
				buffer_empty = 0;
				if (buffer_pos == buffer_size)
					buffer_full = 1;
				printf("message added to buffer\n");

			}
			else
				printf("buffer full\n");

		}

		if( action == 'c'){

			if (!buffer_empty){
				buffer_pos -= 1;
				buffer_full = 0;
				if (buffer_pos == 0)
					buffer_empty = 1;
				printf("message removed form buffer\n");

			}
			else
				printf("buffer is empty\n");

		}
			
		if( action == 'q')
			break;


	}
	

	printf("\n");
	return 0;
}