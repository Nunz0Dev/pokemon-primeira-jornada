// Pokémon Primeira Jornada - Versão 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

int escolha, idade, opcao;
char nome [50], pokemonInicial [20];


printf ("==========================================================\n");

printf("\n===POKÉMON PRIMEIRA JORNADA===\n");

printf ("==========================================================\n");

printf("\n(MENU PRINCIPAL)\n");

printf("1. Iniciar jornada\n");
scanf("%d", &opcao);

printf ("==========================================================\n");

switch(opcao){

case 1:
       printf("Iniciando jornada...\n");
break;

default: 
       printf("Iniciando jornada... não tem como escapar...\n");
break;
}


printf("\n==========================================================\n");

printf("\nESCOLHA SEU INICIAL DA PRIMEIRA GERAÇÃO!\n");

printf("\n==========================================================\n");

printf("\n===Digite 1 para escolher Bulbasaur===\n");

printf("\n===Digite 2 para escolher Squirtle===\n");

printf("\n===Digite 3 para escolher Charmander===\n");

printf("\n===Digite qualquer número para escolher Pikachu===\n");


printf("\n==========================================================\n");

printf("\nDigite o número de sua escolha:\n");
scanf("%d", &escolha);

switch (escolha) {
case 1:
      strcpy(pokemonInicial, "Bulbasaur");
      printf("Você escolheu Bulbasaur!\n");
break;

case 2:
      strcpy(pokemonInicial, "Squirtle");
      printf("Você escolheu Squirtle!\n");
break;

case 3:
     strcpy(pokemonInicial, "Charmander");
     printf("Você escolheu Charmander!\n");
break;

default:
    strcpy(pokemonInicial, "Pikachu");
    printf("Você escolheu Pikachu!\n");
break;
}


printf("\n==========================================================\n");

printf("Digite seu nome: \n");
scanf("%s", nome);

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("\n==========================================================\n");


if (idade >=10 && idade <=100){
    printf("\nPARÁBENS VOCÊ ESTÁ PRONTO PARA SUA VIAGEM EM BUSCA DE SE TORNAR UM MESTRE POKÉMON!\n");
    printf("Seu nome é: %s\n", nome);
    printf("Sua idade é: %d\n", idade);
    printf("Seu pokémon será: %s\n", pokemonInicial);
} else{
    printf("INFELIZMENTE VOCÊ AINDA NÃO TEM IDADE SUFICIENTE PARA INICIAR SUA JORNADA!\n");
    printf("Sua idade é: %d\n", idade);
}

printf("\n==========================================================\n");


int decisao;
int chanceCaptura = 40;
int resultado;

if (idade >=10 && idade <=100){
    printf("=Durante o caminho você encontrou seu primeiro pokémon selvagem!=\n");

printf("1. Tente capturá-lo com uma pokebola!\n");
printf("2. Tente fugir!\n");
scanf("%d", &decisao);

printf("\n==========================================================\n");

switch(decisao){
case 1:
      printf("Você tenta capturar ele...\n");
srand(time(NULL)); 

resultado = rand() % 100 + 1;


printf("==Pokebola arremessada==\n");
printf("Tentando capturar...\n");
printf("Número sorteado: %d\n", resultado);

if (resultado <= chanceCaptura) {
    printf("Pokémon foi capturado e registrado em sua pokedex\n");
} else {
    printf("Pokémon escapou!\n");
}
    break;
case 2:
      printf("Você corre para longe do pokémon!");
    break;
default: 
      printf("O pokémon se assusta e corre!");
    break;


    }


  }

   return 0;

}