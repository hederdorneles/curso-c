# Funções

As funções em C provêm uma maneira conveniente para encapsular alguma rotina, que pode ser usada sem a necessidade de refazer sua programação.

As funções são um elemento fundamental da linguagem C, pois permitem dividir o código em pedaços mais gerenciáveis e reutilizáveis. Aqui estão algumas informações básicas sobre como criar e usar funções em C:

* Declaração e definição de funções: para criar uma função em C, é preciso primeiro declará-la e, em seguida, defini-la. A declaração de uma função especifica o tipo de retorno, o nome da função e a lista de argumentos que ela recebe. A definição da função é o corpo da função, que contém as instruções a serem executadas. Por exemplo:
```C
// Declaração da função
int soma(int x, int y);

// Definição da função
int soma(int x, int y) {
  return x + y;
}
```

* Chamada de funções: para chamar uma função em C, basta escrever o nome da função seguido dos argumentos entre parênteses. Por exemplo:
```c
int resultado = soma(2, 3);  // chama a função soma com os argumentos 2 e 3
printf("%d\n", resultado);  // imprime 5
```

Argumentos e parâmetros: quando uma função é chamada, os argumentos são os valores passados para a função. Os parâmetros são as variáveis que recebem os argumentos na declaração e definição da função. No exemplo acima, os argumentos são 2 e 3 e os parâmetros são x e y.

Tipos de retorno: as funções em C podem retornar um valor de qualquer tipo de dados, incluindo tipos primitivos, arranjos e ponteiros. Se a função não precisar retornar nenhum valor, o tipo de retorno deve ser especificado como void. Por exemplo:
```c
void imprime_mensagem() {
  printf("Ola mundo!\n");
}
```


## Passagem de valor, argumentos

Um dos aspectos das funções em C, é que todas os argumentos são passados por "valor". Isso significa que em uma chamada de função, os argumentos são passados em variáveis temporárias ao invés das originais. A chamada de função em C não pode alterar diretamente as variáveis em uma chamada de função.

Em C, os argumentos de uma função podem ser passados por valor ou por referência. A forma como os argumentos são passados afeta a forma como a função pode alterar ou acessar os valores desses argumentos.

* Passagem por valor: quando um argumento é passado por valor, a função recebe uma cópia do valor do argumento. Isso significa que qualquer alteração realizada na função não afeta o valor do argumento na chamada da função. Por exemplo:
```c
void incrementa(int x) {
  x++;
}

int main() {
  int a = 10;
  incrementa(a);
  printf("%d\n", a);  // imprime 10
}
```

No exemplo acima, a função incrementa recebe uma cópia do valor de a e incrementa esse valor localmente. No entanto, o valor de a na função main não é alterado, pois a função trabalha com uma cópia do valor de a.

* Passagem por referência: quando um argumento é passado por referência, a função recebe o endereço de memória do valor do argumento. Isso significa que a função pode alterar o valor do argumento diretamente, sem precisar retornar nenhum valor. Para passar um argumento por referência em C, é preciso usar um ponteiro. Por exemplo:
```c
void incrementa(int* x) {
  (*x)++;
}

int main() {
  int a = 10;
  incrementa(&a);
  printf("%d\n", a);  // imprime 11
}
```

No exemplo acima, a função incrementa recebe o endereço de memória de a e incrementa o valor de a diretamente. Dessa forma, o valor de a na função main é alterado para 11.

A passagem de argumentos por valor ou por referência é uma questão importante em C, pois afeta a forma como a função pode alterar os valores dos argumentos e o que é retornado para o chamador. É importante escolher a forma mais adequada para cada situação, de acordo com as necessidades do programa. Mais aprofundamento sobre passagem de valor por referência se faz necessário o estudo de ponteiros.

## Ponteiro para funções

Os ponteiros para função são uma forma de trabalhar com funções em C, permitindo que você armazene o endereço de uma função em uma variável e chame essa função através desse ponteiro.

