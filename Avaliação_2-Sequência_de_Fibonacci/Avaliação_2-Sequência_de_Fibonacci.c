// A Sequência de Fibonacci é composta por uma sucessão de números descrita pelo famoso 
// matemático italiano Leonardo de Pisa(século XII), mais conhecido como Fibonacci.
// Os números de Fibonacci são os números que compõem a sequência 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, … 
// a sequência é infinita e começa com os números 0 e 1 e os termos seguintes são formados pela soma 
// dos dois termos anteriores.

#include <stdio.h>    
#include <locale.h>   

int main() {
    setlocale(LC_ALL, "Portuguese");

    int fibonacci[10];
    int lenght = sizeof(fibonacci)/sizeof(fibonacci[0]);
    int i;

    // Valores padrões de fibonacci
    fibonacci[0] = 0, fibonacci[1] = 1;

    //loop para armazenar os valores de fibonacci
    for(i = 2; i < lenght; i++) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci [i - 1];
    }

    //loop para imprimir os valores 
    for(i = lenght - 1; i >= 0; i--) {
        printf("%i\n", fibonacci[i]);
    }
}
