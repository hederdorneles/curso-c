A linguagem C fornece uma biblioteca padrão, __stdio.h__, para lidar com arquivos. Ela inclui várias funções que permitem abrir, ler, escrever e fechar arquivos.

Para abrir um arquivo, você pode usar a função __fopen()__, que recebe como argumentos o nome do arquivo e o modo de abertura. O modo de abertura pode ser "r" para abrir um arquivo para leitura, "w" para abrir um arquivo para escrita (se o arquivo já existir, ele será sobrescrito) e "a" para abrir um arquivo para escrita (se o arquivo já existir, as novas informações serão adicionadas ao final do arquivo).

Exemplo de abertura de arquivo para escrita:
```c
#include <stdio.h>

int main() {
    FILE *fp;    // fp File Pointer
    fp = fopen("arquivo.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fclose(fp);
}
```

Para escrever em um arquivo, você pode usar a função __fprintf()__, que é semelhante à função __printf()__, mas escreve os dados em um arquivo em vez de escrever na saída padrão.

Exemplo de escrita em arquivo:
```c
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("arquivo.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fprintf(fp, "Testando escrita em arquivo.");
    fclose(fp);
}
```

Para ler de um arquivo, você pode usar a função __fscanf()__, que é semelhante à função __scanf()__, mas lê os dados de um arquivo em vez de ler da entrada padrão.

Exemplo de leitura de arquivo:
```c
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("arquivo.txt", "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    int num;
    fscanf(fp, "%d", &num);
    printf("%d", num);
    fclose(fp)
}
```

Finalmente, é importante fechar o arquivo depois de terminar de usá-lo, usando a função __fclose()__.

Além dessas funções, há outras como __fread(), fwrite(), fgets(), fputs()__ para ler ou escrever em arquivos de forma mais avançada. Além disso, é possível verificar o status do arquivo usando a função __feof()__ ou __ferror()__.

## Arquivos binários

Além de arquivos de texto, a linguagem C também permite trabalhar com arquivos binários. Os arquivos binários são arquivos que contêm dados brutos, sem formatação específica, e podem conter qualquer tipo de dado, como números inteiros, ponteiros, estruturas, etc.

Para trabalhar com arquivos binários, você pode usar as mesmas funções que usei para trabalhar com arquivos de texto, como fopen(), fread(), fwrite(), fclose(), mas usando "rb" ou "wb" como modo de abertura para arquivos binários.

Exemplo de escrita em arquivo binário:
```c
#include <stdio.h>

int main() {
    FILE *fp;
    int num = 10;
    fp = fopen("arquivo.bin", "wb");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fwrite(&num, sizeof(int), 1, fp);
    fclose(fp);
    return 0;
}
```

E para ler arquivo binário:
```c
#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    fp = fopen("arquivo.bin", "rb");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fread(&num, sizeof(int), 1, fp);
    printf("%d", num);
    fclose(fp);
    return 0;
}
```

É importante observar que é fundamental conhecer a estrutura dos dados que você está salvando em um arquivo binário, para saber como lê-los posteriormente. Além disso, é importante considerar a endianness dos seus dados, pois pode haver problemas com os dados armazenados em arquivos binários, se você estiver compilando e executando seu programa em diferentes arquiteturas.

Em alguns casos, ao ler ou escrever dados em arquivos binários, é necessário fazer conversões de formato, para assegurar que os dados são lidos e escritos corretamente.

Além de __fread()__ e __fwrite()__, existem outras funções para ler e escrever em arquivos binários, como __fgetc()__ e __fputc()__, que permitem ler e escrever um único caractere de cada vez. Também existe __fseek()__ que permite posicionar o cursor de leitura ou escrita em um arquivo binário em uma posição específica.

Além disso, você pode usar __ftell()__ para verificar a posição atual do cursor no arquivo e __rewind()__ para posicioná-lo no início do arquivo.

Além disso, há outras formas de armazenar dados em arquivos em c, como o uso de memória mmap para trabalhar com arquivos de forma mais eficiente, principalmente quando se trata de arquivos grandes.

Outra coisa importante é a segurança ao trabalhar com arquivos, você deve ter precaução ao lidar com arquivos, evitando buffer overflow e outras vulnerabilidades de segurança. E também tomar cuidado ao lidar com arquivos temporários, para evitar problemas como roubos de informações ou corrupção de dados.
