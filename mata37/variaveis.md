---
layout: remark
title: Variáveis
---

# Variáveis

## Créditos

Adaptado a partir de:
+ [Aulas do Prof. Rodrigo Rocha (UFBA)](https://rodrigorgs.github.io/aulas/mata37/)

Ver https://www.ime.usp.br/~hitoshi/introducao/03-Fundamentos.pdf

---

## O que é uma variável?

Uma variável é um espaço de armazenamento na memória associado a

- um nome (chamado de **identificador** da variável)
- um valor
- um tipo

O valor da variável pode mudar durante a execução do programa.

---

## Identificador

O nome de uma variável em C++ deve começar com uma letra ou underscore (`_`) e pode ser seguido de zero ou mais letras, números e underscores. Ex.:

> `idade`, `x2`, `anoNascimento`, `mes_nascimento`, `_abc`

C++ diferencia maiúsculas e minúsculas nos identificadores. Assim, `idade`, `Idade`, `IDADE` e `iDaDe` são 4 identificadores diferentes, que representam 4 variáveis diferentes.

Existem palavras reservadas que não podem ser usadas para dar nome as variáveis, tais como `if`, `case`, `while`, `int`, `double`, entre outras.

---

## Declaração de variáveis

Antes de usar uma variável no seu programa, é necessário declará-la. A declaração indica o tipo e o nome da variável. Formato geral:

```
<tipo> <identificador1>, <identificador2>, ..., <identificadorN>;
```

Exemplo de declaração:

```c++
int idade;
float altura, peso;
char a, b, c, d;
```

---

## Atribuição

**Atribuição** de um valor a uma variável é o ato modificar o valor de uma variável. Isso é feito com o operador `=` (*igual*). A atribuição de uma variável pode ser feita várias vezes. Exemplo:

```c++
int x, y;
x = 1;
y = 2;
x = x + y;
```

---

Como [ler e executar código](https://medium.com/bits-and-behavior/teaching-a-strategy-for-reading-code-fbc9f4044cab)

```c++
int x = 1;
int y = 2;
int z = x;
x = y;
y = z;
```

Qual o valor de x, y e z ao final da execução do programa?

---

## Inicialização de variáveis

A primeira atribuição de uma variável é chamada de **inicialização** da variável. Todas as variáveis devem ser inicializadas antes de serem usadas (antes de serem usadas em expressões, antes de serem impressas na tela...), pois uma variável que não foi inicializada pode conter qualquer valor.

No exemplo abaixo, qual é o valor de `y`? Pode ser -4, 2345, -1038... não dá pra saber.

```c++
int x, y;
y = x + 1;
cout << y << endl;
```

---

## Inicialização de variáveis

A inicialização de variáveis pode ser feita junto com sua declaração. Exemplo:

```
double pi = 3.14159, r = 2.5, area = 2 * pi * r * r;
```

---

## Referências

- <http://www.cplusplus.com/doc/tutorial/variables/>

