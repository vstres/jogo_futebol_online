#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define SIZE 100
#define NUMS_TO_GENERATE 1




 // Tipo Boleano 
/*typedef Força_de_Vontade; {
  false,
  true
}
typedef Criatividade; {
  false,
  true
}
typedef Lideranca; {
  false,
  true
}*/

//Declaramos as Variaveis Dados e Atributos do jogador
struct Dados {
   int   ID ;
   char  Nome[50];
   char  Sobrenome[50];
   int   Idade;
   char  Time[30];
   int   Valor;
   char  Informacoes[100];
   char  Espaco[10];

   //Variaveis dos Atributos
   char Forca[20];
   char Velocidade[20];
   char Resistencia[20];
    //bool Força_de_Vontade;
   //bool Criatividade;
  //Bool Lideranca;
 //Char Posição[5];
//bool Machucado;
};
 
void printDados( struct Dados DadosJogador );

int main( ) {
    
    //Gerando Números Aleatórios
    srand(time(NULL));
    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        //printf("%d\n", rand() % MAX);
    }

    
    

   struct Dados Dados1;        /* Declaramos Dados1 do tipo Dados */
   struct Dados Dados2;        /* Declaramos Dados2 do tipo Dados */
   
 
   /* Dados do Jogador 1 */
   strcpy( Dados1.Informacoes, "DADOS DO JOGADOR 1");
   Dados1.ID=1;
   strcpy( Dados1.Nome, "Alex");
   strcpy( Dados1.Sobrenome, "Lopes"); 
   Dados1.Idade = 19;
   strcpy( Dados1.Time, "Vasco");
   Dados1.Valor = 10000000/100;
   strcpy( Dados1.Espaco, "\n");

// Dados dos atributos Jogador 1
   strcpy( Dados1.Forca, "");
   strcpy( Dados1.Velocidade, "");
   strcpy( Dados1.Resistencia, "");

//Posição[5]{Gol, Defesa, Meio, Ataque, Líbero}; "Array"

  /* Dados do Jogador 2 */
  strcpy( Dados2.Informacoes, "DADOS DO JOGADOR 2");
   Dados2.ID=2;
   strcpy( Dados2.Nome, "Stella");
   strcpy( Dados2.Sobrenome, "Oliveira"); 
   Dados2.Idade = 19;
   strcpy( Dados2.Time, "Brasil");
   Dados2.Valor = 20000000/100;
   strcpy( Dados2.Espaco, "\n");
   
   // Dados do atributos Jogador 2
   strcpy( Dados2.Forca, "");
   strcpy( Dados2.Velocidade, "");
   strcpy( Dados2.Resistencia, "");
 
   /* Mostrando as Informações do Jogador 1 */
   printDados( Dados1 );
   
   /* Mostrando as Informações do Jogador 2 */
   printDados( Dados2 );

   return 0;
}

void printDados( struct Dados DadosJogador ) {
   printf( "%s\n ", DadosJogador.Informacoes);
   printf( "ID: %d\n ", DadosJogador.ID);
   printf( "NOME: %s\n ",  DadosJogador.Nome);
   printf( "Sobrenome: %s\n ", DadosJogador.Sobrenome);
   printf( "Idade: %d\n ",DadosJogador.Idade);
   printf( "Time: %s\n ", DadosJogador.Time);
   printf( "Valor: %d\n ", DadosJogador.Valor);
   printf( "Força: %s %d \n ",DadosJogador.Forca,rand() % MAX);
   printf( "Velocidade: %s %d \n ",DadosJogador.Velocidade,rand() % MAX);
   printf( "Resistencia: %s %d \n ",DadosJogador.Resistencia,rand() % MAX);
   
   printf("%s\n", DadosJogador.Espaco);
   
   
}
