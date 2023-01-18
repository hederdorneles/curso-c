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
