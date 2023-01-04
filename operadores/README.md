# Operadores em C 

Os operadores em C são símbolos usados para realizar operações matemáticas, lógicas e de atribuição em expressões. Aqui estão alguns exemplos de operadores comuns em C:
* Operadores aritméticos: são usados para realizar operações matemáticas simples, como adição, subtração, multiplicação e divisão. Por exemplo:
```c
int a = 5, b = 2;
int c = a + b;   // c = 7
int d = a - b;   // d = 3
int e = a * b;   // e = 10
int f = a / b;   // f = 2
```

Operadores de atribuição: são usados para atribuir valores a variáveis. O operador de atribuição básico é o símbolo de igualdade (=), mas também existem operadores de atribuição combinados, que realizam uma operação e atribuem o resultado a uma variável. Por exemplo:

```c
int a = 5, b = 2;
a += b;   // a = a + b = 7
a -= b;   // a = a - b = 5
a *= b;   // a = a * b = 10
a /= b;   // a = a / b = 5
```

Operadores de comparação: são usados para comparar dois valores e retornar um valor lógico (verdadeiro ou falso). Por exemplo:
```c
int a = 5, b = 2;
if (a > b) {
  printf("a e maior que b\n");
}
if (a < b) {
  printf("a e menor que b\n");
}
if (a == b) {
  printf("a e igual a b\n");
}
if (a != b) {
  printf("a e diferente de b\n");
}
```

Operadores lógicos: são usados para combinar expressões lógicas. Os operadores lógicos mais comuns são o operador E lógico (&&) e o operador OU lógico (||). Por exemplo:
```c
int a = 5, b = 2;
if (a > 3 && b < 3) {
  printf("a e maior que 3 e b e menor que 3\n");
}
if (a > 3 || b < 3) {
  printf("a e maior que 3 ou b e menor que 3\n");
}
```

Operadores de incremento e decremento: são usados para incrementar ou decrementar o valor de uma variável em uma unidade. O operador de incremento (++) adiciona 1 ao valor da variável, enquanto o operador de decremento (--) subtrai 1. Por exemplo:
```c
int a = 5;
a++;   // a = a + 1 = 6
a--;   // a = a - 1 = 5
++a;   // a = a + 1 = 6
--a;   // a = a - 1 = 5
```

Operadores de bit a bit: são usados para realizar operações lógicas em cada bit de um valor inteiro. Os operadores de bit a bit mais comuns são o operador E (&), o operador OU (|) e o operador XOR (^). Por exemplo:
```c
int a = 0b1010, b = 0b0101;
int c = a & b;  // c = 0b0000 (bitwise AND)
int d = a | b;  // d = 0b1111 (bitwise OR)
int e = a ^ b;  // e = 0b1111 (bitwise XOR)
```

Operadores de ponteiro: são usados para trabalhar com ponteiros em C. O operador de endereço de memória (&) retorna o endereço de uma variável, enquanto o operador de desreferenciação de ponteiro (*) retorna o valor apontado por um ponteiro. Por exemplo:
```c
int a = 5;
int *p = &a;
int b = *p;   // b = 5 (desreferencia o ponteiro p)
```

Operador de deslocamento de ponteiro (->): este operador é usado para acessar um campo de um struct através de um ponteiro para o struct. Por exemplo:
```c
struct ponto {
  int x;
  int y;
};

struct ponto p1 = {1, 2};
struct ponto *p2 = &p1;

int x = p1.x;    // x = 1
int y = p2->y;   // y = 2 (acessa o campo y através do ponteiro p2)
```

## Operador vírgula

O operador vírgula (,) é um operador binário em C que é usado para separar duas expressões. Já o operador ponto e vírgula (;) é usado para terminar uma instrução em C.

Por exemplo, o seguinte código imprime os números de 1 a 10:
```c
#include <stdio.h>

int main() {
  int i;
  for (i = 0; i < 10; i++) {
    printf("%d\n", i + 1);
  }
  return 0;
}
```

No laço for, o operador ponto e vírgula é usado para separar as três expressões que são avaliadas a cada iteração do laço: a expressão de inicialização (i = 0), a expressão de condição de saída (i < 10) e a expressão de incremento (i++).

O operador ponto e vírgula também é usado para terminar outras instruções em C, como declarações de variáveis ou chamadas de função.

A vírgula é usada como um operador binário em C para separar duas expressões. Quando usada em uma estrutura de controle de fluxo, como o laço while, a vírgula é avaliada como uma expressão que retorna o valor da última expressão da sequência.

Por exemplo, o seguinte código não fará nada, pois a expressão após a vírgula é avaliada primeiro e o resultado é sempre o valor de j < 2, que é falso:
int i = 15, j = 1;
while (i > 10, j < 2) {
  printf("Looping...\n");
}

Em geral, o uso da vírgula como um operador de separação de expressões é considerado um mau estilo de programação em C, pois pode ser confuso e difícil de ler. É melhor usar a vírgula apenas para separar elementos em uma lista de inicialização ou argumentos em uma chamada de função.
