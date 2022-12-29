# Entrada e saída de dados

A linguagem C oferece várias maneiras de ler e escrever dados em um programa. Aqui estão alguns exemplos de como fazer isso usando as funções padrão da biblioteca de entrada e saída de dados (stdio.h):

* Para ler um valor inteiro do teclado, você pode usar a função **scanf**:
```c
#include <stdio.h>

int main() {
  int numero;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);
  printf("Voce digitou o numero %d.\n", numero);

  return 0;
}
```
* Para ler uma linha de texto do teclado, você pode usar a função fgets:
```c
#include <stdio.h>

int main() {
  char nome[100];

  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin);
  printf("Ola, %s", nome);

  return 0;
}
```
* Para escrever um valor inteiro na tela, você pode usar a função printf:
```c
#include <stdio.h>

int main() {
  int numero = 42;

  printf("O numero e %d.\n", numero);

  return 0;
}
```

# O scanf

A função **scanf** é uma das funções padrão da biblioteca de entrada e saída de dados (stdio.h) em C que permite ler dados de um fluxo de entrada, como o teclado ou um arquivo. Ela tem a seguinte sintaxe:
```c
int scanf(const char *format, ...);
```
O parâmetro format é uma string de formato que especifica o tipo de dados que deve ser lido. Ele é composto por especificadores de formato, que são caracteres precedidos por um sinal de porcentagem (%), e são usados para especificar o tipo de dado a ser lido. Alguns exemplos de especificadores de formato comuns são:
* **%d**: lê um número inteiro.
* **%f**: lê um número ponto flutuante (decimal).
* **%c**: lê um caractere.
* **%s*: lê uma string de caracteres.

Os demais parâmetros da função scanf são endereços de variáveis onde os dados lidos devem ser armazenados. Cada especificador de formato na string de formato deve ser seguido por um endereço de variável do tipo apropriado. Por exemplo:
```c
int numero;
float decimais;
char caractere;
char string[100];

scanf("%d %f %c %s", &numero, &decimais, &caractere, string);
```

A função scanf lê os dados da entrada padrão (normalmente o teclado) até encontrar um caractere de nova linha (\n) ou o final do arquivo (EOF). Ela retorna o número de itens lidos com sucesso, ou EOF se encontrar o final do arquivo ou um erro de leitura.

Aqui está um exemplo completo de como usar a função scanf para ler dados do teclado:
```c
#include <stdio.h>

int main() {
  int numero;
  float decimais;
  char caractere;
  char string[100];

  printf("Digite um numero inteiro, um numero decimal, um caractere e uma string: ");
  scanf("%d %f %c %s", &numero, &decimais, &caractere, string);
  printf("Voce digitou: %d %f %c %s\n", numero, decimais, caractere, string);

  return 0;
}
```

Com o scanf é possível fazer a leitura excluindo alguns caracteres ou números da entrada. Supondo que a entrada seja **07/09/2019** e você queira associar 07 a uma variável **dia**, 09 a variável **mes**  e **2019** ao ano. Você pode fazer isso de duas formas, primeiro usando '*' na formatação da string. Como abaixo:
```c
int dia, mes, ano;
scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
```
Aqui o caracter %c está como um * (asterisco ou estrela), assim %*c é utilizado para que o caracter não seja assimilado a nenhuma variável, %*d pode ser usado para excluir um inteiro, %*f para float e %*s para string. A segunda forma é a utilização do caracter a ser ignorado propriamente dito, como no exemplo abaixo:
```c
int dia, mes, ano;
scanf("%d/%d/%d", &dia, &mes, &ano);
```
## Limitar leitura

Para limitar a leitura de dados com a função **scanf**, você pode usar o especificador de largura de campo (*_width field_*). O especificador de largura de campo é um número inteiro opcional que vem depois do especificador de formato e especifica o número máximo de caracteres a serem lidos.

Por exemplo, se você quiser limitar a leitura de uma string a 10 caracteres, pode usar o especificador de formato %10s:
```c
#include <stdio.h>

int main() {
  char string[100];

  printf("Digite uma string (ate 10 caracteres): ");
  scanf("%10s", string);
  printf("Voce digitou a string '%s'\n", string);

  return 0;
}
```

Você também pode usar o especificador de largura de campo com outros especificadores de formato, como %d para limitar a leitura de um número inteiro a um determinado número de dígitos.

## Strings com scanf

Para ler uma string com espaços usando a função scanf, você pode usar o especificador de formato %[^\n] para ler todos os caracteres até encontrar um caractere de nova linha (\n). Isso permitirá que a string tenha espaços e outros caracteres de controle, como tabulação (\t):
```c
#include <stdio.h>

int main() {
  char string[100];

  printf("Digite uma string com espacos: ");
  scanf("%[^\n]", string);
  printf("Voce digitou a string '%s'\n", string);

  return 0;
}
```
%[^\n] usaria todos os caracteres em uma única linha como entrada. Você deve saber que, sempre que pressionamos Enter no teclado, o caractere “\n” é escrito no console. Aqui, “^” significa até que, ou até encontrar, e “\n” significa nova linha (ou a tecla Enter) e, finalmente, [^\n] significa receber entrada até a nova linha.

O scanf suporta na sua formatação algo similar a uma expressão regular, alguns exemplos de utilização:
* %[^5]: Para ler os caracteres até encontrar um 5, exemplo "abcd5efg", só será lido "abcd";
* %[0–9]: Lê apenas os símbolos numéricos, exemplo "123asd456", só será lido "123";
* %[a–z]: Irá ler apenas as letras minúsculas, exemplo "abcABC", será lido "abc";
* %[123]: Qualquer combinação initerrupta de 1, 2 e 3 será lida, exemplo "123321123456", será lido "123321123".

## Valor de retorno do scanf

A função **scanf** retorna o número de itens lidos com sucesso. Isso significa que, se a função conseguir ler todos os itens especificados na string de formato, ela retornará o número de itens lidos. Se a função encontrar o final do arquivo (EOF) ou um erro de leitura, ela retornará EOF.

Por exemplo, se você usar a função **scanf** para ler três valores inteiros da entrada padrão, a função retornará 3 se conseguir ler todos os valores com sucesso, ou EOF se encontrar o final do arquivo ou um erro de leitura:
```c
#include <stdio.h>

int main() {
  int a, b, c;
  int ret;

  ret = scanf("%d%d%d", &a, &b, &c);
  if (ret == 3) {
    printf("Voce digitou os valores %d %d %d\n", a, b, c);
  } else if (ret == EOF) {
    printf("Erro de leitura ou fim do arquivo\n");
  } else {
    printf("Foram lidos apenas %d valores\n", ret);
  }

  return 0;
}
```
