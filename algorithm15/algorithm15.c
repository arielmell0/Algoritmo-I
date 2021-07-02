// Algoritmo 15: 
// Início
// Real: peso, altura, imc;
// Caractere: sit;
// Escreva(“Peso: ”); Leia(peso);
// Escreva(“Altura: ”); Leia(altura);
// Imc ← peso / pot(altura,2);
// Se imc < 18,5 então sit ← “Abaixo do peso.”;
// Senão Se imc < 25,0 então sit ← “Normal.”;
// Senão Se imc < 30,0 então sit ← “Acima do peso.”;
// Senão Se imc < 35,0 então sit ← “Obesidade.”;
// Senão Se imc < 40,0 então sit ← “Ob. severa.”;
// Senão sit ← “Obesidade mórbida.”;
// Fimse; Fimse; Fimse; Fimse; Fimse;
// Escreva(sit);
// Fim.

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;
    char sit[19];
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite aqui a altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);
    if (imc < 18.5){
        strcpy(sit, "Abaixo do peso.");
    } else if (imc < 25){
        strcpy(sit, "Normal.");
    } else if (imc < 30){
        strcpy(sit, "Acima do peso.");
    } else if (imc < 35){
        strcpy(sit, "Obesidade.");
    } else if (imc < 40){
        strcpy(sit, "Obesidade severa.");
    } else {
        strcpy(sit, "Obesidade m�rbida.");
    }
    
    printf(sit);

    return 0;
}
