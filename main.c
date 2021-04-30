#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // manipulação de arquivos
  // 1. abrir o arquivo
  // 2. Manipular
  // 3. Fechar o arquivo
  FILE *arquivo;
  // r é o modo de leitura, nesse caso ele abre o arquivo se existir, se não retorna NULL.
  // a é o modo de escrita em cascata, se o arquivo nao existir ele cria.
  char c;
  arquivo = fopen("arquivo.txt","r");
  if (arquivo){
    while( c != EOF ){ //end of file
        printf("%c", c);
        c = getc(arquivo);
    }
  }else{
    printf("arquivo não encontrado!");
  }
  fclose(arquivo);
  return 0;
}