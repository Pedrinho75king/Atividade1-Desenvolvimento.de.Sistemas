#include <stdio.h>  
/* 
#include <stdio.h>
Serve para incluir a biblioteca padrão de entrada e saída.
Ela é necessária para usar funções como printf() e scanf().
Sem ela, o compilador não reconhece essas funções.
*/

 int main() {  
/* 
O programa começa na função main().
Independentemente de onde ela esteja no código,
a execução sempre inicia por ela.
*/

    printf("Hello World!\n");  
    /*
    O printf imprime uma mensagem na tela.
    O \n é um caractere especial que faz a quebra de linha.
    Se remover o \n, o cursor não pula para a próxima linha,
    e a próxima saída ficará na mesma linha.
    */

    return 0;  
    /*
    O return 0 indica que o programa terminou corretamente.
    Se remover o return 0:
    - Em C moderno, o compilador assume return 0 automaticamente.
    - Em versões antigas, isso pode gerar comportamento indefinido
      ou avisos de compilação.
    */
}