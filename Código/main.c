#include <stdio.h>

int main(){
	FILE *arquivo;
	
	arquivo = fopen("feof.txt","r");
	
	if(arquivo == NULL){
		printf("Falha ao abrir o arquivo\n");
		return 0;
	}
	
	int num;
	
	do{
		fscanf(arquivo, "%d", &num);
		if(feof(arquivo) == 0){
			printf("%d\n",num);
		}
	}while(feof(arquivo) == 0);
	
	fclose(arquivo);
	
	return 0;
	
}