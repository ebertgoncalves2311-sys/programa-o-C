#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50
#define TAM_STRING 100

struch Livro { 
    char nome [TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

void limparBufferEntrada() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

struct Livro biblioteca[MAX_LIVROS];
int totalLivros = 0;
int opcao;

do {

printf("==========================================/n")
printf("BIBLIOTECA - PARTE 1")












}
}