# Bibliotecas

Bibliotecas em C são arquivos que contêm um conjunto de funções e outras definições que podem ser compartilhadas e reutilizadas em diferentes programas. No Linux, existem duas maneiras principais de criar e usar bibliotecas em C: bibliotecas estáticas e bibliotecas compartilhadas (dinâmicas).
Bibliotecas estáticas

Uma biblioteca estática é um arquivo que contém um conjunto de funções que podem ser vinculadas diretamente ao programa na etapa de compilação. Isso significa que o código da biblioteca é incluído diretamente no programa executável. Para criar uma biblioteca estática, podemos seguir os seguintes passos:

- Criar um ou mais arquivos-fonte C com as funções que desejamos incluir na biblioteca. Por exemplo, vamos supor que queremos criar uma biblioteca chamada "minhabiblioteca" que contém duas funções, uma para calcular a soma de dois números e outra para imprimir uma mensagem na tela. Podemos criar os arquivos-fonte soma.c e mensagem.c com as seguintes funções:

**soma.c**:
```c
int soma(int a, int b) {
    return a + b;
}
```

**mensagem.c**:
```c
#include <stdio.h>

void imprimir_mensagem() {
    printf("Ola, esta eh uma mensagem da biblioteca!\n");
}
```

- Compilar os arquivos-fonte para gerar os arquivos-objeto correspondentes:
```bash
$ ar rcs minhalib.a soma.o mensagem.o
``` 

O comando ar é usado para criar e manipular arquivos de biblioteca. O parâmetro rcs significa "criar um novo arquivo (r), atualizar (c) ou criar um arquivo vazio se ele não existir (s), e gravar um índice para o arquivo (s)".

O arquivo minhalib.a é a biblioteca estática resultante. Ele contém as funções definidas nos arquivos-objeto soma.o e mensagem.o.

- Agora podemos criar um programa que usa as funções da biblioteca estática. Suponha que queremos criar um programa main.c que usa as funções soma e imprimir_mensagem da biblioteca. O código do programa pode ser assim:
**main.c**:
```c
#include <stdio.h>

// declarações das funções da biblioteca
int soma(int a, int b);
void imprimir_mensagem();

int main() {
    int resultado = soma(2, 3);
    printf("A soma de 2 e 3 eh %d\n", resultado);
    imprimir_mensagem();
    return 0;
}
```

Para compilar:
```bash
$ gcc -o nome_executavel main.c minhalib.a
```

Outra opção, podemos compilar direto, apenas passando os nomes dos fontes das libs para o gcc:
```bash
$ gcc -o nome_executavel main.c soma.c mensagem.c
```
