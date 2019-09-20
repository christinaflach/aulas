# Estruturas de Dados Fundamentais


## Listas lineares (_linked lists_)

- Lista é uma estrutura que contém elementos de um conjunto em que as operações _inserir_, _retirar_ e _localizar_ são definidas.

- Listas podem crescer e encolher em tempo de execução; seu tamanho máximo não precisa ser conhecido antecipadamente.

- Elementos podem ser acessados, inseridos ou retirados da lista.

- A lista é um conjunto de itens organizados sequencialmente. 
   - No _array_, a organização sequencial é dada implicitamente pela posição do elemento no _array_.
   - Na _linked list_, há uma organização explícita em que cada elemento é parte de um "nó" que também contém um "link" para o próximo "nó".


## Tipo Abstrato de Dados LISTA

### Um conjunto de operações

   - Criar uma lista linear vazia
   - Inserir um novo item imediatamente após o i–ésimo item
   - Retirar o i-ésimo item
   - Localizar o i-ésimo item para examinar e/ou alterar o conteúdo de seus componentes
   - Combinar duas ou mais listas lineares em uma lista única
   - Fazer uma cópia da lista linear
   - Ordenar os itens da lista em ordem ascendente ou decrescente, de acordo com alguns de seus componentes
   - Pesquisa a ocorrência de um item com um valor específico em algum componente. 

### Outro conjunto de operações

   - FLVazia(Lista). Faz a lista ficar vazia.
   - Insere(x, Lista). Insere x após o último elemento da lista.
   - Retira(x, Lista). Retorna o item x que está na posição p da lista, retirando-o da lista e deslocando os itens a partir da posição p+1 para as posições anteriores.
   - Vazia(Lista). Retorna _true_ se a lista for vazia; senão, retorna _false_.
   - Imprime(Lista). Imprime os itens da lista na ordem de ocorrência.

## Implementação de LISTA

### Com _array_


### Com _pointer_ 


