'''
Utilizando Conceitos de Ordenação
27. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor
de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos
dois outros vetores. Após a geração do terceiro vetor realizar a ordenação utilizando o
BubbleSort, SelectSort, InsertSort, MergeSort e QuickSort mostre o tempo de execução de
cada um.
Utilizando Conceitos de Árvore

28. Gerar uma Árvore Binária através de um vetor de tamanho N, no qual o usuário deverá
informar o tamanho e preencher o vetor (Randomicamente ou manualmente).
OBS: NÃO UTILIZAR PONTEIRO

Gerar a Árvore mostrando:
✓ Tamanho (Altura)
✓ Nó Raiz
✓ Nós Folhas
✓ Se está: cheia, vazia ou não
✓ Nível Max
✓ Nível de cada Nó Antes e Após a Ordenação
OBS: Utilizar (BubbleSort, SelectSort, InsertSort, MergeSort ou QuickSort mostre o tempo
de execução)
✓ Mostrar o Nó filho a Esquerda e Direita de cada Nó pai
Ex: printf("\n\tNó Pai: %d\t Filho Esquerda: %d\t filho Direita: %d\t", No, Esquerda,
Direita);
✓ Mostrar a árvore de maneira Hierárquica

-Deve ser feito um Vetor Tamanho [N] Calcular a altura r o Nivel !!Desodernada e Ordenada (Usuario Define o TAM da Arvore)
*Sem ponteiro 

'''

#include <iostream>
#include <cstdlib>
#include <ctime>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

void VetorRandom(int Vetor[], int Tamanho) {
    srand(static_cast<unsigned>(time(NULL));
    for (int i = 0; i < Tamanho; i++) {
        Vetor[i] = rand() % 100;  // Gere números aleatórios de 0 a 99
    }
}

void LerVetor(int Vetor[], int Tamanho) {
    for (int i = 0; i < Tamanho; i++) {
        std::cout << "Vetor[" << i << "]: " << Vetor[i] << std::endl;
    }
}

void BubbleSort(int Vetor[], int Tamanho) {
    for (int i = 0; i < Tamanho - 1; i++) {
        for (int j = 0; j < Tamanho - i - 1; j++) {
            if (Vetor[j] > Vetor[j + 1]) {
                // Trocar elementos
                int temp = Vetor[j];
                Vetor[j] = Vetor[j + 1];
                Vetor[j + 1] = temp;
            }
        }
    }
}

void EscreverNosFilhos(TreeNode* root) {
    if (root) {
        std::cout << "Nó: " << root->data << std::endl;
        if (root->left) {
            std::cout << "Filho Esquerdo: " << root->left->data << std::endl;
        }
        if (root->right) {
            std::cout << "Filho Direito: " << root->right->data << std::endl;
        }
        EscreverNosFilhos(root->left);
        EscreverNosFilhos(root->right);
    }
}

void GerarArvore(TreeNode*& root, int Vetor[], int inicio, int fim) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        root = new TreeNode;
        root->data = Vetor[meio];
        root->left = NULL;
        root->right = NULL;
        GerarArvore(root->left, Vetor, inicio, meio - 1);
        GerarArvore(root->right, Vetor, meio + 1, fim);
    }
}

int main() {
    const int Tamanho = 10;
    int Vetor[Tamanho];
    VetorRandom(Vetor, Tamanho);

    std::cout << "Vetor não ordenado:" << std::endl;
    LerVetor(Vetor, Tamanho);

    BubbleSort(Vetor, Tamanho);
    std::cout << "Vetor ordenado:" << std::endl;
    LerVetor(Vetor, Tamanho);

    TreeNode* root = NULL;
    GerarArvore(root, Vetor, 0, Tamanho - 1);

    std::cout << "Árvore de busca binária:" << std::endl;
    EscreverNosFilhos(root);

    // Lembre-se de liberar a memória alocada para a árvore após o uso
    // Implemente uma função para a desalocação da árvore se necessário.

    return 0;
}

    //Estudar e se basear bnesse código