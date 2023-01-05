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
