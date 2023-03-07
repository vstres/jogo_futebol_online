#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <cstdlib>

using namespace std;//gerar numeros ale

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
 int valor = 10000000/100;//jogador vale 100.000
 
 printf("\n\nID: %d", id);
 printf("\nNome: %s%s", nome1, sobrenome1);
 printf("\nIdade: %d", idade1);
 printf("\nTime: %s", time1);
 printf("\nValor R$%.3d", valor);


 printf("\n\n\n*********************\n");
 printf("* Atributos Jogador *\n");
 printf("*********************");
 
 
  srand(10);
    cout<<rand()<<endl;

    return 0;
 

 printf("\n\n\n");
 return 0;
}
