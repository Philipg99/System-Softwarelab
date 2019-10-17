#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct obj
{
	char name[20];
	int obj_count;
	struct obj *sub[100];
};

void indent(int n){
	while(n-->0){
		printf("\t");
	}
}

void print(struct obj root, int level){
	int i;
	for(i=0;i<root.obj_count;i++){
		indent(level);
		printf("%s\n", root.sub[i]->name);
		print(*(root.sub[i]),level+1);
			
	}
	
}


int main(){
	struct obj root,*curr;
	int i,code=2,q;

	strcpy(root.name,"root");
	root.obj_count=0;
	for(i=0;i<100;i++) root.sub[i] = NULL;
	

	printf("1.create folder or file\n2.print directory\n3.quit\n");
	while(code!='q'){

		scanf("%d",&code);
	
		curr = &root;
		switch(code){
			case 1:

			while(1==1){
				printf("1.this directory (%s) 2.sub directory\n",(*curr).name);
				scanf("%d",&q);
				if(q == 1){
					(*curr).sub[(*curr).obj_count] = (struct obj*) malloc(sizeof(struct obj));
					(*curr).sub[(*curr).obj_count]->obj_count=0;
					for(i=0;i<100;i++) (*curr).sub[(*curr).obj_count]->sub[i] = NULL;
					printf("enter name ");
					scanf("%s",(*curr).sub[(*curr).obj_count]->name);
					(*curr).obj_count ++;
					break;
				}
				if(q == 2){
					for(i=0;i<(*curr).obj_count;i++) printf("%d:%s ",i,(*curr).sub[i]->name);
					printf("\n");
					scanf("%d",&i);
					curr=(*curr).sub[i];

				}
			}

				break;


			case 2:
				printf("root\n");
				print(root,1);
				break;

			case 3:
				break;



		};


	}
	

	printf("\n");
	return 0;
}