#include <stdio.h>
#include <string.h>
 
struct Dados {
   int   ID ;
   char  Nome[50];
   char  Sobrenome[50];
   int   Idade;
   char  Time[30];
   int   Valor;
};
 
void printDados( struct Dados DadosJogador );

int main( ) {

   struct Dados Dados1;        /* Declaramos Dados1 do tipo Dados */
   struct Dados Dados2;        /* Declaramos Dados2 do tipo Dados */
   
 
   /* Dados do Jogador 1 */
   Dados1.ID=1;
   strcpy( Dados1.Nome, "Alex");
   strcpy( Dados1.Sobrenome, "Lopes"); 
   Dados1.Idade = 19;
   strcpy( Dados1.Time, "Vasco");
   Dados1.Valor = 10000000/100;
  

  /* Dados do Jogador 2 */
   Dados2.ID=2;
   strcpy( Dados2.Nome, "Stella");
   strcpy( Dados2.Sobrenome, "Oliveira"); 
   Dados2.Idade = 19;
   strcpy( Dados2.Time, "Brasil");
   Dados2.Valor = 20000000/100;
   
 
   /* Mostrando as Informações do Jogador 1 */
   printDados( Dados1 );
   
   /* Mostrando as Informações do Jogador 1 */
   printDados( Dados2 );

   return 0;
}

void printDados( struct Dados DadosJogador ) {
   printf("DADOS DO JOGADOR 1");
   printf( "ID : %d\n", DadosJogador.ID);
   printf( "NOME : %s\n",  DadosJogador.Nome);
   printf( "Sobrenome : %s\n", DadosJogador.Sobrenome);
   printf( "Idade : %d\n",DadosJogador.Idade);
   printf( "Time : %s\n", DadosJogador.Time);
   printf( "Valor : %d\n", DadosJogador.Valor);
   printf("\n");
   
}
