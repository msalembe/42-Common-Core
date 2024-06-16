# Assignment Name: rot_13

**Expected Files:** `rot_13.c`
**Allowed Functions:** `write`

---

## Objective

Escreva um programa que pegue uma string e a exiba, substituindo cada uma de suas letras pela letra 13 espaços à frente em ordem alfabética.

- 'z' se torna 'm'
- 'Z' se torna 'M'
- O caso permanece inalterado.

A saída será seguida por uma nova linha.

Se o número de argumentos não for 1, o programa exibe uma nova linha.

## Examples

```sh
$ ./rot_13 "abc"
nop
$ ./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$ ./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$ ./rot_13 | cat -e
$
$ ./rot_13 "" | cat -e
$
$
