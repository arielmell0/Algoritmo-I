// Por alguma razão não existe o algoritmo 16, o professor pulou do 15 para o 17

// Início // prog_cExer17.cpp
//  Inteiro: n1, n2, n3, n4, menor;
//  Escreva(“Digite 4 números inteiro: ”);
//  Leia(n1,n2,n3,n4);
//  Se n1 < n2 e n1 < n3 e n1 < n4 então menor ← n1;
//  Senão Se n2 < n3 e n2 < n4 então menor ← n2;
//  Senão Se n3 < n4 então menor ← n3;
//  Senão menor ← n4;
//  Fimse;
//  Fimse;
//  Fimse;
//  Escreva(“O menor é: “, menor);
// Fim. 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, n4, menor;
    printf("Digite 4 números inteiros: \n");
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    scanf("%i", &n4);

    if(n1 < n2 && n1 < n3 && n1 < n4){
        menor = n1;
    } else if (n2 < n3 && n2 < n4){
        menor = n2;
    } else if (n3 < n4){
        menor = n3;
    } else {
        menor = n4;
    }

    printf("\nO menor é: %i", menor);

    return 0;
}
