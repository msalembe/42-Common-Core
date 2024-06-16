# Assignment Name: rotone

**Expected Files:** `rotone.c`
**Allowed Functions:** `write`

---

## Objective

Escreva um programa que pegue uma string e a exiba, substituindo cada uma de suas letras pela próxima em ordem alfabética.

- 'z' se torna 'a'
- 'Z' se torna 'A'
- O caso permanece inalterado.

A saída será seguida por uma nova linha (`\n`).

Se o número de argumentos não for 1, o programa exibe uma nova linha (`\n`).

## Examples

```sh
$ ./rotone "abc"
bcd
$ ./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$ ./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$ ./rotone | cat -e
$
$ ./rotone "" | cat -e
$
$
