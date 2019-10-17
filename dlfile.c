#include<stdio.h>
#include<stdlib.h>

struct folder
{
	int id;
	char name[20];
	char *subfile[100];
	int obj_count;
};

int main(){
	
	struct folder *drctry[100];
	int id_counter=0,i,tmp,j;
	char code;

	for(i=0;i<100;i++) drctry[i]=NULL;
	
	printf("f.create folder\na.add file\np.print directory\n");

	while(code!='q'){
		scanf("%c",&code);
		
		switch(code){
			case 'f':

				drctry[id_counter] = (struct folder*) malloc(sizeof(struct folder));
				drctry[id_counter]->id= id_counter;
				drctry[id_counter]->obj_count=0;
				for(i=0;i<100;i++) drctry[id_counter]->subfile[i] = NULL;
				scanf("%s",drctry[id_counter]->name);

				id_counter++;
				break;


			case 'p':
				for(i=0;i<id_counter;i++){
					printf("%d:%s\n",drctry[i]->id,drctry[i]->name);
					for (int j = 0; j < drctry[i]->obj_count; j++)
						printf("\t%s\n",drctry[i]->subfile[j]);
					
				}

				break;


			case 'a':
				for(i=0;i<id_counter;i++)
					printf("%d:%s ",drctry[i]->id,drctry[i]->name);
				printf("enter directory id\n");
				scanf("%d",&tmp);
				drctry[tmp]->subfile[drctry[tmp]->obj_count] = malloc(20 * sizeof(char));
				scanf("%s", drctry[tmp]->subfile[drctry[tmp]->obj_count]);
				drctry[tmp]->obj_count ++;

				break;
			case 'q':
				break;



		};


	}

	printf("\n");
	return 0;
}