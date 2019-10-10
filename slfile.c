#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,obj_count=0;
	char code = 'p', *s[100],tmp[20];

	for(i=0;i<100;i++) s[i]=NULL;
	printf("a.add file \np.print directory\n");
	while(code!='q'){
		

		scanf("%c",&code);
		
		switch(code){
			case 'p':
				for(i=0;i<obj_count;i++)
					printf("\t%s\n",s[i]);
				break;
			case 'a':
				s[obj_count ] = malloc(20 * sizeof(char));
				scanf("%s", s[obj_count ]);
				obj_count ++;
				break;
			case 'q':
				break;



		};


	} 
	

	printf("\n");
	return 0;
}