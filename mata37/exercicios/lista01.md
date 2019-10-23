# Exercícios com Inteiros


1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados. 


2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros positivos. 


3.  Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

Exemplo: Para n=4 a saída deverá ser 1,3,5,7. 

4.  Dados um inteiro x e um inteiro não-negativo n, calcular x _elevado a_ n. 


5.  Uma loja de discos anota diariamente, a cada semana, a quantidade de discos vendidos. Determinar em que dia da semana ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia. 


6.  Dados o número n de alunos de uma turma 
e suas notas da primeira prova, 
determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e nota mínima = 0). 

7.  Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares. 

8.  Dado um inteiro não-negativo n, determinar n! 

9.  Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.

 Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8. 

10.  Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos.

Exemplo: 120 é triangular, pois 4.5.6 = 120.
Dado um inteiro não-negativo n, verificar se n é triangular. 

11.  Dado um inteiro positivo n, verificar se n é primo. 

12.  Dados dois números inteiros positivos, determinar o máximo divisor comum entre eles usando o algoritmo de Euclides.

13.  Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos diferentes de n.

Exemplo: 6 é perfeito, pois 1+2+3 = 6.

Dado um inteiro positivo n, verificar se n é perfeito. 

14.  Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos (1) através de uma seqüência de números naturais que passou a ser conhecida como seqüência de Fibonacci (2). O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência:


F1 = 1

F2 = 1

Fi = Fi-1 + Fi-2, para i >= 3.


Faça um programa que, dado n, calcula Fn. 

15.  Dizemos que um número i é congruente módulo m a j se i % m = j % m. 

Exemplo: 35 é congruente módulo 4 a 39, pois
35 % 4 = 3 = 39 % 4.

Dados inteiros positivos n, j e m, imprimir os n primeiros naturais congruentes a j módulo m.

16.  Dado um número natural na base binária, transformá-lo para a base decimal.

Exemplo:
Dado 10010 a saída será 18.

17.  Dado um número natural na base decimal, transformá-lo para a base binária.

Exemplo: Dado 18 a saída deverá ser 10010. 

18.  Dados três números naturais, verificar se eles formam os lados de um triângulo retângulo. 

19.  Dados três números, imprimi-los em ordem crescente. 


20. Qualquer número natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus dois primeiros e dois últimos dígitos.

Exemplos:
1297: 12 e 97.

5314: 53 e 14.

Escreva um programa que imprime todos os milhares (4 algarismos) cuja raiz quadrada seja a soma das dezenas formadas pela divisão acima.

Exemplo: raiz de 9801 = 99 = 98 + 01. 
Portanto 9801 é um dos números a ser impresso.

21. Dados n e uma seqüência de n números inteiros, determinar quantos segmentos de números iguais consecutivos compõem essa seqüência.

Exemplo: A seguinte seqüência é formada por 5 segmentos de números iguais:   5,  2,  2,  3,  4,  4,  4,  4,  1,  1 

22.  Dados n e uma seqüência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento máximo.

Exemplos:

Na seqüência   5,  10,  3,  2,  4,  7,  9,  8,  5   o comprimento do segmento crescente máximo é 4.

Na seqüência   10,  8,  7,  5,  2   o comprimento de um segmento crescente máximo é 1. 

23.  Dizemos que um número natural n é palíndromo (3) se 
    
o 1º algarismo de n é igual ao seu último algarismo, 

o 2º algarismo de n é igual ao penúltimo algarismo, 

e assim sucessivamente.

Exemplos:

567765 e 32423 são palíndromos.

567675 não é palíndromo.

Dado um número natural   n > 10 , verificar se n é palíndrome. 

24.  São dados dois números inteiros positivos p e q, sendo que o número de dígitos de p é menor ou igual ao número de dígitos de q. Verificar se p é um subnúmero de q.

Exemplos:
p = 23, q = 57238, p é subnúmero de q.
p = 23, q = 258347, p não é subnúmero de q.


25.  Simule a execução do programa abaixo destacando a sua saída:

```
int main()
{
  int a, b, total, soma, termo, i;

  cout << "Digite um par de numeros: ";
  cin >> a;  cin >> b;
  cout << a << b << endl;
  total = 0;
  soma  = 0;
  while (a != 0) {  
    total = total + 1;
    termo = 1;
    for (i = 1; i <= b; i++)
      termo = termo * a; 
    cout << "Resp = " << termo << endl;
    soma = soma + termo;
    cout << "Soma = " << soma << endl;
    cout << "Digite um par de numeros: ";
    cin >> a;  cin >> b;
    cout << a << b << endl; 
  }
  cout << "Digite um par de numeros: ";
  cout << "Total de pares: " << total << endl;
  return 0;
}
```
```
Dados: 
    2    3 
    5    2 
    7    1 
    0    5 
    3    2  
```

