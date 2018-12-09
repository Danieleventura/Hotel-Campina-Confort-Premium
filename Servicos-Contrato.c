#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

#include "STRUCTS.h"
#include "FUNCOES.h"


//VARIAVEIS GLOBAIS
int i = 0;
int NServico = 0; // contador total de serviços

//VARIAVEIS DOS QUARTOS//
	int presidencial = 5; //quarto Presidencial
	int L_simples = 5;    //quarto Luxo Simples
	int L_duplo = 15;    //quarto  Luxo Duplo
	int L_triplo = 20;   //quarto  Luxo Triplo
	int Exe_simples = 5; //quarto  Executivo Simples
	int Exe_duplo =15;   //quarto  Executivo Duplo
	int Exe_triplo =20;  //quarto  Executivo Triplo 

	
char servicosfixos[7][25]={"Piscina", "Sauna", "Academia", "Playgroud", "Babysitter", "Aluguel de Carros",  "Wifi"} ; //Serviços fixos do hotel
float preco[7]={00.00, 00.00, 00.00, 00.00, 45.00, 60.00  , 00.00}; //Preços dos serviços fixos
//===================================================================================================================//


						//FUNÇOES CONTRATOS//
						
						

void IniciarLista(){ //FUNÇÃO PARA INICIAR LISTAS DOS SERVIÇOS ADQUIRIDOS PELOS HÓSPEDES

	
	for(i=0; i<MAX; i++){
		
		lista[i].nElem = 0;
		
	}

 }

 
void Restaurante(int posicao){ //FUNÇÃO SERVIÇO RESTAURANTE DELÍCIAS DA SERRA
	
	char pedido[200];
	float total;
	
	system("cls");
	printf ("\t\t                                                      	  \n");
    printf ("\t\t                                         	              \n");
	printf ("\t\t|=======================================================|\n");
	printf ("\t\t|                                                       |\n");
	printf ("\t\t|                                                       |\n");
	printf ("\t\t|                     RESTAURANTE                       |\n");
	printf ("\t\t|===================DELÍCIAS DA SERRA===================|\n");
	printf ("\t\t|                                                       |\n");
	printf("\t\tQual foi o pedido?  ");
	fflush(stdin);
	gets(pedido);
	
	printf("\t\tTotal: R$ ");
	fflush(stdin);
	scanf("%f", &total);
	

		Hospede[posicao].total = Hospede[posicao].total + total;
		
		strcpy(lista[posicao].servico[lista[posicao].nElem],"Restaurante Delícias da Serra");
				    
	    lista[posicao].preco[lista[posicao].nElem] = total;
				        
		lista[posicao].nElem++;
				
		printf(" \n\n");
	    printf(" \t\tSERVIÇO RESTAURANTE DELÍCIAS DA SERRA ADICIONADO !!\n");
	    printf("\t\t---------------------------------------------------------\n");
		getch();
					}		


