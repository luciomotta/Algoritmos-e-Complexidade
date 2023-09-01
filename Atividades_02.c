/******************************************************************************
Utilizando Vetor e Matriz

8. Escreva um programa que leia 10 números e:
a. Escreva o menor valor lido e o maior valor lido
b. Some-os.
c. Imprima sua média.
9. Criar um programa que receba 3 notas de 3 alunos. Caso o aluno não obtenha nota superior
a 6 na média entre a duas notas AV1 e AV2, inserir nota AV3 e substituir a menor entre Av1
e Av2, recalcular a média e mostrar o resultado da aprovação ou reprovação dos alunos.
10. Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo. Elabore funções para:
a. Determinar se eles lados formam um triangulo, sabendo que:
i. O comprimento de cada lado de um triângulo é menor do que a soma
dos outros dois lados.
b. Determinar e mostrar o tipo de triangulo, caso as medidas formem um
triangulo.
i. Equilátero três lados iguais.
ii. Isósceles dois lados iguais.
iii. Escaleno três lados diferentes.
11. Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os
números PARES no vetor par e os números ÍMPARES no vetor ímpar. Imprima os três
vetores.
12. Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no
seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.
13. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor
de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos
dois outros vetores.
14. Utilizando função desenvolva um gerador de tabuada, capaz de gerar a tabuada de
qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja
ver a tabuada. A saída deve ser conforme o exemplo abaixo:
a. Tabuada de 5:
b. 5 X 1 = 5
c. 5 X 2 = 10
d. ...
e. 5 X 10 = 50
*******************************************************************************/
#include <stdio.h>
void AT1(int Valor[10]) {
    int Maior = Valor[0];
    int Menor = Valor[0];
    int Soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o Valor %d: ", i + 1);
        scanf("%d", &Valor[i]);

        Soma += Valor[i];

        if (Valor[i] > Maior) {
            Maior = Valor[i];
        }

        if (Valor[i] < Menor) {
            Menor = Valor[i];
        }
    }

    float Media = (float)Soma / 10;
    printf("O maior número é: %d\n", Maior);
    printf("O menor número é: %d\n", Menor);
    printf("A média é: %.2f\n", Media);
}

void AT2() {
    int Notas[3][3]; // Array bidimensional para armazenar as notas de 3 alunos em 3 avaliações

    for (int aluno = 0; aluno < 3; aluno++) {
        for (int avaliacao = 0; avaliacao < 2; avaliacao++) {
            printf("Digite a nota da AV%d para o aluno %d: ", avaliacao + 1, aluno + 1);
            scanf("%d", &Notas[aluno][avaliacao]);
        }
    }

    for (int aluno = 0; aluno < 3; aluno++) {
        int AV1 = Notas[aluno][0];
        int AV2 = Notas[aluno][1];
        int AV3;
        

        float media = (AV1 + AV2) / 2;
        
    if(media < 6) {
            printf("\nDigite a nota da AV3 para o aluno%d: ", aluno +1);
            scanf("%d", &AV3);
        

            if (media < 6) {
                // Substitua a menor das notas AV1 e AV2 pela nota AV3
                if (AV1 < AV2) {
                    AV1 = AV3;
                } else {
                    AV2 = AV3;
                }
            }
            media = (AV1 + AV2) / 2.0;
        }

        if (media >= 6) {
            printf("\nAluno %d aprovado com média %.2f\n", aluno + 1, media);
        } else {
            printf("Aluno %d reprovado com média %.2f\n", aluno + 1, media);
        }
    }
}

#include <stdio.h>

// Função para verificar se os lados formam um triângulo
int formaTriangulo(int lado1, int lado2, int lado3) {
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        return 1; // Retorna 1 se formar um triângulo
    } else {
        return 0; // Retorna 0 se não formar um triângulo
    }
}

void AT3(int lados[3]) {
    printf("_***um programa que receba três valores, representando as medidas dos três lados de um triângulo***_\n");
    for (int i = 0; i < 3; i++) {
        while (1) { // Loop infinito
            printf("Lado %d: ", i + 1);
            scanf("%d", &lados[i]);
            
            if (lados[i] > 0) {
                break; // Saia do loop while quando um valor válido for inserido
            } else {
                printf("Valor inválido. Digite um valor maior que zero.\n");
            }
        }
    } 
    
    printf("Valores inseridos:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d: %d\n", i + 1, lados[i]);
    }
    
    if (formaTriangulo(lados[0], lados[1], lados[2])) {
        printf("Os lados formam um triângulo.\n");
            
        if (lados[0] == lados[1] && lados[1] == lados[2]) {
            printf("Triângulo: Equilátero (três lados iguais).\n");
        } else if (lados[0] == lados[1] || lados[1] == lados[2] || lados[0] == lados[2]) {
            printf("Triângulo: Isósceles (dois lados iguais).\n");
        } else {
            printf("Triângulo: Escaleno (três lados diferentes).\n");
        }
    } else {
        printf("Os lados NÃO formam um triângulo.\n");
    }
}

int main() {
    int lados[3]; // Declare um array para armazenar os valores

    AT3(lados); // Chame a função AT3 para obter valores maiores que zero

    getchar(); // Pausa o programa até que uma tecla seja pressionada

    return 0;
}



