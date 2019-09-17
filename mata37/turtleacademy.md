
# Motivação

Créditos:
+ [Turtle Academy](https://turtleacademy.com)

---

## Comando simples

	forward 50
	backward 100
	left 90
	right 45
	label "turtle
	seth 90
	setxy 30 70
	setwidth 5
	pendown / penup
	setcolor 8 fd 50
	print "hello
	make "y 5
	make "x 9
	print :y
	print sum 2 :y
	print sum 2 4
	make "z difference :x :y

---

## Sequência de comandos 

	penup setxy -30 70 pendown seth 90 label "victory

## Bloco de comandos

	[rt 90 fd 50]

---

## Repetição

	repeat 4 [rt 90 fd 100]

---

## "Comando" definido pelo usuário

+ comando "dashline" definido pelo usuário para desenhar linha tracejada de tamanho 100


	to dashline repeat 5 [setwidth 1 fd 10 setwidth 3 fd 10] end


+ comando "square" definido pelo usuário para desenhar quadrado com comando "dashline"


	to square repeat 4 [rt 90 dashline] end


+ construção to _nome_ _comando(s)_ end

 
---

## Condicional


	make "num 1
	IF :num = 1 [print [Number is 1]] fd 50

	make "num 2
	IF :num = 1 [print [Number is 1]] fd 50
	
	IFELSE :num = 1 [print [Number is 1]] [print [Number is not 1]]

---

<!--  for [var_name var_initial_value var_last_value advance] [command sequence ] -->
<!-- do.while[ COMMANDS ]condition -->
<!-- make "name readword -->
<!-- to rec :W :L repeat 2 [fd :W rt 90 fd :L rt 90] end -->