void AluguelCarros(int posicao){ //FUNÇÃO SERVIÇO ALUGUEL DE CARROS
	
	int opcao;
	int dias;
	
	do{
			  
  			system("cls");

		    printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                   ALUGUEL DE CARROS                   |\n");
			printf ("\t\t|                                                       |\n");
     	    printf ("\t\t|=========================MENU==========================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|             [1] - Automóvel Luxo       - R$ 100,00    |\n");
			printf ("\t\t|             [2] - Automóvel Executivo  - R$ 60,00     |\n");
			printf ("\t\t|             [3] - Serviço Tanque Cheio - R$ 300,00    |\n");
			printf ("\t\t|             [4] - Carro Assegurado     - R$ 250,00    |\n");
			printf ("\t\t|             [0] - Voltar.                             |\n");
		    printf ("\t\t|                                                       |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                 SELECIONE UMA OPÇÃO:                  |\n");												
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t              >  ");
						fflush(stdin);
						scanf("%d", &opcao);
						
		  switch (opcao) {
		  
		    case 1:	
				   	   	system("cls");
		   				printf ("\t\t                                                      	  \n");
						printf ("\t\t                                         	              \n");
						printf ("\t\t|=======================================================|\n");
						printf ("\t\t|                                                       |\n");
						printf ("\t\t|                   AUTOMÓVEL LUXO                      |\n");
						printf ("\t\t|                                                       |\n");
						printf ("\t\t|=======================================================|\n");
						printf ("\t\t|                                                       |\n");
		   				
		   				printf ("\t\tTotal de dias : ");
						fflush(stdin);
						scanf("%d", &dias);
						
						dias = dias * 100,00;
						
			        	Hospede[posicao].total = Hospede[posicao].total + dias;
			        	
			        	strcpy(lista[posicao].servico[lista[posicao].nElem],"Automóvel Luxo");
				        
				        lista[posicao].preco[lista[posicao].nElem] = dias;
				        
				        lista[posicao].nElem++;
				
						printf(" \n\n");
						printf(" \t\tAUTOMÓVEL LUXO ADICIONADO !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch(); 
		    break;
		
		    case 2:
		    			system("cls");
		   				printf ("\t\t                                                      	  \n");
						printf ("\t\t                                         	              \n");
						printf ("\t\t|=======================================================|\n");
						printf ("\t\t|                                                       |\n");
						printf ("\t\t|                   AUTOMÓVEL EXECUTIVO                 |\n");
						printf ("\t\t|                                                       |\n");
						printf ("\t\t|=======================================================|\n");
						printf ("\t\t|                                                       |\n");
		    			
   						printf ("\t\tTotal de dias : ");
						fflush(stdin);
						scanf("%d", &dias);
						
						dias = dias * 60,00;
		    			
		    	        Hospede[posicao].total = Hospede[posicao].total + dias;
		    	        
		    	        strcpy(lista[posicao].servico[lista[posicao].nElem],"Automóvel Executivo");
				        
				        lista[posicao].preco[lista[posicao].nElem] = dias;
				        
				        lista[posicao].nElem++;
				
						printf(" \n\n");
						printf(" \t\tAUTOMÓVEL EXECUTIVO ADICIONADO !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch(); 
		    break;
		
			case 3:
				
				        system("cls");
		   				printf ("\t\t                                                      	  \n");
						printf ("\t\t                                         	              \n");
						printf ("\t\t|=======================================================|\n");
						printf ("\t\t|                                                       |\n");
						printf ("\t\t|                   ALUGUEL DE CARROS                   |\n");
						printf ("\t\t|                                                       |\n");
						printf ("\t\t|=======================================================|\n");
						printf ("\t\t|                                                       |\n");
		    	
				    	Hospede[posicao].total = Hospede[posicao].total + 300,00;
				    	
				    	strcpy(lista[posicao].servico[lista[posicao].nElem],"Serviço Tanque Cheio");
						        
				        lista[posicao].preco[lista[posicao].nElem] = 300,00;
						        
				        lista[posicao].nElem++;
				
						printf(" \n\n");
						printf(" \t\tTANQUE CHEIO ADICIONADO !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch(); 
		    break;
		
			case 4:
		    		    system("cls");
		   				printf ("\t\t                                                      	  \n");
						printf ("\t\t                                         	              \n");
						printf ("\t\t|=======================================================|\n");
						printf ("\t\t|                                                       |\n");
						printf ("\t\t|                   ALUGUEL DE CARROS                   |\n");
						printf ("\t\t|                                                       |\n");
						printf ("\t\t|=======================================================|\n");
						printf ("\t\t|                                                       |\n");
		    		
				    	Hospede[posicao].total = Hospede[posicao].total + 250,00;
				    	
				    	strcpy(lista[posicao].servico[lista[posicao].nElem],"Carro Assegurado");
						        
				        lista[posicao].preco[lista[posicao].nElem] = 250,00;
						        
				        lista[posicao].nElem++;
				
						printf(" \n\n");
						printf("\t\t SEGURO ADICIONADO !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch(); 
		    break;
		    
		  }
		   
		}while( opcao !=0);
		  		getchar();
}


void AdicionarServico(int posicao){//FUNÇÃO ADICIONAR UM SERVIÇO A FATURA
	
	char nome[30];
	int hora;
	
	listarServico ();
	
	printf("\t\t---------------------------------------------------------\n");
	printf("\t\tQual serviço deseja adicionar?  ");
	fflush(stdin);
	gets(nome);
	
	
	for(i=0;i<MAX;i++){
		
            if(strcasecmp(servico[i].nome, nome)==0){
			  		
			    if( servico[i].NDisponivel == 0){
							
							cabecalho();
							printf("\t\t SERVIÇO INDISPONIVEL !!\n");
							printf("\t\t---------------------------------------------------------\n");
							getch();
						
					}
					
					else{
						servico[i].NDisponivel = servico[i].NDisponivel - 1;
					
			        	Hospede[posicao].total = Hospede[posicao].total + servico[i].preco;
			        	
				        strcpy(lista[posicao].servico[lista[posicao].nElem],servico[i].nome);
				        
				        lista[posicao].preco[lista[posicao].nElem] = servico[i].preco;
				        
				        lista[posicao].nElem++;
				
						cabecalho();
						printf("\t\tSERVICO ADICIONADO !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch();
					}		
		   }
		    break;
			getchar();
		      
		}


    for(i=0;i<7;i++){
  
  	  	  if(strcasecmp(servicosfixos[i], nome)==0){
  	  	  	
  		          if(strcasecmp("babysitter", nome)==0){
						  
						  cabecalho();
						  printf("\t\tQuantas horas sera o serviço de Babysitter?  ");
		                  fflush(stdin);
						  scanf("%d", &hora);
						  
						  Hospede[posicao].total =Hospede[posicao].total + (preco[i]*hora);
						  
						  strcpy(lista[posicao].servico[lista[posicao].nElem],"Babysitter");
				        
				          lista[posicao].preco[lista[posicao].nElem] = (preco[i]*hora);
				        
				          lista[posicao].nElem++;
				
							//cabecalho();
							printf(" \t\tSERVIÇO ADICIONADO !!\n");
							printf("\t\t---------------------------------------------------------\n");
							getch();
							break;
	
					  }
					
			  			
					  else { 
						  
				        Hospede[posicao].total =Hospede[posicao].total + preco[i];
				        
				        strcpy(lista[posicao].servico[lista[posicao].nElem],servicosfixos[i]);
				        
				        lista[posicao].preco[lista[posicao].nElem] = (preco[i]*hora);
				        
				        lista[posicao].nElem++;
				
						cabecalho();
						printf(" \t\tSERVIÇO ADICIONADO !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch();
					
					  }
					  	break;
			}
					
				
		   }
}
		   

void AtualizarContrato(){// FUNCAO ATUALIZAR CONTRATO 

  char nome[30];
  int opcao, posicao;

  cabecalho();
  printf("\t\tInforme o nome do Hóspede cadastrado: ");
  fflush(stdout);
  gets(nome);
  
	for (i = 0; i <MAX; i++){
		
		if(strcasecmp(Hospede[i].nome, nome)== 0 ){

	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tNome: %s %s\n", Hospede[i].nome, Hospede[i].sobrenome);
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
	    posicao = i;
	    getchar();
	    break;
	    
		}	
  }
  	  	  do{
			  
  			system("cls");

		    printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
	        printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                   ATUALIZAR CONTRATO                  |\n");
			printf ("\t\t|                                                       |\n");
     	    printf ("\t\t|=========================MENU==========================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|               [1] - Adicionar Serviço.                |\n");
			printf ("\t\t|               [2] - Adicionar Quarto.                 |\n");
			printf ("\t\t|               [3] - Aluguel de Carros.                |\n");
			printf ("\t\t|               [4] - Restaurante Delícias da Serra.    |\n");
			printf ("\t\t|               [0] - Voltar.                           |\n");
		    printf ("\t\t|                                                       |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                 SELECIONE UMA OPÇÃO:                  |\n");												
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t              >  ");
						fflush(stdin);
						scanf("%d", &opcao);
		  switch (opcao) {
		  
		    case 1:
		   		system("cls");
		    	AdicionarServico(posicao);   
		    break;
		
		    case 2:
		    	system("cls");
   	   	   	    Quartos(posicao);
		    break;
		
			case 3:
		    	system("cls");
   	   	   	    AluguelCarros(posicao);
		    break;
		
			case 4:
		    	system("cls");
   	   	   	    Restaurante(posicao);
		    break;
		    
		  }
		   
		}while( opcao !=0);
		  		getchar();
  		
  		
}


void PesquisarContrato(){ //FUNÇÃO PESQUISAR CONTRATO

  char nome[30];
  int k;

  cabecalho();
  printf("\t\tInforme o nome do hóspede cadastrado: ");
  fflush(stdout);
  gets(nome);
  
	for (i = 0; i <MAX; i++){
		
		if(strcasecmp(Hospede[i].nome, nome)== 0 ){
			
			cabecalho();
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tNome: %s %s\n", Hospede[i].nome, Hospede[i].sobrenome);
    	printf("\t\tData do check in: %d/%d/%d\n", Hospede[i].entrada.dia,Hospede[i].entrada.mes,Hospede[i].entrada.ano );
		printf("\t\tData do check out: %d/%d/%d\n", Hospede[i].saida.dia, Hospede[i].saida.mes,Hospede[i].saida.ano);
		printf("\t\tDias de Estadia: %d\n", Hospede[i].DiasHospedado);
		
	    printf("\n");
	
		printf("\t\tSERVIÇOS ADQUIRIDOS\n\n");
	
	for(k=0; k<lista[i].nElem; k++){
		
		printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
	}

	
		printf("\t\tTotal a pagar: R$ %.2f\n", Hospede[i].total);
 		printf("\n");
 		printf("\t\tCartão de Crédito: %d\n", Hospede[i].cartao);
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
	    getchar();
	    break;
	    
		}
  }
  		getchar();
}


void RemoverContrato(){ //FUNÇÃO REMOVER UM CONTRATO FECHADO
	
	int k;
	char nome[30];
	
            system("cls");
			printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                      HOTEL CAMPINA                    |\n");
			printf ("\t\t|                     CONFORT PREMIUM                   |\n");
			printf ("\t\t|                                                       |\n");
            printf ("\t\t|====================REMOVER CONTRATOS==================|\n");
	
	
	
for(i=0; i<MAX; i++){
	
	
	
	if(Hospede[i].contrato==2){
		
		printf("\n");
        printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tNome: %s %s\n", Hospede[i].nome, Hospede[i].sobrenome);
    	printf("\t\tData do check in: %d/%d/%d\n", Hospede[i].entrada.dia,Hospede[i].entrada.mes,Hospede[i].entrada.ano );
		printf("\t\tData do check out: %d/%d/%d\n", Hospede[i].saida.dia, Hospede[i].saida.mes,Hospede[i].saida.ano);
		printf("\t\tDias de Estadia: %d\n", Hospede[i].DiasHospedado);
		
	    printf("\n");
	
		printf("\t\tSERVIÇOS ADQUIRIDOS\n\n");
	
	for(k=0; k<lista[i].nElem; k++){
		
		printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
	}

		printf("\n");
		printf("\t\tTotal a pagar: R$ %.2f\n", Hospede[i].total);
 		printf("\n");
 		printf("\t\tCartão de Crédito: %d\n", Hospede[i].cartao);
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
		
	}	
}


  printf("\t\tInforme o nome do contrato que deseja remover: ");
  fflush(stdout);
  gets(nome);
  
	for (i = 0; i <MAX; i++){
		
		if(strcasecmp(Hospede[i].nome, nome)== 0 ){
			
			if(Hospede[i].contrato==2){
			
			cabecalho();
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tNome: %s %s\n", Hospede[i].nome, Hospede[i].sobrenome);
    	printf("\t\tData do check in: %d/%d/%d\n", Hospede[i].entrada.dia,Hospede[i].entrada.mes,Hospede[i].entrada.ano );
		printf("\t\tData do check out: %d/%d/%d\n", Hospede[i].saida.dia, Hospede[i].saida.mes,Hospede[i].saida.ano);
		printf("\t\tDias de Estadia: %d\n", Hospede[i].DiasHospedado);
		
	    printf("\n");
	
		printf("\t\tSERVIÇOS ADQUIRIDOS\n\n");
	
	for(k=0; k<lista[i].nElem; k++){
		
		printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
	}

	
		printf("\t\tTotal a pagar: R$ %.2f\n", Hospede[i].total);
 		printf("\n");
 		printf("\t\tCartão de Crédito: %d\n", Hospede[i].cartao);
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
	    
	    Hospede[i].contrato = -1;
		printf("\t\tCONTRATO REMOVIDO!!\n");
		printf("\t\t---------------------------------------------------------\n");
	    
	    getchar();
	    break;
			}
		}
  }
  		getchar();
}


void FecharContrato(){ //FUNÇÃO FECHAR CONTRATO

  char nome[30];
  char opcao;
  int k, dia, mes, ano, posicao, diferenca;

  
  cabecalho();
  for (i = 0; i <MAX; i++){
  	
  	if(Hospede[i].contrato==1){
  	
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tNome: %s %s\n", Hospede[i].nome, Hospede[i].sobrenome);
    	printf("\t\tData do check in: %d/%d/%d\n", Hospede[i].entrada.dia,Hospede[i].entrada.mes,Hospede[i].entrada.ano );
		printf("\t\tData do check out: %d/%d/%d\n", Hospede[i].saida.dia, Hospede[i].saida.mes,Hospede[i].saida.ano);
		printf("\t\tDias de Estadia: %d\n", Hospede[i].DiasHospedado);
		printf("\t\t---------------------------------------------------------\n");	
	    printf("\n");
	  }
	}
	
 
  printf("\t\tInforme o nome do hóspede cadastrado: ");
  fflush(stdout);
  gets(nome);
  
	for (i = 0; i <MAX; i++){
		
		if(strcasecmp(Hospede[i].nome, nome)== 0 ){
			
			if(Hospede[i].contrato==1){
			
		cabecalho();
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tNome: %s %s\n", Hospede[i].nome, Hospede[i].sobrenome);
    	printf("\t\tData do check in: %d/%d/%d\n", Hospede[i].entrada.dia,Hospede[i].entrada.mes,Hospede[i].entrada.ano );
		printf("\t\tData do check out: %d/%d/%d\n", Hospede[i].saida.dia, Hospede[i].saida.mes,Hospede[i].saida.ano);
		printf("\t\tDias de Estadia: %d\n", Hospede[i].DiasHospedado);
	    printf("\n");
	
		printf("\t\tSERVIÇOS ADQUIRIDOS\n\n");
	
	for(k=0; k<lista[i].nElem; k++){
		
		printf("\t\t %s \tR$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
	}

		printf("\n");
		printf("\t\tTotal a pagar: R$ %.2f\n", Hospede[i].total);
 		printf("\n");
 		printf("\t\tCartão de Crédito: %d\n", Hospede[i].cartao);
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
	    
	    printf("\t\tDeseja fechar o contrato? (s/n)");
	    scanf(" %c", &opcao);
	    
	    switch(opcao){
			
			case 's':
            case 'S':
				
				cabecalho();
				printf("\t\tDATA DO FECHAMENTO\n\n");
				printf("\t\tDia: ");
			    scanf("%d",&dia);
			    printf("\t\tMês: ");
			    scanf("%d",&mes);
			    printf("\t\tAno: ");
			    scanf("%d",&ano);
			    
			    //CALCULO DIFERENÇA DAS DATAS DO FECHAMENTO DO CONTRATO E DO CHECK OUT DO HÓSPEDE
			    
			    ano = ano - Hospede[i].saida.ano;
			    mes = mes - Hospede[i].saida.mes;
			    dia = dia - Hospede[i].saida.dia;
			    
			    if(dia <0)
			    {
			       mes--;
			       dia+=30;
			    }
			    if (mes<0)
			    {
			        ano--;
			        mes+=12;
			    }
			 
			    
			    mes = mes *30;
			    ano= ano*365;
			    
			    diferenca = dia + mes + ano;
			    
			    if(diferenca == 0){
					
					Hospede[i].contrato = 2;
					printf("\t\tCONTRATO FECHADO!!\n");
					printf("\t\t---------------------------------------------------------\n");
					break;					
				}
			    
			    else{
			    	
					float multa=0;
			    	
			    	for(k=0; k<lista[i].nElem; k++){ //FOR PARA VER QUAIS DIARIAS DOS QUARTOS SERA ACRESCENTADO A MULTA
						
						if(strcasecmp(lista[i].servico[k], "Quarto Presidencial")==0){
							
							printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
							
							multa = multa + lista[i].preco[k];
						}
						
					 if(strcasecmp(lista[i].servico[k], "Quarto Luxo Simples")==0){
					 	
					 	printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
							
							multa = multa + lista[i].preco[k];
						}
						
						if(strcasecmp(lista[i].servico[k], "Quarto Luxo Duplo")==0){
							
							printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
							
							multa = multa + lista[i].preco[k];
						}
						
						if(strcasecmp(lista[i].servico[k], "Quarto Luxo Triplo")==0){
							
							printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
							
							multa = multa + lista[i].preco[k];
						}
						
						if(strcasecmp(lista[i].servico[k], "Quarto Executivo Simples")==0){
							
							printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
							
							multa = multa + lista[i].preco[k];
						}
						
						if(strcasecmp(lista[i].servico[k], "Quarto Executivo Duplo")==0){
							
							printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
							
							multa = multa + lista[i].preco[k];
						}
						
						if(strcasecmp(lista[i].servico[k], "Quarto Executivo Triplo")==0){
							
							printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
							
							multa = multa + lista[i].preco[k];
						}
											 
					}
					
					printf("\n");
					printf("\t\tCONTRATO FECHADO DEPOIS DA DATA PREVISTA DO CHECK OUT\n");
					printf("\t\tSerá acrescentada uma diaria por cada quarto adquirido.\n\t\tMulta de R$ %.2f. \n", multa);
					
					Hospede[i].total = Hospede[i].total + multa;
					
					printf("\t\tTotal a pagar: R$ %.2f\n", Hospede[i].total);
					
					Hospede[i].contrato = 2;
					printf("\n");
					printf("\t\tCONTRATO FECHADO!!\n");
					printf("\t\t---------------------------------------------------------\n");
					break;					
					
				}
				default:
					
					break;
	
		}
 
	    getchar();
	    break;
	    
		}
  }
  		
}
getchar();
}


void C_fechado(){ //LISTAR CONTRATOS FECHADOS
	
	int k;
	
            system("cls");
			printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                      HOTEL CAMPINA                    |\n");
			printf ("\t\t|                     CONFORT PREMIUM                   |\n");
			printf ("\t\t|                                                       |\n");
            printf ("\t\t|====================CONTRATOS FECHADOS=================|\n");
	
	
	
for(i=0; i<MAX; i++){
	
	
	
	if(Hospede[i].contrato==2){
		
		printf("\n");
        printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tNome: %s %s\n", Hospede[i].nome, Hospede[i].sobrenome);
    	printf("\t\tData do check in: %d/%d/%d\n", Hospede[i].entrada.dia,Hospede[i].entrada.mes,Hospede[i].entrada.ano );
		printf("\t\tData do check out: %d/%d/%d\n", Hospede[i].saida.dia, Hospede[i].saida.mes,Hospede[i].saida.ano);
		printf("\t\tDias de Estadia: %d\n", Hospede[i].DiasHospedado);
		
	    printf("\n");
	
		printf("\t\tSERVIÇOS ADQUIRIDOS\n\n");
	
	for(k=0; k<lista[i].nElem; k++){
		
		printf("\t\t %s \t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
	}

		printf("\n");
		printf("\t\tTotal a pagar: R$ %.2f\n", Hospede[i].total);
 		printf("\n");
 		printf("\t\tCartão de Crédito: %d\n", Hospede[i].cartao);
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
		
	}	
}
		
	getchar();	
	
}


void C_aberto(){ //LISTAR FATURAS ABERTAS
	
	int k;
	
            system("cls");
			printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                      HOTEL CAMPINA                    |\n");
			printf ("\t\t|                     CONFORT PREMIUM                   |\n");
			printf ("\t\t|                                                       |\n");
            printf ("\t\t|====================CONTRATOS ABERTOS==================|\n");
	
	
	
for(i=0; i<MAX; i++){
	
	
	
	if(Hospede[i].contrato==1){
		
		printf("\n");
        printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tNome: %s %s\n", Hospede[i].nome, Hospede[i].sobrenome);
    	printf("\t\tData do check in: %d/%d/%d\n", Hospede[i].entrada.dia,Hospede[i].entrada.mes,Hospede[i].entrada.ano );
		printf("\t\tData do check out: %d/%d/%d\n", Hospede[i].saida.dia, Hospede[i].saida.mes,Hospede[i].saida.ano);
		printf("\t\tDias de Estadia: %d\n", Hospede[i].DiasHospedado);
		
	    printf("\n");
	
		printf("\t\tSERVIÇOS ADQUIRIDOS\n\n");
	
	for(k=0; k<lista[i].nElem; k++){
		
		printf("\t\t %s\t R$ %.2f\n", lista[i].servico[k], lista[i].preco[k] );
	}

		printf("\n");
		printf("\t\tTotal a pagar: R$ %.2f\n", Hospede[i].total);
 		printf("\n");
 		printf("\t\tCartão de Crédito: %d\n", Hospede[i].cartao);
	    printf("\n");
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
		
	}	
}
		
	getchar();	
	
}


void menuContratos(){ //MENU FATURAS
	
	int opcao;
	
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
			printf ("\t\t|=========================FATURAS=======================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|               [1] - Contratos Abertos.                |\n");
			printf ("\t\t|               [2] - Contratos Fechados.               |\n");
			printf ("\t\t|               [3] - Criar Contrato.                   |\n");
			printf ("\t\t|               [4] - Pesquisar Contrato.               |\n");
			printf ("\t\t|               [5] - Atualizar Contrato.               |\n");
			printf ("\t\t|               [6] - Fechar Contrato.                  |\n");
			printf ("\t\t|               [7] - Remover Contrato.                 |\n");	
			printf ("\t\t|               [0] - Voltar.                           |\n");
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
        		 C_aberto();
        		break;
        	case 2:
        	    system("cls");
        	    C_fechado();  	    
        			break;
        	case 3:
        		system("cls");
        		cadastro ();
				break;
						
       		case 4:
       			system("cls");
  			  	 PesquisarContrato();
        		break;
        		
        	case 5:
        		system("cls");
        		AtualizarContrato();
        		break;
        	
        	case 6:
       			system("cls");
        		FecharContrato();
        		break;
        	
        	case 7:
       			system("cls");
   				RemoverContrato();
        		break;
        	}
        }while(opcao !=0);
        	
	
}



                     //FUNÇOES SERVICOS//


void Quartos(int posicao){ //FUNÇAO DOS QUARTOS DISPONIVEIS
		
int opcao;
float diaria;
	
	do{
		system ("color 3F");
		system("cls");
			printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                     HOTEL CAMPINA                     |\n");
			printf ("\t\t|                    CONFORT PREMIUM                    |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|==================QUARTOS DISPONIVEIS==================|\n");
			printf ("\t\t|     TIPO DE QUARTO         PREÇO          DISPONIVEL  |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|    [1] - Presidencial      - R$ 1.200,00      %d       |\n", presidencial );
			printf ("\t\t|    [2] - Luxo Simples      - R$ 520,00        %d       |\n", L_simples);
			printf ("\t\t|    [3] - Luxo Duplo        - R$ 570,00        %d      |\n", L_duplo);
			printf ("\t\t|    [4] - Luxo Triplo       - R$ 620,00        %d      |\n", L_triplo);
			printf ("\t\t|    [5] - Executivo Simples - R$ 360,00        %d       |\n", Exe_simples);
			printf ("\t\t|    [6] - Executivo Duplo   - R$ 385,00        %d      |\n", Exe_duplo);
		    printf ("\t\t|    [7] - Executivo Triplo  - R$ 440,00        %d      |\n", Exe_triplo);
			printf ("\t\t|    [0] - Voltar.                                      |\n");                                
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                SELECIONE UMA OPCAO:                   |\n");												
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t              >  ");
						fflush(stdin);
						scanf("%d", &opcao);
						getchar();
        switch(opcao){
        	
        	case 1:
        		cabecalho();
        		
        		if(presidencial == 0){
							
							
							printf("\t\t QUARTO PRESIDENCIAL INDISPONIVEL !!\n");
							printf("\t\t---------------------------------------------------------\n");
							getch();
						
					}
					
			else {

						
							presidencial = presidencial - 1;
                	
    		    			diaria = Hospede[posicao].DiasHospedado * 1200,00;
    		    			
							Hospede[posicao].total = Hospede[posicao].total + diaria;
							
							strcpy(lista[posicao].servico[lista[posicao].nElem],"Quarto Presidencial");
				        
					        lista[posicao].preco[lista[posicao].nElem] = 1200,00;
					        
					        lista[posicao].nElem++;
						
								
								printf("\t\t QUARTO PRECIDENCIAL ADICIONADO !!\n");
								printf("\t\t---------------------------------------------------------\n");
								getch();
								

			}
        		break;
        	
        	case 2:
	    		cabecalho();

						if(L_simples == 0){
							
						printf("\t\t QUARTO LUXO SIMPLES INDISPONIVEL !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch();
					}
					
						else{
                         L_simples = L_simples - 1;
                	
                		 diaria = Hospede[posicao].DiasHospedado * 520,00;
    		    
						Hospede[posicao].total = Hospede[posicao].total + diaria;
						
						strcpy(lista[posicao].servico[lista[posicao].nElem],"Quarto Luxo Simples");
				        
				        lista[posicao].preco[lista[posicao].nElem] = 520,00;
					        
					    lista[posicao].nElem++;
						
						
								printf("\t\t QUARTO LUXO SIMPLES ADICIONADO !!\n");
								printf("\t\t---------------------------------------------------------\n");
								getch();
					}
        			
        			break;
        	case 3:
        		cabecalho();

						if(L_duplo == 0){
							
						printf("\t\t QUARTO LUXO DUPLO INDISPONIVEL !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch();
					}
						else{
                         L_duplo = L_duplo - 1;
                	
 		    			diaria = Hospede[posicao].DiasHospedado * 570,00;
 		    			
						Hospede[posicao].total = Hospede[posicao].total + diaria ;
						
						strcpy(lista[posicao].servico[lista[posicao].nElem],"Quarto Luxo Duplo");
				        
				        lista[posicao].preco[lista[posicao].nElem] = 570,00;
					        
					    lista[posicao].nElem++;
						
						
								printf("\t\t QUARTO LUXO DUPLO ADICIONADO !!\n");
								printf("\t\t---------------------------------------------------------\n");
								getch();
					}
        		
				break;
						
       		case 4:
       			cabecalho();
     		
						if(L_triplo == 0){
							
						printf("\t\t QUARTO LUXO TRIPLO INDISPONIVEL !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch();
					}
						else{
                         L_triplo = L_triplo - 1;
                	
    		    		 diaria = Hospede[posicao].DiasHospedado * 620,00;
    		    		 
						Hospede[posicao].total = Hospede[posicao].total + diaria ;
						
						strcpy(lista[posicao].servico[lista[posicao].nElem],"Quarto Luxo Triplo");
				        
				        lista[posicao].preco[lista[posicao].nElem] = 620,00;
					        
					    lista[posicao].nElem++;
						
						
								printf("\t\t QUARTO LUXO TRIPLO ADICIONADO !!\n");
								printf("\t\t---------------------------------------------------------\n");
								getch();
					}
        		break;
        		
        	case 5:
        		cabecalho();

						if(Exe_simples == 0){
							
						printf("\t\t QUARTO EXECUTIVO SIMPLES INDISPONIVEL !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch();
					}
					
						else{
                         Exe_simples = Exe_simples - 1;
                	
    		    		 diaria = Hospede[posicao].DiasHospedado * 360,00;
    		    		 
						Hospede[posicao].total =Hospede[posicao].total +  diaria ;
						
						strcpy(lista[posicao].servico[lista[posicao].nElem],"Quarto Executivo Simples");
				        
				        lista[posicao].preco[lista[posicao].nElem] = 360,00;
					        
					    lista[posicao].nElem++;
						
						
								printf("\t\t QUARTO EXECUTIVO SIMPLES ADICIONADO !!\n");
								printf("\t\t---------------------------------------------------------\n");
								getch();
					}
        		
        		break;
        	
        	case 6:
        		cabecalho();

						if(Exe_duplo == 0){
							
						printf("\t\t QUARTO EXECUTIVO DUPLO INDISPONIVEL !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch();
						
					}
						else{
                         Exe_duplo = Exe_duplo - 1;
                	
    		    		 diaria = Hospede[posicao].DiasHospedado * 385,00;
    		    		 
						Hospede[posicao].total = Hospede[posicao].total + diaria ;
						
						strcpy(lista[posicao].servico[lista[posicao].nElem],"Quarto Executivo Duplo");
				        
				        lista[posicao].preco[lista[posicao].nElem] = 385,00;
					        
					    lista[posicao].nElem++;
						
						
								printf("\t\t QUARTO EXECUTIVO DUPLO ADICIONADO !!\n");
								printf("\t\t---------------------------------------------------------\n");
								getch();
					}
        		
        		break;
        	
        	case 7:
        		cabecalho();

						if(Exe_triplo == 0){
							
						printf("\t\t QUARTO EXECUTIVO TRIPLO INDISPONIVEL !!\n");
						printf("\t\t---------------------------------------------------------\n");
						getch();
						
					}
						else{
                         Exe_triplo = Exe_triplo - 1;
                	
    		    		 diaria = Hospede[posicao].DiasHospedado * 440,00;
    		    		 
						Hospede[posicao].total = Hospede[posicao].total + diaria;
						
						strcpy(lista[posicao].servico[lista[posicao].nElem],"Quarto Executivo Triplo");
				        
				        lista[posicao].preco[lista[posicao].nElem] = 440,00;
					        
					    lista[posicao].nElem++;
						
						
								printf("\t\t QUARTO EXECUTIVO TRIPLO ADICIONADO !!\n");
								printf("\t\t---------------------------------------------------------\n");
								getch();
					}
        		
        		break;
        	}
        }while(opcao !=0);

}


int LeituraServicos(){ //FUNÇÃO LEITURA DO ARQUIVO SERVIÇOS
   
    FILE *servicos;
    
    servicos = fopen("arquivoSERVICOS.txt", "rb");
    if (servicos==NULL)
    {
        menu();
    }

    
    fread(&readServico, sizeof(struct LeituraServico),1,servicos);
    while (feof(servicos)==0){
 
	 	 	 	 	 strcpy( servico[i].nome, readServico.nome);
		             servico[i].preco= readServico.preco;
                     servico[i].NDisponivel = readServico.NDisponivel;
 	                 servico[i].vazio = readServico.vazio;
    i++;
    NServico++;
    fread(&readServico, sizeof(struct LeituraServico),1,servicos);
     
    }
	//getchar();
    fclose(servicos);
    return 0;
}	


int SalvarServicos(int n){ //FUNÇÃO SALVAR NO ARQUIVO
	
FILE *servicos;

	servicos=fopen("arquivoSERVICOS.txt","ab");
    if (servicos==NULL)
    {
        printf("Problema em manipular o arquivo\n");
        return 9;
    }

    fwrite(&servico[n], sizeof(struct Servico),1,servicos);
    if (ferror(servicos))
    {
        printf("\nErro na gravacao do arquivo\n");
        return 9;
    }

    fclose(servicos);
    return 0;
}	


void cadastroServico () { //FUNÇÃO CADASTRO DE UM SERVIÇO
	
	int opcao;
	
  do {
 		  cabecalho();
		  printf("\t\t CADASTRAR SERVIÇO \n");
		  printf("\n");
		  printf("\t\tServiço:");
		  fflush(stdin);
		  gets(servico[NServico].nome);
    	  printf("\n");
		  printf("\t\tPreço: R$ ");
		  fflush(stdin);
		  scanf(" %f",&servico[NServico].preco);
		  printf("\n");	  
		  printf("\t\tQuantidade disponivel: ");
		  fflush(stdin);
		  scanf(" %d",&servico[NServico].NDisponivel);
		  
		  servico[NServico].vazio=1;
          
          SalvarServicos(NServico);
          NServico++;
		   
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
			printf ("\t\t|                  [1] - Fazer um novo Cadastro.        |\n");
			printf ("\t\t|                  [0] - Voltar.                        |\n");
		    printf ("\t\t|                                                       |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                 SELECIONE UMA OPÇÃO:                  |\n");												
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t              >  ");
						          fflush(stdin);
						          scanf("%d",&opcao);
   
          getchar();
   
    } while(opcao!=0);
}


void listarServico () {  //FUNÇÃO LISTAR SERVIÇOS
	
	cabecalho();
	
	for (i = 0; i <7; i++){
    printf("\n");
    printf("\t\t---------------------------------------------------------\n");
    printf("\t\tCódigo: %d\n", i+1);
    printf("\t\tServiço: %s\n", servicosfixos[i]);
	printf("\t\tPreço: R$ %.2f\n", preco[i]);
    printf("\t\t---------------------------------------------------------\n");
    printf("\n");
  }

  for (i = 0; i <NServico; i++){
  	
  	if(servico[i].vazio == 1){
	printf("\n");
    printf("\t\t---------------------------------------------------------\n");
    printf("\t\tCódigo: %d\n", i+8);
    printf("\t\tServiço: %s\n", servico[i].nome);
	printf("\t\tPreço: R$ %.2f\n", servico[i].preco);
    printf("\t\tQuantidade disponivel: %d\n", servico[i].NDisponivel);
    printf("\t\t---------------------------------------------------------\n");
    printf("\n");
	  }
    
  }

  getchar();
   
}


 void EditarServico () { //FUNÇÃO DE ALTERAR SERVIÇO
 
  int opcao;
  char nome[30];
    
  cabecalho();
  printf("\t\tInforme o Nome do serviço cadastrado: ");
  fflush(stdout);
  gets(nome);

  			do{
			  
  			system("cls");

		    printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                     ALTERAR SERVIÇO                   |\n");
			printf ("\t\t|                                                       |\n");
     	    printf ("\t\t|=========================MENU==========================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                 [1] - Nome.                           |\n");
			printf ("\t\t|                 [2] - Preço                           |\n");
			printf ("\t\t|                 [3] - Quantidade Disponivel.          |\n");
			printf ("\t\t|                 [0] - Voltar.                         |\n");
		    printf ("\t\t|                                                       |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                 SELECIONE UMA OPÇÃO:                  |\n");												
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t              >  ");
						fflush(stdin);
						scanf("%d", &opcao);
  switch (opcao) {
  
    case 1:
    		system("cls");
    	    printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                     ALTERAR SERVIÇO                   |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			
    	for(i=0;i<NServico;i++){
            if(strcasecmp(servico[i].nome, nome)==0){
			  
		      printf("\t\tNovo Nome: ");
		      fflush(stdin);
		      gets(servico[i].nome);
		      printf("\t\tNOME ALTERADO COM SUCESSO !!\n");
		      printf("\t\t---------------------------------------------------------\n");
		      getch();
		      }
		      break;
		}
        for(i=0;i<7;i++){
            if(strcasecmp(servicosfixos[i], nome)==0){
		  
		      printf("\t\tNovo Nome: ");
		      fflush(stdin);
		      gets(servicosfixos[i]);
		      printf(" \t\t NOME ALTERADO COM SUCESSO !!\n");
		      printf("\t\t---------------------------------------------------------\n");
		      getch();
		      }
		      break;}
		  
		      
		      
      
    break;
    case 2:
    	
        	system("cls");
    	    printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                     ALTERAR SERVIÇO                   |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			
			
    		for(i=0;i<MAX;i++){
            if(strcasecmp(servico[i].nome, nome)==0){
			  
		      printf("\t\tNovo Preço: R$ ");
		      fflush(stdin);
		      scanf("%f", &servico[i].preco);
		      printf("\t\t PREÇO ALTERADO COM SUCESSO !!\n");
		      printf("\t\t---------------------------------------------------------\n");
		      getch();
		      }
		      break;}
		  for(i=0;i<7;i++){
            if(strcasecmp(servicosfixos[i], nome)==0){
			
		      printf("\t\tNovo Preço: R$ ");
		      fflush(stdin);
		      scanf("%f", &preco[i]);
		      printf(" \t\t PREÇO ALTERADO COM SUCESSO !!\n");
		      printf("\t\t---------------------------------------------------------\n");
		      getch();
		      }
		      break;}
		      
    break;
    case 3:
    	
    	    system("cls");
    	    printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                     ALTERAR SERVIÇO                   |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			
			
    		for(i=0;i<NServico;i++)
            if(strcasecmp(servico[i].nome, nome)==0){
		      printf("\t\tNova Quantidade: ");
		      fflush(stdin);
		      scanf("%d", &servico[i].NDisponivel);
		      printf("\t\t QUANTIDADE ALTERADA COM SUCESSO !!\n");
		      printf("\t\t---------------------------------------------------------\n");
		      getch();
		      }
		      break;
		      
  }
}while( opcao !=0);
}


void RemoverServico() { //FUNÇÃO REMOVER UM SERVIÇO
	
  char nome[30];
  int opcao;
    	
 	cabecalho();
 	
	 	
  for (i = 0; i <NServico; i++){
  	if(servico[i].vazio == 1){
    printf("\n");
    printf("\t\t---------------------------------------------------------\n");
    printf("\t\tNome: %s \n", servico[i].nome);
    printf("\t\t---------------------------------------------------------\n");
	  }
}			
			
  	        printf("\t\tInforme o Nome do serviço: ");
			fflush(stdout);
			gets(nome);
			
 			
 			
    		for(i=0;i<NServico;i++){
            if(strcasecmp(servico[i].nome, nome)==0){
            	cabecalho();
			  printf("\t\t---------------------------------------------------------\n");
  	  	  	  printf("\t\tCódigo: %d\n", i+8);
	    	  printf("\t\tServiço: %s\n", servico[i].nome);
			  printf("\t\tPreço: R$ %.2f\n", servico[i].preco);
	          printf("\t\tQuantidade disponivel: %d\n", servico[i].NDisponivel);
  	          printf("\t\t---------------------------------------------------------\n");
	    	  printf("\n");
		     
		      
                    servico[i].vazio = 0;
                    printf("\t\tSERVIÇO REMOVIDO!!\n");
                    printf("\t\t---------------------------------------------------------\n");
                    getch();
                    
                    break;
                
                   
		      }
		      
		}
}


void PesquisarServico(){ //FUNÇÃO PESQUISAR SERVIÇO

  char nome[30];

  cabecalho();
  printf("\t\tInforme o Nome do serviço cadastrado: ");
  fflush(stdout);
  gets(nome);
  
	for (i = 0; i <7; i++){
		if(strcasecmp(servicosfixos[i], nome)==0){
		cabecalho();
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tCódigo: %d\n", i+1);
	    printf("\t\tServiço: %s\n", servicosfixos[i]);
		printf("\t\tPreço: R$ %.2f\n", preco[i]);
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
	    break;
  }
  }
  
	for(i=0;i<NServico;i++){

    	if(strcasecmp(servico[i].nome, nome)==0){
	
        cabecalho();
		printf("\t\t---------------------------------------------------------\n");
	    printf("\t\tCódigo: %d\n", i+8);
	    printf("\t\tServiço: %s\n", servico[i].nome);
		printf("\t\tPreço: R$ %.2f\n", servico[i].preco);
	    printf("\t\tQuantidade disponivel: %d\n", servico[i].NDisponivel);
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
	    break;	
	           
        }
  				}
  		getchar();
}


void menuServicos(){ //MENU SERVIÇOS
   
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
			printf ("\t\t|=========================SERVIÇOS======================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                   [1] - Cadastrar.                    |\n");
			printf ("\t\t|                   [2] - Pesquisar.                    |\n");
			printf ("\t\t|                   [3] - Atualizar informações.        |\n");
			printf ("\t\t|                   [4] - Listar Serviços.              |\n");
			printf ("\t\t|                   [5] - Remover um Serviço.           |\n");
			printf ("\t\t|                   [0] - Voltar.                       |\n");
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
        		cadastroServico();
        		break;
        	case 2:
	            system("cls");
        		PesquisarServico();
        		break;
        	case 3:
        		system("cls");
        		EditarServico ();
				break;
						
       		case 4:
       			system("cls");
        		listarServico ();
        		break;
        		
        	case 5:
        		system("cls");
        		RemoverServico();
        		break;
        	}
        }while(opcao !=0);
        	
	  }



