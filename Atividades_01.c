/******************************************************************************
1.	Diferenciar dentre 3 números, qual é o maior e qual é o menor
2.	Escreva um programa que leia 10 números e:
    a.	Escreva o menor valor lido e o maior valor lido
    b.	Some-os.
    c.	Imprima sua média.
3.	Calcular se um número é ou não primo 
4.	Calcular o fatorial de um número.
5.	Calcular a Serie de Fibonacci de N elementos.
6.	Informar se um número inteiro está ou não dentro de um intervalo de 2 número digitado
7.	Leia uma temperatura a qual o usuário irá informar o Valor e a escala atual: (Fahrenheit, Celsius, Kelvin) e informar a escala para qual deseja converter.
    a.	Celsius para Fahrenheit: F = C*(1,8) + 32
    b.	Fahrenheit para Celsius: C = (F − 32) / 1,8
    c.	Kelvin para Celsius: C = K – 273,15
    d.	Celsius para Kelvin: K = C + 273,15
    e.	Kelvin para Fahrenheit: F = 1,8(K-273) + 32
8.	Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os números PARES no vetor par e os números ÍMPARES no vetor ímpar. Imprima os três vetores. 
*******************************************************************************/
#include <stdio.h>
#include <math.h> // Para a função sqrt

void AT1(){
// Ja vai ser feito Na ATividade 2 
}
void AT2(int Valor[10]) {
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &Valor[i]);
    }
    
    int Maior = Valor[0]; 
    int Menor = Valor[0]; 
    float Soma;
    for(int i = 0; i < 10; i++){
        
        Soma += Valor[i]; // Poder somar os valores e dps fazer a media
        if(Valor[i] >= Maior){
            Maior = Valor[i];
        }
        if(Valor[i] <= Menor){
            Menor = Valor[i];
        }
    }
    float Media = Soma/10; // se eu declarar Media dentro de FOR ela so fica visivel no scopo e não poderia usar Fora
    
    printf("\n\nMaior valor: %d\n", Maior);
    printf("Menor valor: %d\n", Menor);
    printf("A soma dos Números e: %f\n", Soma);
    printf("Media dos valores: %f\n", Media);

}
void AT3(int num){
    printf("Um número primo é um número inteiro maior do que 1 que possui exatamente dois divisores positivos: 1 e ele mesmo.\n\n");
    printf("Digite um Número Primo: ");
    scanf("%d", &num);
    printf("O número Digitado e: %d\n", num);
    
    while (num <= 1){ //Usando o While, pois so Continua se a condição for VERDADEIRA
        printf("\nDigite um Número maior que 1: ");
        scanf("%d", &num);
    }
    
    int primo = 1; // Assumimos que é primo até prova em contrário
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            primo = 0; // Não é primo
            break;
        }
    }
    
    if (primo) { // com a variavel (primo), ele verifica se o numero ainda e 1 s ñ e ELSE
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }
}
void AT4(int num){
    printf("um número FATORIAL e inteiro positivo, denotado por n!\n-É o produto de todos os números inteiros positivos de 1 até n.");
    printf("\n   Exemplo:4! = 4 * 3 * 2 * 1 = 24\n\n");
    printf("\033[1;31mDigite um Número:\033[0m");
    scanf("%d", &num);
    
    int fatorial = 1;
    
    for(int i = 1; i <= num; i++){ // DEVE INICAR EM 1, para ñ multiplicar por ZERO.
        fatorial *= i; 
     }
    printf("O fatorial de %d é: %d\n", num, fatorial);
    
}
void AT5(){
    int N;
    printf("ate onde vai a Fibonacci,Digite um Número: ");
    scanf("%d", &N);
    
      int num1 = 0, num2 = 1;

    printf("\nSérie de Fibonacci com %d elementos:\n", N);
    
    for(int i = 0; i <= N; i++){
        int next = num1 + num2;
        
        num1 = num2;
        num2 = next;
        printf("%d, ", next);
    }
}
void AT6(int num){
    int num1, num2;
    
    printf("Digite o 1ª Número: ");
    scanf("%d", &num1);
    printf("Digite o 2ª Número: ");
    scanf("%d", &num2);
    
    if (num1 == (int)num1) {
       printf("O 1º número é inteiro: %d\n", num1);
    } else {
       printf("O 1º número não é inteiro: %d\n", num1);
    }
    
    if (num2 == (int)num2) {
       printf("O 2º número é inteiro: %d\n", num2);
    } else {
       printf("O 2º número não é inteiro: %d\n", num2);
    }
} //Não conseguir verificar se o número e inteiro
void AT7(){
     int temp;
    int opcao;
    int F, C, K;

    printf("Digite uma temperatura para a conversão: ");
    scanf("%d", &temp);

    printf("Escolha uma opção:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Kelvin para Fahrenheit\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            F = temp * 1.8 + 32;
            printf("%d\n", F);
            break;
        case 2:
            C = (temp - 32) / 1.8;
            printf("%d\n", C);
            break;
        case 3:
            K = temp + 273.15;
            printf("%d\n", K);
            break;
        case 4:
            C = temp - 273.15;
            printf("%d\n", C);
            break;
        case 5:
            F = 1.8 * (temp - 273) + 32;
            printf("%d\n", F);
            break;
        default:
            printf("Opção inválida!\n");
    }
}
void AT8(int Valor[20]){
    int Impar[20];
    int Par[20];
    int qtdImpar = 0;
    int qtdPar = 0;
    
    for(int i = 0; i < 20; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &Valor[i]);
        
        if (Valor[i] % 2 == 0) {
            Par[qtdPar] = Valor[i];
            qtdPar++;
        } else {
            Impar[qtdImpar] = Valor[i];
            qtdImpar++;
        }
    }
    
    printf("Números pares: ");
    for (int i = 0; i < qtdPar; i++) {
        printf("%d ", Par[i]);
    }
    printf("\nNúmeros ímpares: ");
    for (int i = 0; i < qtdImpar; i++) {
        printf("%d ", Impar[i]);
    }
}

int main() {
 //Declarar as Variaveis Globais da Função.
    int Maior, menor, Valor[10]; // ATV 1-2
    int num, num1, num2;  // ATV 3,4;6.
        int opcao;
    
    do {
        printf("\nMenu de Opções:\n");
        printf("1. AT1\n");
        printf("2. AT2\n");
        printf("3. AT3\n");
        printf("4. AT4\n");
        printf("5. AT5\n");
        printf("6. AT6\n");
        printf("7. AT7\n");
        printf("8. AT8\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                AT1();
                break;
            case 2:
                // Chamar AT2 com apropriados argumentos
                AT2(Valor);
                break;
            case 3:
                // Chamar AT3 com apropriados argumentos
                AT3(num);
                break;
            case 4:
                // Chamar AT4 com apropriados argumentos
                AT4(num);
                break;
            case 5:
                AT5();
                break;
            case 6:
                // Chamar AT6 com apropriados argumentos
                AT6(num);
                break;
            case 7:
                AT7();
                break;
            case 8:
                // Chamar AT8 com apropriados argumentos
                AT8(Valor);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
        
    } while (opcao != 0);

    return 0;
}
    
    


