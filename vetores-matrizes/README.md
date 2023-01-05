# Vetores e Matrizes

Os vetores e matrizes são estruturas de dados comuns em C que permitem armazenar e manipular conjuntos de dados de forma eficiente. Aqui estão algumas informações básicas sobre como trabalhar com essas estruturas em C:

* Vetores: um vetor é um conjunto de elementos do mesmo tipo, armazenados em sequência na memória. Para criar um vetor em C, é preciso especificar o tipo de dados dos elementos e o tamanho do vetor. Por exemplo:
```c
int vetor[10];  // cria um vetor de 10 elementos do tipo int
```

Para acessar os elementos de um vetor, basta usar o índice do elemento entre colchetes. Os índices dos elementos de um vetor começam em 0 e vão até o tamanho do vetor menos 1. Por exemplo:
```c
vetor[0] = 10;  // atribui o valor 10 ao primeiro elemento do vetor
vetor[1] = 20;  // atribui o valor 20 ao segundo elemento do vetor
printf("%d\n", vetor[0]);  // imprime 10
```

* Matrizes: uma matriz é um conjunto de elementos do mesmo tipo, organizados em linhas e colunas. Para criar uma matriz em C, é preciso especificar o tipo de dados dos elementos e o tamanho da matriz em duas dimensões. Por exemplo:
```c
int matriz[10][10];  // cria uma matriz de 10x10 elementos do tipo int
```

Para acessar os elementos de uma matriz, basta usar dois índices entre colchetes. O primeiro índice se refere à linha e o segundo à coluna. Os índices das linhas e colunas de uma matriz também começam em 0 e vão até o tamanho da matriz menos 1. Por exemplo:
```c
matriz[0][0] = 10;  // atribui o valor 10 ao elemento na primeira linha e primeira coluna
matriz[1][1] = 20;  // atribui o valor 20 ao elemento na segunda linha e segunda coluna
printf("%d\n", matriz[0][0]);  // imprime 10
```

É possível também percorrer os elementos de um vetor ou matriz usando laços de repetição, como o **for**. Por exemplo:
```c
for (int i = 0; i < 10; i++) {
  for (int j = 0; j < 10; j++) {
    printf("%d ", matriz[i][j]);  // imprime cada elemento da matriz
  }
  printf("\n");  // pula uma linha ao final de cada linha da matriz
}
```

## Strings

Em C, uma string é uma sequência de caracteres terminada por um caractere nulo ('\0'). É possível armazenar uma string em um vetor de caracteres ou em um ponteiro para caracteres. Algumas informações importantes sobre strings em C são:

* Declaração de strings: para declarar uma string em C, basta declarar um vetor de caracteres e atribuir os caracteres da string às posições correspondentes do vetor. Por exemplo:
```c
char str1[] = "abc";  // declara uma string e atribui os caracteres "abc"
char str2[4] = {'a', 'b', 'c', '\0'};  // declara uma string e atribui os caracteres "abc"
```

Também é possível declarar um ponteiro para caracteres e atribuir o endereço de uma string literal a ele. Por exemplo:
```c
char *str3 = "abc";  // declara um ponteiro para caracteres e atribui o endereço da string literal "abc"
```

Operações com strings: o C oferece diversas funções para trabalhar com strings, como copiar, concatenar, comparar e procurar por caracteres ou substrings. Essas funções são definidas no arquivo de cabeçalho **string.h**. Algumas dessas funções já foram mencionadas em respostas anteriores. Se você tiver mais alguma dúvida ou quiser saber mais sobre essas funções, fique à vontade para perguntar.

O arquivo de cabeçalho **string.h** é um dos arquivos de cabeçalho padrão da linguagem C que fornece diversas funções para trabalhar com strings. Aqui estão algumas informações sobre algumas dessas funções:

* **strlen**: essa função retorna o tamanho de uma string, excluindo o caractere nulo ('\0') que indica o final da string. Por exemplo:
```c
#include <string.h>
#include <stdio.h>

int main(void) {
  char str[] = "abc";
  printf("%d\n", strlen(str));  // imprime 3
  return 0;
}
```

* **strcmp**: essa função compara duas strings. Ela recebe dois ponteiros para caracteres como argumentos e retorna um inteiro indicando se as strings são iguais, se a primeira é menor ou se a segunda é menor. Se as strings forem iguais, a função retorna 0. Se a primeira for menor, a função retorna um número negativo. Se a segunda for menor, a função retorna um número positivo. Por exemplo:
```c
#include <string.h>
#include <stdio.h>

int main(void) {
  char str1[] = "abc";
  char str2[] = "def";
  printf("%d\n", strcmp(str1, str2));  // imprime um número negativo
  printf("%d\n", strcmp(str2, str1));  // imprime um número positivo
  printf("%d\n", strcmp(str1, str1));  // imprime 0
  return 0;
}
```

* **strchr**: essa função procura por um determinado caractere em uma string. Ela recebe um ponteiro para caracteres e um caractere como argumentos, e retorna o endereço do primeiro caractere encontrado na string. Se o caractere não for encontrado, a função retorna NULL. Por exemplo:
```c
#include <string.h>
#include <stdio.h>

int main(void) {
  char str[] = "abcdef";
  printf("%p\n", strchr(str, 'c'));  // imprime o endereço do caractere 'c'
  printf("%p\n", strchr(str, 'x'));  // imprime NULL
  return 0;
}
```

* **strstr**: essa função procura por uma determinada string em outra string. Ela recebe dois ponteiros para caracteres como argumentos, e retorna o endereço da primeira ocorrência da string procurada na string de origem. Se a string procurada não for encontrada, a função retorna NULL. Por exemplo:
```c
#include <string.h>
#include <stdio.h>

int main(void) {
  char str1[] = "abcdef";
  char str2[] = "cd";
  printf("%p\n", strstr(str1, str2));  // imprime o endereço da string "cd"
  printf("%p\n", strstr(str1, "xy"));  // imprime NULL
  return 0;
}
```

## Vetores de strings

Vetor de strings fixo: para criar um vetor de strings fixo, basta declarar um vetor de ponteiros para caracteres e atribuir os endereços das strings a esses ponteiros. Por exemplo:
```c
#include <stdio.h>

int main(void) {
  char *strings[3] = {"abc", "def", "ghi"};
  for (int i = 0; i < 3; i++) {
    printf("%s\n", strings[i]);
  }
  return 0;
}
```
O código acima cria um vetor de strings com três strings fixas. Cada string é armazenada em um lugar diferente da memória, e o vetor strings armazena os endereços dessas strings. Esse é um exemplo de vetor de strings fixo.

Se você quiser criar um vetor de strings com espaço para strings que possam ser alteradas, basta declarar um vetor de caracteres e atribuir os endereços das primeiras posições de cada string ao vetor de ponteiros. Por exemplo:
```c
#include <stdio.h>

int main(void) {
  char str1[4] = "abc";
  char str2[4] = "def";
  char str3[4] = "ghi";
  char *strings[3] = {str1, str2, str3};
  for (int i = 0; i < 3; i++) {
    printf("%s\n", strings[i]);
  }
  return 0;
}
```

Nesse caso, cada string é armazenada em uma posição do vetor **strings**, e o vetor **strings** armazena os endereços dessas posições. Esse é um exemplo de vetor de strings com espaço para strings que possam ser alteradas.
