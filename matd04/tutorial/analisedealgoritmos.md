Textos extraídos e/ou adaptados a partir das referências bibliográficas (1) e (2).

# Análise de algoritmos

O custo de utilização de um algoritmo pode ser medido de diversas maneiras. Utilizaremos um modelo abstrato para ignorar aspectos relativos a sistemas de computação ou hardware.
Por exemplo, para algoritmos de ordenação, podemos considerar o número de comparações entre elementos do conjunto a ser ordenado e ignoramos outras operações.

Para medir o custo de execução de um algoritmo é comum definir uma _função de custo_ ou _função de complexidade_ _f_, onde _f(n)_ é a medida da quantidade de tempo necessário para executar um algoritmo para um problema de tamanho _n_ (conceitualmente, mas com menor frequência, também se pode medir o custo com base na quantidade de _memória_ necessária).

A medida de custo de execução de um algoritmo depende principalmente do tamanho da entrada de dados. Por isso, é comum considerar-se o tempo de execução de um programa como uma função do tamanho da entrada, _f(n)_. 

    function Max (var A: Vetor): integer;
    var i, Temp: integer;
    begin 
      Temp := A[1];
      for i:= 2 to n do if Temp < A[i] then Temp := A[i];
      Max := Temp;
    end;
    
A função Max tem custo _n-1_ pois sempre irá realizar _n-1_ comparações para encontrar o maior valor em um vetor A de tamanho _n_, _n >=1_. Além disso, a função Max possui _custo uniforme_ sobre todos os problemas de tamanho _n_ pois seu custo independe da posição do maior elemento no vetor.

Entretanto, para alguns algoritmos, o custo de execução é uma função de características da entrada de dados, e não apenas no tamanho da entrada. Por exemplo, um algoritmo de ordenação pode trabalhar menos se a entrada estiver quase ordenada. Assim, há três cenários a considerar: _melhor caso_ (menor tempo de execução sobre todas as possíveis entradas de tamanho _n_), _pior caso_(maior tempo de execução sobre todas as entradas de tamanho _n_) e _caso médio_ (média dos tempos de execução de todas as entradas de tamanho _n_). 

Por exemplo, considere o probleme de busca sequencial em um arquivo de _n_ registros, com base em uma determinada chave.
O melhor caso ocorre quando a chave é encontrada no primeiro registro do arquivo (_f(n) = 1_). E os demais casos?

- Questão: Qual o custo de MaxMin? É possível melhorar?

        procedure MaxMin (var A: Vetor; var Max, Min:L integer);
        var i: integer;
        begin 
            Max := A[1]; Min := A[1];
            for i:= 2 to n do 
            begin
              if A[i] > Max then Max := A[i];
              if A[i] < Min then Min := A[i];
            end;
        end;
    
## Comportamento assintótico de funções

O parâmetro _n_ fornece uma medida da dificuldade para se resolver um problema, no sentido de que o tempo necessário para resolver o problema cresce quando _n_ cresce.

## Classes de comportamento assintótico

A notação _O_. 
Se _f_ é uma função de complexidade para um algoritmo F, então _O(f) é considerada a complexidade assintótica ou o comportamento assíntótico do algoritmo F. 

_O(1)_

_O(logn)_

_O(n)_

_O(n logn)_

_O(n 2)_

_O(2 n)_

_O(n!)_




