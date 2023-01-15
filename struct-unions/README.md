# Structs e unions em C

Structs e unions são ambos usados em C para definir tipos de dados personalizados.

Uma struct é uma coleção de uma ou mais variáveis, possivelmente de tipos diferentes, agrupadas sob um único nome. Cada variável em uma struct é chamada de membro. Structs são usadas para representar estruturas de dados complexas, como um ponto no espaço 3D (x, y, z) ou uma data (dia, mês, ano).

Uma union é semelhante a uma struct, mas todos os seus membros compartilham a mesma localização de memória. Isso significa que somente um membro pode conter um valor de cada vez. As unions são usadas para economizar memória usando o mesmo armazenamento para múltiplas variáveis, mas em momentos diferentes.

Aqui está um exemplo de como definir e usar uma struct em C:
```c
struct ponto {
    int x;
    int y;
};

struct ponto p1;
p1.x = 3;
p1.y = 4;
```

Aqui está um exemplo de como definir e usar uma union em C: [código completo](struct-unions/ex_union1.c)

```c
union data {
    int i;
    float f;
    char str[20];
};

union data u;
u.i = 10;
printf("%d\n", u.i);
u.f = 220.5;
printf("%f\n", u.f);
strcpy(u.str, "Programação C");
printf("%s\n", u.str);
```


Note que neste exemplo, a union "data" tem três tipos diferentes de variáveis, "int", "float" e "char".

Além de definir novos tipos de dados, structs e unions também podem ser usadas como parâmetros de funções e como valores de retorno. Isso permite que você crie funções que trabalhem com dados complexos de uma maneira organizada e fácil de entender.

Você também pode criar arrays de structs ou unions, o que é útil quando você precisa armazenar múltiplos valores desse tipo.

Além disso, é possível ter structs dentro de structs ou unions dentro de unions, chamadas de "aninhamento", para representar estruturas de dados ainda mais complexas.

Por fim, é importante notar que ao acessar os membros de uma struct ou union, é preciso usar o operador de ponto ".". Ao acessar um membro de uma struct ou union que está dentro de outra struct ou union, é preciso usar o operador de ponto "." várias vezes.

A principal diferença entre structs e unions é como eles armazenam dados.

Uma struct é uma coleção de variáveis, cada uma com o seu próprio espaço de memória. Isso significa que cada membro da struct pode conter um valor diferente ao mesmo tempo.

Já uma union é uma coleção de variáveis que compartilham o mesmo espaço de memória. Isso significa que somente um membro da union pode conter um valor a qualquer momento, os outros membros não pode armazenar valor.

Outra diferença é que structs são mais comuns e amplamente utilizadas para representar estruturas de dados complexas, enquanto unions são usadas principalmente quando é necessário economizar memória, permitindo acessar diferentes tipos de dados usando a mesma variável.
