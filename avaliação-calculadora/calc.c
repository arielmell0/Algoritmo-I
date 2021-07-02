// Exercício avaliativo
// 1. Codifique em C os 4 algoritmos.
// 2. Escreva um programa que receba um código e dois
// valores, execute a operação conforme a tabela com os
// valores e mostre o resultado.
// 3. Enviar por e-mail até dia 17 de agosto.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valorA, valorB, resposta;
    int operacao, modA, modB;

    printf("-----------------------------------------\n");
    printf("1: Soma\n");
    printf("2: Subtração\n");
    printf("3: Multiplicação\n");
    printf("4: Divisão\n");
    printf("5: Resto da divisão\n");
    printf("-----------------------------------------\n");
    printf("Digite o número da operação que deseja realizar: ");
    scanf("%i", &operacao);
    printf("Digite o primeiro valor: ");
    scanf("%f", &valorA);
    printf("Digite o segundo valor: ");
    scanf("%f", &valorB);

    modA = (int)valorA;
    modB = (int)valorB;

    switch(operacao){
        case 1:
            resposta = valorA + valorB;
            printf("%.2f + %.2f = %.2f", valorA, valorB, resposta);
        break;

        case 2:
            resposta = valorA - valorB;
            printf("%.2f - %.2f = %.2f", valorA, valorB, resposta);
        break;

        case 3:
            resposta = valorA * valorB;
            printf("%.2f * %.2f = %.2f", valorA, valorB, resposta);
        break;

        case 4:
            resposta = valorA / valorB;
            printf("%.2f / %.2f = %.2f", valorA, valorB, resposta);
        break;      

        case 5:
            resposta = (int)valorA % (int)valorB;
            printf("%i mod %i = %i", valorA, valorB, resposta);
        break;

        default:
            printf("Erro!\n");
        break;
    }

    return 0;
}
