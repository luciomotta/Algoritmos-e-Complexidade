'''
Utilizando Ponteiro
21. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
(máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
deseja buscar. Mostre os dados de todos os livros encontrados.
22. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável
usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
23. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba
o maior endereço.
24. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
25. Faça um programa que leia 2 valores inteiros e troque os seus conteúdos, ou seja, por
exemplo e, após a execução, A conterá o valor de B e B terá o valor de A.
26. Análise o código a seguir e descreva linha a linha o que ocorre e mostre o resultado.'''
int a, b,*p1, *p2;
a = 4;
b = 3;
p1 = &a;
p2 = p1;
*p2 = *p1 + 3;
b = b * (*p1);
(*p2)++;
p1 = &b;
printf("%d %d\n", *p1, *p2);
printf("%d %d\n", a, b);
