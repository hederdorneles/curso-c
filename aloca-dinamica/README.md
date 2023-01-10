# Alocação dinâmica de memória em C

A alocação dinâmica de memória é uma técnica que permite reservar espaço na memória enquanto um programa está sendo executado. Ela é útil para trabalhar com estruturas de dados complexas, além de proporcionar mais flexibilidade e eficiência em programas.

A biblioteca padrão do C, __stdlib.h__, fornece duas funções para realizar alocação dinâmica de memória: __malloc__ e __calloc__. A função __malloc__ é usada para alocar um bloco de memória de tamanho especificado. A função __calloc__ é usada para alocar um bloco de memória de tamanho especificado e inicializá-lo com zero.

A sintaxe para usar essas funções é a seguinte:
```c
void* malloc(size_t size);
void* calloc(size_t nmemb, size_t size);
```
onde __size__ é o tamanho em bytes do bloco de memória a ser alocado e __nmemb__ é o número de elementos a serem alocados. A função __malloc__ retorna um ponteiro para o início do bloco de memória alocado, __calloc__ retorna o mesmo. Caso não seja possível alocar memória, essas funções retornam __NULL__.

Exemplo:
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int*) malloc(sizeof(int));
    *p = 10;
    printf("%d\n", *p);
    free(p);
    return 0;
}
```

É importante liberar a memória alocada dinamicamente quando ela não for mais necessária, usando a função __free(p)__. Não fazê-lo pode causar vazamentos de memória e comprometer o desempenho do sistema.

É importante lembrar que qualquer memória alocada dinamicamente deve ser liberada e fazer uso de variáveis ponteiros para guardar essas alocações é um boa prática.
