#include <stdlib.h>   // Para manipulação de memória 
#include <stdio.h>    // Para interação com o console
#include <string.h>   // Para manipulação de strings
using namespace std;
// #TODO: 1. Definir estrutura de dados que irá compor a lista;
// #TODO: 2. Montar função que irá inicializar a lista;
// #TODO: 3. Montar função que irá pesquisar itens na lista;
// #TODO: 3. Montar função que irá inserir itens na lista;
// #TODO: 4. Montar função que irá remover itens na lista;
int main () {
  struct aluno {
    char nome[16];
    int matricula;
    aluno * prox;
  };
  aluno a;
  strcpy(a.nome,"Daniel");
  a.matricula = 123;
  printf("NOME: %s\n",a.nome);
  printf("MATRICULA: %d\n",a.matricula);
  printf("ENDEREÇO: %p\n",&a);
  return 0;
}