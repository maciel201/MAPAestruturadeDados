//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Constantes
#define tamanho 5
//Estrutura da Pilha
struct tpilha {
 int dados[tamanho];
 int ini;
 int fim;
};


//Variáveis globais
struct tpilha pilha;
int op;


//Protipação
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();







//Função principal
int main(){

 setlocale(LC_ALL, "Portuguese");

 
 
 int escolha=1;

// se a escolha for diferente de 5, ele continua... o que inicialmente é verdade
// pois escolha é igual a 1
while (escolha!=5)
{

printf("\n\n ----------------------- ");

printf("\n 1 - Inserir ");
printf("\n 2 -Remover ");
printf("\n 3 -  Esvaziar a fila ");
printf("\n 4 -  Mostrar o valor total dos livros");
printf("\n 5 - Fechar Programa ");
printf("\n\n Escolha uma opcao: ");
scanf("%d",&escolha);

}
// estrutura switch
switch (escolha) {
	

case 1:
{



//Adicionar um elemento no final da Pilha
void pilha_entrar(){
 if (pilha.fim == tamanho) {
 printf("\nA pilha está cheia, impossível empilhar!\n\n");
 system("pause");
 }
 else {
 printf("\nDigite o valor a ser empilhado: ");
 scanf("%s", &pilha.dados[pilha.fim]);
 pilha.fim++;
 }
}


break;
}

case 2:
{
 system("cls");
//Retirar o último elemento da Pilha
void pilha_sair() {
 if (pilha.ini == pilha.fim) {
 printf("\nA pilha está vazia, impossível desempilhar!\n\n");
 system("pause");
 }
 else {
 pilha.dados[pilha.fim-1] = 0;
 pilha.fim--;
 }
}


break;
}

case 3:
{
 system("cls");
//Mostrar o conteúdo da Pilha
void pilha_mostrar() {
 int i;
 printf("[ ");
 for (i = 0; i < tamanho; i++) {
 printf("%s ", pilha.dados[i]);
 }
 printf("]\n\n");
}



break;
}

case 4:
{
 system("cls");
//fechar  o  programa


break;
}

// opção padrão
default:
{
 system("cls");

// se for escolhida a opção 5, ele pula o while utilizando continue para isso
if( escolha==5)
{
continue;
}
// caso o usuário digite um numero acima de 5, ele irá informar que nao existe essa opção
printf("\n\n Nenhuma opcao foi escolhida ");
break;
 
 
 
 
 

 

}


}

}




