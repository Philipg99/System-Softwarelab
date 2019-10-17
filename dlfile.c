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
	int id_counter=0,i,tmp,j,code;

	for(i=0;i<100;i++) drctry[i]=NULL;
	
	printf("1.create folder\n2.add file\n3.print directory\n");

	while(code!=4){
		scanf("%d",&code);
		
		switch(code){
			case 1:

				drctry[id_counter] = (struct folder*) malloc(sizeof(struct folder));
				drctry[id_counter]->id= id_counter;
				drctry[id_counter]->obj_count=0;
				for(i=0;i<100;i++) drctry[id_counter]->subfile[i] = NULL;
				printf("enter folder name: ");
				scanf("%s",drctry[id_counter]->name);

				id_counter++;
				break;


			case 3:
				printf("\n");
				printf("root\n");
				for(i=0;i<id_counter;i++){
					printf("\t%s\n",drctry[i]->name);
					for (int j = 0; j < drctry[i]->obj_count; j++)
						printf("\t\t%s\n",drctry[i]->subfile[j]);
					
				}

				break;


			case 2:
				for(i=0;i<id_counter;i++)
					printf("%d:%s ",drctry[i]->id,drctry[i]->name);
				printf("\nenter directory id: ");
				scanf("%d",&tmp);
				drctry[tmp]->subfile[drctry[tmp]->obj_count] = malloc(20 * sizeof(char));
				printf("enter file name: ");
				scanf("%s", drctry[tmp]->subfile[drctry[tmp]->obj_count]);
				drctry[tmp]->obj_count ++;

				break;
			case 4:
				break;



		};


	}

	printf("\n");
	return 0;
}