# Análise de algoritmos

O custo de utilização de um algoritmo pode ser medido de diversas maneiras. Utilizaremos um modelo abstrato para ignorar aspectos relativos a sistemas de computação ou hardware.
Por exemplo, para algoritmos de ordenação, podemos considerar o número de comparações entre elementos do conjunto a ser ordenado e ignoramos outras operações.

Para medir o custo de execução de um algoritmo é comum definir uma _função de custo_ ou _função de complexidade_ _f_, onde _f(n)_ é a medida da quantidade de tempo necessário para executar um algoritmo para um problema de tamanho _n_ (conceitualmente, mas com menor frequência, também se pode medir o custo com base na quantidade de _memória_ necessária).

A medida de custo de execução de um algoritmo depende principalmente do tamanho da entrada de dados. Por isso, é comum considerar-se o tempo de execução de um programa como uma função do tamanho da entrada, _f(n)_. Entretanto, para alguns algoritmos, o custo de execução é uma função de características da entrada de dados, e não apenas no tamanho da entrada.

Alguns algoritmos possuem custo uniforme sobre todos os problemas de tamanho _n_. 

    function Max (var A: Vetor): integer;
    var i, Temp: integer;
    begin 
      Temp := A[1];
      for i:= 2 to n do if Temp < A[i] then Temp := A[i];
      Max := Temp;
    end;
    
