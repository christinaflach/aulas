# Atribuição

## Créditos

Adaptado a partir de:
+ [Aulas do Prof. Rodrigo Rocha (UFBA)](https://rodrigorgs.github.io/aulas/mata37/)

---


## Variáveis

Uma variável é um espaço de armazenamento na memória associado a

- um nome
- um valor
- um tipo

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

## Atribuições compostas

Atribuições compostas modificam o valor de uma variável através de uma operação matemática. Elas são apenas formas mais sucintas de escrever certas atribuições. Exemplos:

| atribuição composta |      é equivalente a       |
|---------------------|----------------------------|
| `x += 3`            | `x = x + 3`                |
| `x += y * 2`        | `x = x + y * 2`            |
| `preco -= desconto` | `preco = preco - desconto` |
| `num /= 2`          | `num = num / 2`            |
| `a *= b + 1`        | `a = a * (b + 1)`          |

---

## Incremento e decremento

São formas ainda mais sucintas de adicionar ou subtrair 1 unidade de uma variável. Assim, as três linhas a seguir são equivalentes:

```c++
x = x + 1;
x += 1;
x++;
```

As três linhas a seguir também são equivalentes:

```c++
x = x - 1;
x -= 1;
x--;
```

---

## Incremento e decremento como expressões

Os operadores `++` e `--` podem ser em expressões aritméticas, e podem ser usados como sufixo (ex.: `x++`) ou prefixo de variáveis (ex.: `++x`), com diferenças sutis. Exemplos:

```c++
int x = 5, y;
y = x++;
cout << x << " " << y << endl;
```

É equivalente a

```c++
int x = 5, y;
y = x;
x = x + 1;
cout << x << " " << y << endl;
```

---

## Incremento e decremento como expressões

No entanto,

```c++
int x = 5, y;
y = ++x;
cout << x << " " << y << endl;
```

é equivalente a

```c++
int x = 5, y;
x = x + 1;
y = x;
cout << x << " " << y << endl;
```

---

## Referências

- <http://www.cplusplus.com/doc/tutorial/variables/>
- <http://www.cplusplus.com/doc/tutorial/operators/>


