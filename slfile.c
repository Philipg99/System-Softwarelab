#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,obj_count=0,code=2;
	char  *s[100],tmp[20];

	for(i=0;i<100;i++) s[i]=NULL;
	printf("1.add file \n2.print directory\n3.delete file\n");
	while(code!='q'){
		

		scanf("%d",&code);
		
		switch(code){
			case 2:
				printf("\n");
				printf("root\n");
				for(i=0;i<obj_count;i++)
					printf("\t%s\n",s[i]);
				break;
			case 1:
				s[obj_count ] = malloc(20 * sizeof(char));
				printf("enter file name: " );
				scanf("%s", s[obj_count ]);
				obj_count ++;
				break;
			case 3:
				printf("enter file name: " );
				scanf("%s", tmp);
				for(i=0;i<obj_count;i++)
				{
				    if(s[i]==tmp)
				        remove (s[i]);
				}
				printf("file %s has been deleted", tmp);
				obj_count --;
				break;



		};


	} 
	

	printf("\n");
	return 0;
}
