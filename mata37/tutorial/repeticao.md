
# Motivação

**Problema**: Seu programa deve calcular a média aritmética de quatro notas de um aluno e informar se o aluno foi aprovado. Se a média for menor do que 7.0, o aluno deve ser reprovado.

**Entrada**: Uma linha contendo quatro números reais.

**Saída**: Seu programa deve imprimir a sentença "Aluno aprovado! Parabens!" ou "Aluno reprovado! Estude mais!" seguida de uma quebra de linha.

---

```c++
#include <iostream>

using namespace std;

int main() {
  float n1, n2, n3, n4, media;

  cin >> n1 >> n2 >> n3 >> n4;
  media = (n1 + n2 + n3 + n4) / 4.0;
  if (media >= 7.0)
    cout << "Aluno aprovado! Parabens!\n";
  else
    cout << "Aluno reprovado! Estude mais!\n";

  return 0;
}
```

---

# Como calcular a média para 30 alunos?

**Problema**: Seu programa deve calcular a média aritmética de quatro notas de 30 alunos. Alunos com média menor do que 7.0 estão reprovados.

**Entrada**: Quatro números reais (notas) lidos da entrada padrão **para cada aluno**.

**Saída**: Seu programa deve imprimir a sentença "Aluno aprovado" ou "Aluno reprovado" seguida de uma quebra de linha **para cada aluno**.

---

```c++
#include <iostream>
using namespace std;
int main() {
  float n1,n2,n3,n4,media;

  // Aluno 1
  cin >> n1 >> n2 >> n3 >> n4;
  media = (n1 + n2 + n3 + n4) / 4.0;
  if (media >= 7.0)
    cout << "Aluno aprovado! Parabens!\n";
  else
    cout << "Aluno reprovado! Estude mais!\n";

  // Aluno 2
  cin >> n1 >> n2 >> n3 >> n4;
  media = (n1 + n2 + n3 + n4) / 4.0;
  if (media >= 7.0)
    cout << "Aluno aprovado! Parabens!\n";
  else
    cout << "Aluno reprovado! Estude mais!\n";

  // ...

  return 0;
}
```

---

# Sumário

Nesta aula vamos ver como executar as instruções de um programa repetidas vezes.

Veremos dois tipos de repetição:

- repetir um número definido de vezes (`for`)
- repetir enquanto uma condição for verdadeira (`while` e `do..while`)

---

# for - Repetição de contagem

```c++
for ( <inicialização> ; <condição> ; <incremento> ) {
 instrução1;
 …
 instruçãoN;
}
```

Se houver apenas uma instrução, as chaves (`{` e `}`) são opcionais.

---

## Média aritmética para 30 alunos


```c++
#include <iostream>

using namespace std;

int main() {
  float n1, n2, n3, n4, media;
  int i;

  for (i = 0; i < 30; i++) {
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1 + n2 + n3 + n4) /4.0;
    if (media >= 7.0)
      cout << "Aluno aprovado! Parabens!\n";
    else
      cout << "Aluno reprovado! Estude mais!\n";
  } 
  return 0;
}
```

---

![](https://upload.wikimedia.org/wikipedia/commons/0/06/For-loop-diagram.png)

---

# Definições

Um **loop** (ou laço) é uma sequência de instruções que é executada repetidamente.

Cada repetição das instruções (ou seja, cada "volta" no loop) é chamada de **iteração**.

No `for`, é comum usar uma variável para funcionar como **contador de loop**.

---

## Usando o contador de loop nas instruções

Escreva um programa que escreve os números de 2 a 10, um em cada linha:

```c++
#include <iostream>

using namespace std;

int main () {
  int i;

  for (i = 2; i <= 10; i++) {
    cout << i << endl;
  }

  return 0;
}
```

---

## Dando um passo maior

Escreva um programa que escreve os números **pares** de 2 a 10, um em cada linha:

```c++
#include <iostream>

using namespace std;

int main () {
  int i;

  for (i = 2; i <= 10; i += 2) {
    cout << i << endl;
  }

  return 0;
}
```

---

## Dando um passo pra trás

Escreva um programa que escreve os números de 10 a 2, em ordem decrescente, um em cada linha:

```c++
#include <iostream>

using namespace std;

int main () {
  int i;

  for (i = 10; i >= 2; i--) {
    cout << i << endl;
  }

  return 0;
}
```

---

# E se a quantidade não for conhecida? 

**Descrição**: Seu programa deve calcular a média aritmética de quatro notas de N alunos. Alunos com média menor do que 7.0 estão reprovados.

**Entrada**: Para cada aluno, a entrada contém duas linhas. A primeira possui quatro números reais (notas) e a segunda contém um inteiro C que indica se existem mais alunos (C = 1) ou não na entrada (C = 0) após o atual.

**Saída**: Seu programa deve imprimir a sentença "Aluno aprovado" ou "Aluno reprovado" seguida de uma quebra de linha para cada aluno. 

---

## while - Repetição pré-testada

While significa *enquanto*. As instruções são executadas enquanto a condição for verdadeira.

```c++
while ( <condição> ) {
 instrução1;
 …
 instruçãoN;
}
```

Se houver apenas uma instrução, as chaves (`{` e `}`) são opcionais.

---

## Média aritmética de N alunos

```c++
#include <iostream>

using namespace std;

int main() {
  float n1, n2, n3, n4, media;
  int continua = 1;

  while (continua != 0) {
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1 + n2 + n3 + n4) / 4.0;
    if (media >= 7.0)
      cout << "Aluno aprovado! Parabens!\n";
    else
      cout << "Aluno reprovado! Estude mais!\n";
    cin >> continua;
  } 
  return 0;
}
```

---

# do..while - Repetição pós-testada

O `do..while` funciona de forma similar ao while; a diferença é que a condição é testada no **final** de cada iteração.

```c++
do {
 instrução1;
 …
 instruçãoN;
} while ( <condição> );
```

---

## Média aritmética de N alunos - do..while

```c++
#include <iostream>

using namespace std;

int main() {
  float n1, n2, n3, n4, media;
  int continua;

  do {
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1 + n2 + n3 + n4) / 4.0;
    if (media >= 7.0)
      cout << "Aluno aprovado! Parabens!\n";
    else
      cout << "Aluno reprovado! Estude mais!\n";
    cin >> continua;
  } while (continua != 0);
  return 0;
}
```

---

# Equivalência entre for e while

```c++
for (i = 0; i < n; i++) {
  cout << i << endl;
}
```

É equivalente a

```c++
i = 0;
while (i < n) {
  cout << i << endl;
  i++;
}
```

---

# Artifício para leitura de sequências de números finalizadas com zero

Leia um número e imprima o dobro, repetidamente. Pare quando o número for 0:

```c++
#include <iostream>

using namespace std;

int main() {
  int i;

  while ((cin >> i) && i != 0) {
    cout << i * 2 << endl;
  }

  return 0;
}
```

`(cin >> i)` lê um número da entrada padrão, atribui o número à variável `i`, e retorna falso se a leitura não é bem sucedida.


---

Parte deste material foi baseado nos slides do prof. Mauricio Pamplona
e nos slides do Prof. Rodrigo Rocha.

