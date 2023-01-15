# Intodução

A linguagem C é uma linguagem de programação de nível relativamente baixo que foi criada na década de 1970 para ser usada em sistemas operacionais e outros sistemas de baixo nível. Ela é conhecida por ser uma linguagem eficiente e versátil, sendo amplamente usada em muitos campos diferentes, como sistemas operacionais, jogos, aplicativos de desktop e dispositivos embarcados.

A programação em geral é o ato de escrever código para que um computador execute tarefas específicas. Isso envolve a criação de algoritmos, que são conjuntos de passos para resolver um problema ou realizar uma tarefa. A programação é uma habilidade importante para muitos campos, pois permite que você crie software e sistemas complexos para resolver problemas reais.

Para começar a programar em C, você vai precisar de um compilador C instalado em seu computador. Existem muitas opções de compiladores C disponíveis, mas alguns dos mais populares são o GCC (GNU Compiler Collection) e o Microsoft Visual C++. Além disso, você vai precisar de um editor de código ou um ambiente de desenvolvimento integrado (IDE) para escrever e editar seu código. Alguns exemplos de editores de código populares são o Sublime Text, o Visual Studio Code e o Atom.

Uma vez que você tenha um compilador e um editor de código instalados, você pode começar a escrever código em C. Aqui está um exemplo básico de um programa em C que imprime "Olá, mundo!" na tela:

```c
#include <stdio.h>

int main(void) {
  printf("Olá, mundo!\n");
  return 0;
}

```

Para compilar esse programa, basta abrir o terminal e usar o comando gcc seguido do nome do arquivo do seu programa. Por exemplo:

```bash
$ gcc meuPrograma.c
```

Isso irá gerar um arquivo executável chamado a.out, que você pode executar usando o comando ./a.out. Se tudo correr bem, isso deve imprimir "Olá, mundo!" na tela.

Para gerar um executável a partir de um programa em C usando o compilador GCC, basta usar o comando gcc seguido do nome do arquivo de código fonte e da opção -o seguida do nome que você quer dar ao arquivo executável.

Por exemplo, se você tiver um arquivo de código fonte chamado meuPrograma.c, você pode gerar um arquivo executável chamado meuPrograma usando o seguinte comando:

```bash
$ gcc meuPrograma.c -o meuPrograma
```

# Editar seu código

Não é necessário usar um editor de texto puro para escrever código em C. Existem muitos ambientes de desenvolvimento integrado (IDE) que oferecem muitos recursos adicionais que podem tornar o processo de escrever e depurar código em C mais fácil. Alguns exemplos de IDE populares para C são o Microsoft Visual Studio, o Eclipse e o NetBeans. Uma opção que não exige a instalação use a IDE online [Replit](https://replit.com/).

No entanto, se você prefere usar um editor de texto puro, existem muitas opções disponíveis. Alguns exemplos de editores de texto puros populares são o Sublime Text, o Visual Studio Code e o Atom. Esses editores oferecem recursos como realce de sintaxe, pesquisa e substituição, e integração com compiladores e ferramentas de depuração.

Independentemente do editor de texto que você escolher, é importante se certificar de que ele tenha suporte para a linguagem C e ofereça os recursos que você precisa para escrever e depurar seu código de forma eficiente.
