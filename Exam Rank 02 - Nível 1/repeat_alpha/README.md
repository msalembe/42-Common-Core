# Assignment Name: repeat_alpha

**Expected Files:** `repeat_alpha.c`
**Allowed Functions:** `write`

---

## Objective

Escreva um programa chamado `repeat_alpha` que pegue uma string e a exiba repetindo cada caractere alfabético tantas vezes quanto seu índice alfabético, seguido por uma nova linha.

- 'a' se torna 'a'
- 'b' se torna 'bb'
- 'e' se torna 'eeeee'
- etc...

O caso permanece inalterado.

Se o número de argumentos não for 1, basta exibir uma nova linha.

## Examples

```sh
$ ./repeat_alpha "abc"
abbccc
$ ./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$ ./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$ ./repeat_alpha | cat -e
$
$ ./repeat_alpha "" | cat -e
$
$
