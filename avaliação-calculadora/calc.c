// Exercício avaliativo
// 1. Codifique em C os 4 algoritmos.
// 2. Escreva um programa que receba um código e dois
// valores, execute a operação conforme a tabela com os
// valores e mostre o resultado.
// 3. Enviar por e-mail até dia 17 de agosto.

#include <stdio.h>
#include <locale.h>
#include <math.h> // Uso da função fmod() para módulo de tipo float

int main(){
    setlocale(LC_ALL, "Portuguese");
    float valorA, valorB, resposta;
    int operacao, exit;

    do{
        printf("-----------------------------------------\n");
        printf("1: Soma\n");
        printf("2: Subtra��o\n");
        printf("3: Multiplica��o\n");
        printf("4: Divis�o\n");
        printf("5: Resto da divis�o\n");
        printf("-----------------------------------------\n");
        printf("Digite o n�mero da opera��o que deseja realizar: ");
        scanf("%i", &operacao); 
        printf("Digite o primeiro valor: ");
        scanf("%f", &valorA);
        printf("Digite o segundo valor: ");
        scanf("%f", &valorB);

        switch(operacao){
            case 1:
                resposta = valorA + valorB;
                printf("%.2f + %.2f = %.2f\n\n", valorA, valorB, resposta);
            break;

            case 2:
                resposta = valorA - valorB;
                printf("%.2f - %.2f = %.2f\n\n", valorA, valorB, resposta);
            break;

            case 3:
                resposta = valorA * valorB;
                printf("%.2f * %.2f = %.2f\n\n", valorA, valorB, resposta);
            break;

            case 4:
                resposta = valorA / valorB;
                printf("%.2f / %.2f = %.2f\n\n", valorA, valorB, resposta);
            break;      

            case 5:
                resposta = fmod(valorA, valorB);
                printf("%.2f mod %.2f = %.2f\n\n", valorA, valorB, resposta);
            break;

            default:
                printf("Erro!\n\n");
            break;
        }

        printf("Digite 0 para repetir a opera��o: ");
        scanf("%i", &exit);
    } while (exit == 0);

    return 0;
}
