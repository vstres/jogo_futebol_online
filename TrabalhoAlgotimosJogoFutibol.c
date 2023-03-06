#include<stdio.h>
#include<stdlib.h>
int main()
{
 //Lista de Jogadores
 printf("*****************\n");
 printf("* Dados Jogador *\n");
 printf("*****************");
 int id = 1;
 char *nome1 ="Romario";
 char *sobrenome1 =" da Silva";
 int idade1 = 25;
 char *time1 = "Vasco";
 float valor = 90.000;
 
 printf("\n\nID: %i", id);
 printf("\nNome: %s%s", nome1, sobrenome1);
 printf("\nIdade: %i", idade1);
 printf("\nTime: %s", time1);
 printf("\nValor R$%.3f", valor);


 printf("\n\n\n*********************\n");
 printf("* Atributos Jogador *\n");
 printf("*********************");

 printf("\n\n\n");
 return 0;
}
