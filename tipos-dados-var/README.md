# Tipos de dados e variáveis em C

A linguagem C oferece uma variedade de tipos de dados que podem ser usados para armazenar diferentes tipos de informação em uma variável. Aqui estão alguns dos tipos de dados mais comuns em C:

* **int**: tipo de dados inteiro, que pode armazenar números inteiros positivos ou negativos.
* **float**: tipo de dados ponto flutuante, que pode armazenar números reais com uma precisão de aproximadamente 7 dígitos decimais.
* **double**: tipo de dados ponto flutuante de dupla precisão, que pode armazenar números reais com uma precisão de aproximadamente 15 dígitos decimais.
* **char**: tipo de dados de caractere, que pode armazenar um único caractere.
* **void**: tipo de dados especial que indica que uma função ou variável não tem tipo de retorno ou argumentos, respectivamente.

Para criar uma variável em C, basta usar a palavra-chave int, float, double, char ou outro tipo de dados seguida do nome da variável. Por exemplo:

```c
int idade;
float altura;
double saldo;
char genero;
void *ponteiro;
```

Essas variáveis podem ser usadas para armazenar valores de acordo com seus respectivos tipos de dados. Por exemplo:

```c
idade = 30;
altura = 1.75;
saldo = 1000.50;
genero = 'M';
ponteiro = NULL;
```

Além disso, é possível criar arrays de variáveis usando colchetes após o nome da variável. Por exemplo:
```c
int numeros[10]; // array de 10 elementos do tipo int
char palavra[20]; // array de 20 elementos do tipo char
```

# Nomes de variáveis

Em C, é importante seguir algumas regras ao nomear suas variáveis para evitar problemas de compilação ou de lógica no seu código. Aqui estão algumas dessas regras:

* O nome da variável deve começar com uma letra ou um underscore (_).
* O nome da variável não pode ser uma palavra-chave da linguagem C. Alguns exemplos de palavras-chave são **int**, **float**, **for**, **while** e **return**.
* O nome da variável deve ser composto apenas por letras, dígitos e underscores (_). Não é permitido usar caracteres especiais ou espaços.
* O nome da variável deve ser único dentro do escopo em que ela está declarada.

Além dessas regras básicas, existem algumas convenções de estilo que são comumente seguidas na programação em C. Uma dessas convenções é usar nomes de variáveis com letras minúsculas e underscores para separar palavras, como numero_de_contas ou saldo_atual. Isso é chamado de "snake case", outro formato conhecido é o "camel case" onde inicia-se o nome com minúsculo e se tiver multiplos nomes eles serão iniciados em maiúsculos, exemplo, primeiroNome.

Outra convenção comum é usar nomes de variáveis que sejam significativos e descritivos, para que o código seja mais legível e fácil de entender. Por exemplo, em vez de usar um nome de variável genérico como x ou temp, é mais útil usar um nome que reflita o propósito da variável, como numero_de_clientes ou temperatura_media.

# Escopo de variável

O escopo de uma variável é o conjunto de partes do código onde a variável é válida e pode ser acessada. Em C, existem três tipos principais de escopo de variável:

* Escopo global: uma variável com escopo global é declarada fora de todas as funções e é válida em todo o código. Ela pode ser acessada em qualquer parte do código, independentemente de onde ela foi declarada.
* Escopo de função: uma variável com escopo de função é declarada dentro de uma função e só é válida dentro dessa função. Ela não pode ser acessada fora da função onde foi declarada.
* Escopo de bloco: uma variável com escopo de bloco é declarada dentro de um bloco de código delimitado por chaves ({}). Ela só é válida dentro desse bloco e é destruída quando o controle é transferido para fora do bloco.

Aqui estão alguns exemplos de como os escopos de variável funcionam em C:
```c
#include <stdio.h>

int variavel_global; // variável global

int funcao() {
    int variavel_de_funcao; // variável com escopo de função

    variavel_global = 10; // acesso permitido
    variavel_de_funcao = 20; // acesso permitido

    {
        int variavel_de_bloco; // variável com escopo de bloco

        variavel_global = 30; // acesso permitido
        variavel_de_funcao = 40; // acesso permitido
        variavel_de_bloco = 50; // acesso permitido
    }

    variavel_global = 60; // acesso permitido
    variavel_de_funcao = 70;
    // acesso não permitido a variavel_de_bloco fora do seu escopo de bloco
    printf("variavel_global = %d\n", variavel_global);
    printf("variavel_de_funcao = %d\n", variavel_de_funcao);
}

int main() {
    variavel_global = 100; // acesso permitido
    // acesso não permitido a variavel_de_funcao fora de sua função
    // acesso não permitido a variavel_de_bloco fora de seu escopo de bloco

    printf("variavel_global = %d\n", variavel_global);

    return 0;
}
```

# Palavras reservadas

As palavras reservadas são termos especiais da linguagem C que não podem ser usados como nomes de variáveis ou funções. C tem 32 palavras reservadas. Elas têm um significado especial e são usadas para representar conceitos fundamentais da linguagem, como tipos de dados, operadores e estruturas de controle de fluxo.

Aqui estão algumas das palavras reservadas mais comuns em C:

    auto
    break
    case
    char
    const
    continue
    default
    do
    double
    else
    enum
    extern
    float
    for
    goto
    if
    int
    long
    register
    return
    short
    signed
    sizeof
    static
    struct
    switch
    typedef
    union
    unsigned
    void
    volatile
    while
