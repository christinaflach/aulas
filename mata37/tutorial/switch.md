
# Estruturas de seleção

As estruturas de seleção determinam quais linhas de código serão executadas de acordo com alguma condição.

Em C/C++, as principais estruturas de seleção são as seguintes:

- `if` (`if`-`else`, `if`-`else if`...)
- `switch`
- operador ternário (`? :`)

---

# switch

```c++
switch (expressão) {
    case valorA:
        instrucaoA1;
        ...
        instrucaoAN;
        break;
    case valorB:
        instrucaoB1;
        ...
        instrucaoBN;
        break;
    case valorN:
        instrucaoN1;
        ...
        instrucaoNN;
        break;
    default:
        intrucaoD1;
        ...
        instrucaoDN;
}
```

---

# switch

Se esquecer de escrever o break, a execução continua nas instruções do próximo `case` (o que pode ser desejado ou não).

---

# Exemplo: 8-ball

O usuário faz uma pergunta e o programa responde uma das seguintes frases:

- Sim!
- Não!
- Talvez!

Usar o gerador de números aleatórios.


