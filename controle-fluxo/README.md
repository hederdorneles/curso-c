# Estruturas de controle de fluxo

As estruturas de controle de fluxo são usadas em C para controlar a execução do código de acordo com certas condições. Aqui estão alguns exemplos de estruturas de controle de fluxo comuns em C:
* if: a estrutura if permite que você execute um trecho de código apenas se uma determinada condição for verdadeira. Por exemplo:
```c
int a = 5, b = 2;
if (a > b) {
  printf("a e maior que b\n");
}
``` 

Você também pode usar a estrutura if com uma cláusula else para executar um trecho de código quando a condição for falsa:
```c
int a = 5, b = 2;
if (a > b) {
  printf("a e maior que b\n");
} else {
  printf("a e menor ou igual a b\n");
}
```

* for: a estrutura for é um tipo de laço que permite que você execute um trecho de código várias vezes, com um contador que é incrementado ou decrementado a cada iteração. Por exemplo:
```c
for (int i = 0; i < 10; i++) {
  printf("%d\n", i + 1);
}
```

* while: a estrutura while é um tipo de laço que permite que você execute um trecho de código enquanto uma determinada condição for verdadeira. Por exemplo:
```c
int i = 0;
while (i < 10) {
  printf("%d\n", i + 1);
  i++;
}
```

* switch: a estrutura switch é usada para selecionar um trecho de código a ser executado com base em um valor inteiro ou um valor de caractere. Por exemplo:
```c
int opcao = 2;
switch (opcao) {
  case 1:
    printf("Opcao 1\n");
    break;
  case 2:
    printf("Opcao 2\n");
    break;
  case 3:
    printf("Opcao 3\n");
    break;
  default:
    printf("Opcao desconhecida\n");
    break;
}
```
No exemplo acima, a mensagem "Opcao 2" será impressa, pois opcao é igual a 2.

* break: o comando break é usado para interromper a execução de um laço ou uma estrutura switch. Por exemplo:
```c
for (int i = 0; i < 10; i++) {
  if (i == 5) {
    break;
  }
  printf("%d\n", i);
}
```
No exemplo acima, apenas os números de 0 a 4 são impressos, pois o laço é interrompido quando i é igual a 5.

* continue: o comando continue é usado para interromper a iteração atual de um laço e ir para a próxima iteração. Por exemplo:
```c
for (int i = 0; i < 10; i++) {
  if (i % 2 == 0) {
    continue;
  }
  printf("%d\n", i);
}
```
No exemplo acima, apenas os números ímpares de 1 a 9 são impressos, pois a iteração atual é interrompida quando i é um número par.

O comando continue é útil quando você quer pular algumas iterações de um laço sem precisar usar um if dentro do laço. No entanto, é importante tomar cuidado ao usar o continue, pois ele pode tornar o código mais difícil de ler e entender.

# Operador ternário

O operador ternário é um operador condicional em C que permite avaliar uma expressão e, de acordo com o resultado, retornar um valor ou outro. Ele é escrito como expressão ? valor1 : valor2.

Se a expressão for verdadeira, o operador ternário retorna valor1. Se a expressão for falsa, ele retorna valor2. Por exemplo:
```c
int a = 5, b = 10;
int maior = (a > b) ? a : b;
printf("%d\n", maior);  // imprime 10
```

No exemplo acima, a variável maior recebe o valor de b, pois a expressão a > b é falsa.

O operador ternário é útil para escrever código mais conciso e legível, evitando o uso de estruturas de controle de fluxo como o if/else.
