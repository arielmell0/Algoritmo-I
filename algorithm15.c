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

int main(void) {
    float peso, altura, imc;
    char sit;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite aqui a altura: ");
    scanf("%f", &altura);

    return 0;
}