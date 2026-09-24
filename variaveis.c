/*int - valores inteiros; char - carcteres ASCII;
float - números de ponto flutuante; double - números de dupla precisão;*/
#include <stdio.h> 
int main() {
    // type variable_name = value
    // printf("%d\n", myNum); printf("%f\n", myFloatNum); printf("%c\n", myLetter); printf("%s\n", myString)
    char initial_name = 'C';
    printf("Minha letra inicial do nome é %c \n", initial_name);

    char name[] = "Chaos";
    printf("Meu nome é %s \n", name);

    int meu_numero_favorito = 13;
    printf("Meu número favorito é %d \n", meu_numero_favorito);

    // declarando multiplas variáveis
    int num1 = 13, num2 = 55, num3 = 27;
    printf("3 números aleatórios que escolhi: %d %d %d \n", num1, num2, num3);

    float altura = 1.66;
    printf("Tenho %.2f cm de altura", altura);
    
    return 0;
}