# Guia de Programação Limpa e Organizada

## 1. Nomenclatura de Variáveis:

**O que é:** Refere-se à prática de escolher nomes significativos e consistentes para variáveis em um programa.

**Como usar:** Utilize o Camel Case como método exclusivo de nomenclatura para variáveis, começando com letra minúscula e cada palavra subsequente começando com letra maiúscula.

``` 
int idadeUsuario;
float salarioMensal;
```

## 2. Indentação:

**O que é:** Indentação refere-se à organização do código por meio de espaços ou tabs, para destacar a estrutura e facilitar a leitura.

**Como usar:** Mantenha um padrão consistente de indentação, geralmente usando espaços ou tabs (geralmente 2 ou 4 espaços) para cada nível de recuo.

Código sem identação: 
```
#include <iostream>
int main() {
int num = 5;
if (num > 0) {
std::cout << "Número positivo\n";
} else {
std::cout << "Número não positivo\n";
}
return 0;
}
```

Código com identação: 
```
#include <iostream>

int main() {
    int num = 5;
    if (num > 0) {
        printf("Número positivo\n");
    } else {
        printf("Número não positivo\n");
    }
    return 0;
}

```

## 3. Regras de Declaração de Variáveis, Funções e Métodos:

**Declaração de Funções antes do Uso:** Declare as funções antes de usá-las para evitar erros de compilação.\
**Atribuição de Valores a Funções antes de Tratá-las:** Atribua valores a funções antes de usá-las para evitar comportamentos indefinidos.\
**Funções devem retornar valores:** As funções devem, em geral, apenas retornar valores. A impressão desses valores deve ser feita na função main, exceto em casos mais complexos.

```
#include <iostream>

// Declaração da função antes do uso
int soma(int a, int b);

int main() {
    int x = 5;
    int y = 3;
    
    // Atribuição de valor à função antes de tratá-la
    int resultado = soma(x, y);
    
    // Impressão do valor retornado pela função
    printf("A soma é: %d\n", resultado);
    
    return 0;
}

// Definição da função
int soma(int a, int b) {
    return a + b;
}
```

## 4. Limpeza de Código:

**Eliminar Linhas, Variáveis e Funções Não Usadas:** Remova qualquer código que não seja utilizado para manter o código limpo e legível.\
**Eliminar Partes Redundantes do Código:** Evite redundância no código, como repetição de instruções ou lógica desnecessária.\
**Manter o Código Bem Comentado:** Adicione comentários concisos e claros para explicar o propósito de blocos de código, tornando-o mais compreensível para outros programadores.

```
#include <iostream>

int main() {
    int num = 5;
    if (num > 0) {
        printf("Número positivo\n");
    } else {
        printf("Número não positivo\n");
    }
    return 0;
}
```

## 5. Comentários Concisos e Claros:

**O que são:** Comentários são trechos de texto dentro do código fonte que não são executados pelo compilador, servindo para explicar o propósito ou funcionamento de partes do código.\
**Como usar:** Adicione comentários que explicitem o que o código está fazendo, evitando excesso de detalhes óbvios e priorizando informações relevantes para a compreensão do algoritmo.

```
#include <iostream>

int main() {
    int num = 5; // Define o valor da variável 'num'
    if (num > 0) { // Verifica se 'num' é positivo
        printf("Número positivo\n"); // Imprime mensagem se 'num' for positivo
    } else {
        printf("Número não positivo\n"); // Imprime mensagem se 'num' não for positivo
    }
    return 0;
}

```
