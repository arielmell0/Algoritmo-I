// Por alguma razão não existe o algoritmo 20, o professor pulou do 19 para o 21

// Início // prog_cExer21.cpp
//  Inteiro: dia ; // Dia da semana
//  Caractere: nome
//  Escreva(“Digite um inteiro: ”); Leia(dia);
//  SE dia = 1 então nome
// ← “Domingo”; senão
//  SE dia = 2 então nome
// ← “Segunda”; senão
//  SE dia = 3 então nome
// ← “Terça”; senão
//  SE dia = 4 então nome
// ← “Quarta”; senão
//  SE dia = 5 então nome
// ← “Quinta”; senão
//  SE dia = 6 então nome
// ← “Sexta”; senão
//  SE dia = 7 então nome
// ← “Sábado”; senão
//  nome
// ← “Valor inválido”;
//  Fimse; Fimse; Fimse; Fimse; Fimse; Fimse; Fimse;
//  Escreva(nome);
// Fim.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	int fim;
	char nome[20];
	
	do { 
		printf("Digite um n�mero inteiro: "); scanf("%i", &dia);
		
		switch(dia){
			case 1:
				printf("Domingo");
			break;
				
			case 2:
				printf("Segunda");
			break;
			
			case 3: 
				printf("Ter�a");
			break;
			
			case 4:
				printf("Quarta");
			break;
			
			case 5:
				printf("Quinta");
			break;
				
			case 6:
				printf("Sexta");
			break;
				
			case 7:
				printf("Sab�do");
			break;
			
			default:
				printf("Valor inv�lido!");
			break;
		}
		
		printf("\nDigite 0 para repetir a opera��o: "); scanf("%i", &fim);
		printf("-------------\n\n");	
			
	} while(fim == 0);
	
	return 0;
}
