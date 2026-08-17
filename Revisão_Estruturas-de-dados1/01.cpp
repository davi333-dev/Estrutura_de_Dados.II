#include <stdio.h>
#include <string.h>

int main(){
	const char* ingles[] = {"very", "here", "happy", "big", "hello"};
	const char* portugues[] = {"muito", "aqui", "feliz", "grande", "ola"};
	char resposta[20];
//posso criar uma function
int i = 0;
for(int i=0; i<=4; i++){
	printf(" \nTraduzindo do ingles para o  portugues: [%s] ", ingles[i]);
	scanf("[%s]", resposta);
	
	if(resposta == portugues[i]){
		printf("Parabens! Voce acertou!");
	} else {
		printf("Errou! A resposta era [%s]: ", portugues[i]);
	}
}

}

