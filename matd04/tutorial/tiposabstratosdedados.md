# Tipos abstratos de dados

Um _tipo de dados_ caracteriza um conjunto de valores a que uma constante pertence, ou que podem ser assumidos por uma variável ou uma expressão, ou que podem ser retornados por uma função.

Um _tipo de dados simples_ define um grupo de valores indivisíveis. Por exemplo, os tipos básicos integer e real são tipos simples.
Um _tipo de dados estruturado_ define uma coleção de valores simples, ou um agregado de valores de tipos diferentes. Por exemplo, os tipos estruturados array e struct são tipos estruturados.


Um _tipo abstrato de dados_ (TAD) pode ser visto como um modelo matemático acompanhado pelas operações definidas sobre ele. Por exemplo, o TAD integer é formado pelo conjunto dos inteiros e suas operações de adição, subtração e multiplicação. Em geral, TAD é usado para encapsular um tipo de dados, definindo o tipo propriamente dito e todas as operações definidas sobre ele.

Exemplo:

	def List
		
		empty (l);
		first (l);
		insert (e,l);
	end
 
