## Assignment name: first_word

### Expected files:
- first_word.c

### Allowed functions:
- write

### Description:

Escreva um programa que pegue uma string e exiba sua primeira palavra, seguida por uma nova linha.

Uma palavra é uma seção da string delimitada por espaços/tabulações ou pelo início/fim da string.

Se o número de parâmetros não for 1 ou se não houver palavras, basta exibir uma nova linha.

### Examples:

```bash
$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
