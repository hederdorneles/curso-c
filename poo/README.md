# Programação orientada a objetos em C

Em C, é possível implementar a programação orientada a objetos usando structs para definir objetos e funções para manipulá-los. Um struct é uma estrutura de dados que pode conter vários campos, cada um com um tipo específico. Os campos podem ser acessados e modificados através de ponteiros para o struct.

Para implementar encapsulamento, os campos de um struct podem ser declarados como privados e acessados através de funções "getter" e "setter" públicas. Isso permite que você controle o acesso aos dados do objeto e evite acessos diretos às variáveis privadas.

Para implementar herança, um struct pode ser definido como base para outro struct, herdando todos os seus campos e métodos. Isso permite que você crie estruturas de dados hierárquicas e reutilize código.

Para implementar polimorfismo, pode-se usar ponteiros para funções para permitir que diferentes objetos respondam de maneira diferente a uma mesma chamada de função. Isso é conseguido através de funções genéricas, que são capazes de trabalhar com diferentes tipos de objetos.

Embora o C seja uma linguagem estruturada e não possua recursos nativos para POO, é possível simular esses recursos através de programação avançada, incluindo o uso de ponteiros e funções genéricas. No entanto, é importante lembrar que essa abordagem pode ser mais complexa e difícil de entender e manter do que usar uma linguagem de programação puramente orientada a objetos.

Exemplo de implementação de uma classe "Pessoa" em C:
```c
#include <stdio.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int idade;
} Pessoa;

void setNome(Pessoa *pessoa, char *nome) {
    strcpy(pessoa->nome, nome);
}

void setIdade(Pessoa *pessoa, int idade) {
    pessoa->idade = idade;
}

char* getNome(Pessoa *pessoa) {
    return pessoa->nome;
}

int getIdade(Pessoa *pessoa) {
    return pessoa->idade;
}

int main() {
    Pessoa pessoa1;
    setNome(&pessoa1, "João");
    setIdade(&pessoa1, 30);

    printf("Nome: %s\n", getNome(&pessoa1));
    printf("Idade: %d\n", getIdade(&pessoa1));
    return 0;
}
```
