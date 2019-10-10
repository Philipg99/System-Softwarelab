#include<stdio.h>

struct obj
{
	int id;
	int isfolder;
	char name[20];
	int obj_count;
	struct obj *sub[100];
};

int main(){
	struct obj root;
	int i;
	char code = 'p';

	root.id=0;
	root.name="root"
	root.isfolder=1;
	root.obj_count=0;
	for(i=0;i<100;i++) root.sub=NULL;
	
	while(code!='q'){
		scanf("%c",&code);
		
		switch(code){
			case 'f':

				break;


			case 'p':

				break;


			case 'a':

				break;
			case 'q':
				break;



		};


	}
	

	printf("\n");
	return 0;
}