Um ponteiro para função é declarado como um ponteiro para um tipo de função específico. Por exemplo, se você tem uma função chamada "soma" que recebe dois inteiros e retorna um inteiro, você pode declarar um ponteiro para essa função da seguinte maneira:
```c
int (*ponteiroSoma)(int, int);
```

Para atribuir uma função a um ponteiro, você pode usar o operador de endereço (&) na função:
```c
ponteiroSoma = &soma;
```

Para chamar uma função através de um ponteiro, você usa o operador de desreferenciação (*) antes do nome do ponteiro:
```c
resultado = (*ponteiroSoma)(10, 20);
```

Os ponteiros para função também podem ser usados como argumentos para outras funções e como campos de structs, permitindo flexibilidade e reutilização de código. É importante lembrar de que os ponteiros para funções devem ser inicializados antes de serem usados.

Aqui está um exemplo de como os ponteiros para função:
```c
#include <stdio.h>

int func1(int x) {
    return x*x;
}

int func2(int x) {
    return x*x*x;
}

int func3(int x) {
    return x*x*x*x;
}

int main() {
    int x;
    int (*ponteiroFunc)(int); // Declaração do ponteiro para função

    printf("Entre com um valor para x: ");
    scanf("%d", &x);

    // Atribuindo funções ao ponteiro
    ponteiroFunc = func1;
    printf("%d^2 = %d\n", x, ponteiroFunc(x));

    ponteiroFunc = func2;
    printf("%d^3 = %d\n", x, ponteiroFunc(x));

    ponteiroFunc = func3;
    printf("%d^4 = %d\n", x, ponteiroFunc(x));

    return 0;
}
```
Neste exemplo, temos três funções diferentes: func1, func2 e func3. Cada uma dessas funções recebe um inteiro e retorna um inteiro, mas realizam operações diferentes. O ponteiro para função é utilizado para armazenar o endereço das funções e chama-las de forma dinâmica. Isso permite que o programa seja mais flexível, pois a operação a ser realizada pode ser alterada dinamicamente, sem precisar modificar o código fonte.

Este exemplo ilustra como os ponteiros para função podem ser usados para permitir a flexibilidade e reutilização de código.

## Funções variádicas

No C, é possível criar funções que aceitam um número variável de argumentos usando o operador "..." (três pontos). Essas funções são conhecidas como funções variádicas, e elas permitem que você escreva código que pode lidar com um número desconhecido de argumentos.

Para criar uma função variádica, você usa o operador "..." no lugar do último parâmetro da função. Por exemplo, aqui está uma função chamada "soma" que calcula a soma de um número variável de inteiros:
```c
#include <stdio.h>
#include <stdarg.h>

int soma(int count, ...) {
    int result = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        result += va_arg(args, int);
    }
    va_end(args);
    return result;
}
```

No exemplo acima, a função "soma" tem dois parâmetros, o primeiro é o número de argumentos que serão passados para a função e o segundo é o operador "...". Dentro da função, usamos as funções da biblioteca stdarg.h para trabalhar com os argumentos variáveis. A função va_start() é usada para inicializar um ponteiro para os argumentos variáveis. A função va_arg() é usada para recuperar cada argumento, um por um. E finalmente, a função va_end() é usada para limpar o ponteiro de argumentos variáveis.

Aqui está um exemplo de como usar a função "soma":
```c
int main() {
    printf("Soma: %d\n", soma(3, 1, 2, 3));
    return 0;
}
```

Neste exemplo, a função soma é chamada com três argumentos, 1, 2 e 3 e imprime "Soma: 6" na tela.

É importante notar que, como as funções variadicas não possuem informações de tipo de seus argumentos, é necessário informar o tipo de cada argumento manualmente, ou usar funções específicas para cada tipo. E também é importante ter atenção com a ordem de chamada de va_start, va_arg e va_end para evitar possíveis erros.
