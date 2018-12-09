#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

#include "FUNCOES.h"
#include "STRUCTS.h"



void LeituraArquivos(){
	
	LeituraHospedes();  //Ler arquivo hospedes
    LeituraServicos(); //Ler arquivo servicos
    IniciarLista();   //Função que inicia a lista dos serviços pedido pelo hóspede
	
}

void cabecalho(){
	
	        system("cls");
	        printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
	        printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                     HOTEL CAMPINA                     |\n");
			printf ("\t\t|                    CONFORT PREMIUM                    |\n");
			printf ("\t\t|                                                       |\n");
     	    printf ("\t\t|=======================================================|\n");
     	    printf ("\t\t|                                                       |\n");

}


void menu(){
	
	int opcao;
	setlocale(LC_ALL, "Portuguese");
	
	do{
		system ("color 3F");
		system("cls");
			printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                      HOTEL CAMPINA                    |\n");
			printf ("\t\t|                     CONFORT PREMIUM                   |\n");
			printf ("\t\t|                                                       |\n");
     	    printf ("\t\t|=========================MENU==========================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                  [1] - Hóspedes.                      |\n");
			printf ("\t\t|                  [2] - Serviços.                      |\n");
			printf ("\t\t|                  [3] - Contratos.                     |\n");
			printf ("\t\t|                  [4] - Quartos Disponiveis.           |\n");
			printf ("\t\t|                  [0] - Sair.                          |\n");
		    printf ("\t\t|                                                       |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                 SELECIONE UMA OPÇÃO:                  |\n");												
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t              >  ");
						fflush(stdin);
						scanf("%d", &opcao);
						getchar();
        switch(opcao){
        	
        	case 1:
        		system("cls");
        		menuHospede();
        		break;
        	case 2:
        	    system("cls");
        		menuServicos();
        			break;
        	case 3:
        		system("cls");
        		menuContratos();
				break;
						
        	case 4:
        		system("cls");
        		Quartos();
        		break;
        	
        	}
        }while(opcao !=0);
      	
}


int main(){
	
	
	LeituraArquivos();
	menu();
	
		
}
