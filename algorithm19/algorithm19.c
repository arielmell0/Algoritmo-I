// Por alguma razão não existe o algoritmo 16, o professor pulou do 15 para o 17

// Início
//  Real: n1, n2, n3, n4, media, faltas, aulasDadas ← 72, frequencia, ne ← 0 ;
//  Caractere: nome, sit;
//  Escreva(“Nome e faltas: ”); Leia(nome,faltas);
//  Escreva(“Digite 4 notas: ”); Leia(n1,n2,n3,n4);
//  Med ← (n1+2*n2+5*n3+2*n4)/10;
//  Freq ← (aulasDadas – faltas)* 100 / aulasDadas;
//  Se media >= 7 E frequencia >= 75 então sit ← “Aprovado”;
//  Senão Se media < 1,7 OU frequencia < 75 então sit ← “Reprovado”;
//  Senão inicio sit ← “Em exame”; ne ← (50-6*media)/4; fim;
//  Fimse;
//  Fimse;
//  Escreva(nome,media,frequencia,sit);
//  Se ne > 0 então escreva(ne); fimse;
// Fim.

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float n1, n2, n3, n4, faltas; 
    float aulasDadas = 70;
    float nExame = 0;
    float media = (n1 + 2*n2 + 5*n3 + 2*n4)/10;
    float frequencia = (aulasDadas-faltas)/aulasDadas*100.0;
    char nome[20], sit[20];

    printf("Nome: "); scanf("%s", &nome);
    printf("Faltas: "); scanf("%f", &faltas);
    printf("Digite a 1° nota: "); scanf("%f", &n1);
    printf("Digite a 2° nota: "); scanf("%f", &n2);
    printf("Digite a 3° nota: "); scanf("%f", &n3);
    printf("Digite a 4° nota: "); scanf("%f", &n4);
    
    if(media >= 7 && frequencia >= 75){
        strcpy(sit, "Aprovado");
    } else if (media < 1,7 || frequencia < 75){
        strcpy(sit, "Reprovado");
    } else {
        nExame = (50-6*media)/4;
        strcpy(sit, "Em exame por: ");  
    }

    printf("-----------------------\n");
    printf("Nome: %s\n", nome);
    printf("Média: %.2f\n", media);
    printf("Frequência: %.2f\n", frequencia);
    printf("Situação: %s\n", sit);
    if(nExame > 0){
        printf("Nota do exame: %f\n", nExame);
    }

    return 0;
}