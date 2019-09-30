---
layout: remark
title: Tipos de dados
---

# Tipos de Dados

## Créditos

Adaptado a partir de:
+ [Aulas do Prof. Rodrigo Rocha (UFBA)](https://rodrigorgs.github.io/aulas/mata37/)

Ver https://www.ime.usp.br/~hitoshi/introducao/03-Fundamentos.pdf

---

## Variáveis

Uma variável é um espaço de armazenamento na memória associado a

- um nome
- um valor
- **um tipo**

---

## Tipos

Cada variável possui um tipo. O tipo representa quais são os valores e as operações possíveis com a variável.

Por exemplo, o tipo `int` representa números inteiros, incluindo o zero, números positivos e números negativos. Com variáveis do tipo `int` é possível realizar soma, subtração, divisão, multiplicação, resto da divisão, dentre outras operações.

O tipo `float` representa números fracionários.

---

## Tipos

|             tipo             |            valores             |       espaço / precisão        |
|------------------------------|--------------------------------|--------------------------------|
| char                         | números inteiros ou caracteres | Exatamente 1 byte              |
| int                          | números inteiros               | Pelo menos 16 bits (2 bytes)   |
| long (ou long int)           | números inteiros               | Pelo menos 32 bits (4 bytes)   |
| long long (ou long long int) | números inteiros               | Pelo menos 64 bits (8 bytes)   |
| float                        | números fracionários           |                                |
| double                       | números fracionários           | Tão ou mais preciso que float  |
| long double                  | números fracionários           | Tão ou mais preciso que double |
| bool                         | valor-verdade (true/false)     | .                              |

---

## Tipos

O tipo `string` representa uma cadeia de caracteres (texto). Para usá-lo, você precisa adicionar `#include <string>` no início do código-fonte. No tipo string, cada caractere ocupa 1 byte.

---

## Tipos

Em alguns compiladores, o tipo `int` ocupa 2 bytes, em outros ocupa 4 ou 8 bytes... depende do compilador e, às vezes, do sistema operacional.

---

## Tipos com e sem sinal

Para cada tipo inteiro, existe um tipo correspondente que comporta apenas valores sem sinal (zero ou positivo).

Exemplo:

- `int`: zero, positivos e negativos
- `unsigned int`: zer e positivos

---

## Tipos e faixa de valores

O número de bits/bytes de um tipo representa a quantidade de valores diferentes que podem ser representados pelo tipo. Ex.:

| Tamanho |             Valores diferentes            |
|---------|-------------------------------------------|
| 8 bits  | 2^8 = 256 valores                         |
| 16 bits | 2^16 = 65 536 valores                     |
| 32 bits | 2^32 = 4 294 967 296 valores              |
| 64 bits | 2^64 = 18 446 744 073 709 551 616 valores |

Assim, o tipo `char` representa valores de -127 a 128, e `unsigned char` representa valores de 0 a 255.

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


## Constantes

Constantes são como variáveis, exceto que elas devem ser inicializadas na declaração e o seu valor não pode mudar. A declaração é feita escrevendo-se a palavra `const` antes da declaração. Exemplo:

```c++
const float PI = 3.14f, E = 2.7f;
const double NUMERO_DE_AVOGADRO = 6.02e23;
```

Por convenção, geralmente usam-se letras maiúsculas para nomear constantes, mas isso não é obrigatório.

Desafio: tente alterar o valor da constante depois de definido.

---

## define

A palavra `#define` pode ser usada para definir macros e constantes. Exemplo:

```c++
#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
	cout << "PI = " << PI << endl;
	return 0;
}
```

O que acontece nesse caso é que o compilador troca todas as referências a PI (exceto entre parênteses) no programa pelo seu valor (`3.14159`). 

---

## Referências

- <http://www.cplusplus.com/doc/tutorial/variables/>
- <http://www.cplusplus.com/doc/tutorial/operators/>

