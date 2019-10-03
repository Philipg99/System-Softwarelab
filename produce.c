#include<stdio.h>

int main(){
	int buffer_pos=0,buffer_size,buffer_full=0,buffer_empty=1;
	char action;

	printf("size of buffer(max 100)\n");
	scanf("%d",&buffer_size);


	while(1==1){
		scanf("%c",&action);

		if( action == 'p'){

			if (!buffer_full){
				buffer_pos += 1;
				buffer_empty = 0;
				if (buffer_pos == buffer_size)
					buffer_full = 1;
				printf("message added to buffer,(%d/%d)\n",buffer_pos,buffer_size);

			}
			else
				printf("buffer full,(%d/%d)\n",buffer_pos,buffer_size);

		}

		if( action == 'c'){

			if (!buffer_empty){
				buffer_pos -= 1;
				buffer_full = 0;
				if (buffer_pos == 0)
					buffer_empty = 1;
				printf("message removed form buffer,(%d/%d)\n",buffer_pos,buffer_size);

			}
			else
				printf("buffer is empty,(%d/%d)\n",buffer_pos,buffer_size);

		}
			
		if( action == 'q')
			break;


	}
	

	printf("\n");
	return 0;
}