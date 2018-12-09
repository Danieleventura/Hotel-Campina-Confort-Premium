#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>


#include "FUNCOES.h"
#include "STRUCTS.h"


//VARIAVEIS GLOBAIS
int j = 0;
int NHospede=0; // contador total de hóspedes



void LeituraHospedes(){ //FUNÇÃO LER ARQUIVO HÓSPEDE
	
    FILE *hospedes;
    
    hospedes = fopen("arquivoHOSPEDES.txt", "rb");
    
    if (hospedes==NULL)
    {
        menu();
    }
	
    fread(&read, sizeof(struct Leitura),1,hospedes);
    while (feof(hospedes)==0){
    	
	 	 	 	 	 strcpy(Hospede[j].nome,read.nome);
		             strcpy(Hospede[j].sobrenome,read.sobrenome);
		             Hospede[j].dia= read.dia;
                     Hospede[j].mes = read.mes;
 	 	 	 	     Hospede[j].ano = read.ano;
		             Hospede[j].CPF = read.CPF;
		             Hospede[j].telef = read.telef;
                     strcpy(Hospede[j].cidade,read.cidade);
					 strcpy(Hospede[j].rua,read.rua);
		             Hospede[j].numero = read.numero;
		             Hospede[j].cartao = read.cartao;
		             Hospede[j].NPessoas = read.NPessoas;
		             Hospede[j].DiasHospedado = read.DiasHospedado;
		             Hospede[j].contrato = read.contrato;
		             Hospede[j].entrada.dia = read.in.dia;
					 Hospede[j].entrada.mes = read.in.mes;
					 Hospede[j].entrada.ano = read.in.ano;
					 Hospede[j].entrada.hora = read.in.hora;
					 Hospede[j].entrada.min = read.in.min;
	   		     	 Hospede[j].saida.dia = read.out.dia;
					 Hospede[j].saida.mes = read.out.mes;
					 Hospede[j].saida.ano = read.out.ano;
					 Hospede[j].saida.hora = read.out.hora;
					 Hospede[j].saida.min = read.out.min;
					 Hospede[j].total = read.total;

    
			j++;
            NHospede++;	 
    fread(&read, sizeof(struct Leitura),1,hospedes);
      
    }
    fclose(hospedes);
}	


int Salvar(int n){ //FUNÇÃO SALVAR NO ARQUIVO HÓSPEDE
	
FILE *hospedes;


    
    hospedes=fopen("arquivoHOSPEDES.txt","ab");
    if (hospedes==NULL)
    {
        printf("Problema em manipular o arquivo!!\n");
        return 9;
    }
	fwrite(&Hospede[n], sizeof(struct Cadastro),1,hospedes);
    
    if (ferror(hospedes))
    {
        printf("\nErro na gravação do arquivo!!\n");
        return 9;
    }
    fclose(hospedes);
    return 0;
}	
	

void cadastro () { //FUNÇÃO CADASTRAR UM HÓSPEDE
	
	int opcao;
	
  do {		
    		 cabecalho();
          
		  printf("\t\tNome:");
		  fflush(stdin);
		  gets(Hospede[NHospede].nome);
		  
		  printf("\t\tSobrenome:");
		  fflush(stdin);
		  gets(Hospede[NHospede].sobrenome);
		
		  printf("\t\tData Nascimento\n");
		  printf("\t\tDia: ");
		  fflush(stdin);
		  scanf("%d",&Hospede[NHospede].dia);
		  
		  printf("\t\tMês: ");
		  fflush(stdin);
		  scanf("%d",&Hospede[NHospede].mes);
		
		  printf("\t\tAno: ");
		  fflush(stdin);
		  scanf("%d",&Hospede[NHospede].ano);
		
		
		  printf("\t\tDigite o número do CPF: ");
		  fflush(stdin);
		  scanf("%d",&Hospede[NHospede].CPF);
		            
		  printf("\t\tTelefone: ");
		  fflush(stdin);
		  scanf("%d",&Hospede[NHospede].telef);
		  
		  cabecalho();
		  
		  printf("\t\t ENDEREÇO \n");
		  printf("\t\tCidade:");
		  fflush(stdin);
		  gets(Hospede[NHospede].cidade);
		          
		  printf("\t\tRua:");
		  fflush(stdin);
		  gets(Hospede[NHospede].rua);
		  
		  printf("\t\tNúmero:");
		  fflush(stdin);
		  scanf("%d", &Hospede[NHospede].numero);
		  
		  
		   cabecalho();
		  printf("\t\t ESTADIA \n");
		  
		  printf("\t\tQuantidade de Pessoas: ");
		  fflush(stdin);
		  scanf("%d",&Hospede[NHospede].NPessoas);
		  
		  Hospede[NHospede].contrato=1;
		  
		  
		  check(NHospede);
		  
		  //cabecalho();
		  
		  printf("\t\tInforme o número do cartão de Credito: ");
		  fflush(stdin);
		  scanf("%d",&Hospede[NHospede].cartao);
		  
		  printf("\t\tCONTRATO ABERTO!! ");
		  
		  
		  
		  Salvar(NHospede);
		  
          //Quartos(NHospede);
		  NHospede++;
		  
		  
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
   
    } while(opcao!=0);
}


void listarHospedes () { //FUNÇÃO LISTAR HÓSPEDES
    
         cabecalho();
    
    
  for (j = 0; j <NHospede; j++){
    printf("\n");
    printf("\t\t---------------------------------------------------------\n");
    printf("\t\tNome: %s %s", Hospede[j].nome, Hospede[j].sobrenome);
    printf("\n");
	printf("\t\tData Nascimento: %d/%d/%d\n", Hospede[j].dia,Hospede[j].mes,Hospede[j].ano );
	printf("\t\tCPF: %d\n", Hospede[j].CPF);
    printf("\t\tTelefone: %d\n",Hospede[j].telef);
    printf("\t\tCartão de Crédito: %d\n", Hospede[j].cartao);
    printf("\n");
    printf("\t\t- ENDEREÇO \n");
	printf("\t\tCidade: %s", Hospede[j].cidade);
	printf("\n");
	printf("\t\tRua: %s", Hospede[j].rua);
	printf("\n");
	printf("\t\tNúmero: %d\n", Hospede[j].numero);
	printf("\n");
	printf("\t\t- ESTADIA \n");
	printf("\t\tData do check in: %d/%d/%d\n", Hospede[j].entrada.dia,Hospede[j].entrada.mes,Hospede[j].entrada.ano );
	printf("\t\tData do check out: %d/%d/%d\n", Hospede[j].saida.dia, Hospede[j].saida.mes,Hospede[j].saida.ano);
	printf("\t\tDias de Estadia: %d\n", Hospede[j].DiasHospedado);
    printf("\n");
    printf("\t\tQuantidade de Pessoas:%d\n",Hospede[j].NPessoas);
	printf("\t\t---------------------------------------------------------\n");
    
  }
  
   getch();
}



void EditarEndereco (int posicao) { //FUNÇÃO  ATUALIZAR ENDEREÇO
  int opcao;
  
  			do{
			  
  			system("cls");

		    printf ("\t\t                                         	              \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                   ALTERAR ENDEREÇO                    |\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|=========================MENU==========================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                   [1] - Cidade.                       |\n");
			printf ("\t\t|                   [2] - Rua.                          |\n");
			printf ("\t\t|                   [3] - Número.                       |\n");
			printf ("\t\t|                   [0] - Voltar.                       |\n");
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
    	cabecalho();
      printf("\t\tNova Cidade: ");
      fflush(stdin);
      gets(Hospede[posicao-1].cidade);
       printf("\t\t ALTERADO COM SUCESSO !!\n");
       printf("\t\t----------------------------------------------------------\n");
    break;
    case 2:
    	cabecalho();
      printf("\t\tNova Rua: ");
      fflush(stdin);
      gets(Hospede[posicao-1].rua);
      printf(" \t\tALTERADO COM SUCESSO !!\n");
      printf("\t\t----------------------------------------------------------\n");
      
    break;
    case 3:
    	cabecalho();
      printf("\t\tNovo Número: ");
      fflush(stdin);
      scanf("%d",&Hospede[posicao-1].numero);
      printf("\t\t ALTERADO COM SUCESSO !!\n");
      printf("\t\t----------------------------------------------------------\n");
    break;
  }
}while( opcao !=0);
}


void EditarHospedagem (int posicao) { //FUNÇÃO  ATUALIZAR HOSPEDAGEM

  int opcao;

  			do{
			  
  			system("cls");
            printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
		    printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                  ALTERAR HÓSPEDAGEM                   |\n");
			printf ("\t\t|                                                       |\n");
		    printf ("\t\t|=========================MENU==========================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|             [1] - Quantidade de pessoas.              |\n");
			printf ("\t\t|             [2] - Data Check out.                     |\n");
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
    	cabecalho();
        printf("\t\tQuantidade de pessoas: ");
        fflush(stdin);
	    scanf("%d", &Hospede[posicao-1].NPessoas);
	    printf("\t\t ALTERADO COM SUCESSO !!\n");
	    printf("\t\t----------------------------------------------------------\n");
      	  break;
        
  case 2:
  	
  		cabecalho();
  		printf("\t\tData do check in: %d/%d/%d\n", Hospede[posicao-1].entrada.dia,Hospede[posicao-1].entrada.mes,Hospede[posicao-1].entrada.ano );
  		printf("\n");
		printf("\t\tCHECK OUT\n\n");
		printf("\t\tDia: ");
	    scanf("%d",&Hospede[posicao-1].saida.dia);
	    printf("\t\tMês: ");
	    scanf("%d",&Hospede[posicao-1].saida.mes);
	    printf("\t\tAno: ");
	    scanf("%d",&Hospede[posicao-1].saida.ano);
	    printf("\n");
	    printf("\t\tHORÁRIO\n\n");
	    printf("\t\tHora: ");
	    scanf("%d",&Hospede[posicao-1].saida.hora);
	    printf("\t\tMinutos: ");
	    scanf("%d",&Hospede[posicao-1].saida.min);
		
	    DiferecaDatas(posicao-1); // FUNÇÃO CONTAGEM DOS DIAS DA ESTADIA
	    
		printf("\t\t CHECK OUT ALTERADO COM SUCESSO !!\n");	
		printf("\t\t----------------------------------------------------------\n");
  	    break;  
  }
  
}while( opcao !=0);
}


void EditarHospede () { //FUNÇÃO ATUALIZAR INFORMAÇÕES DO HÓSPEDE
  int posicao, opcao;
  
    cabecalho();
    
     for (j = 0; j <NHospede; j++){
    printf("\n");
    printf("\t\t----------------------------------------------------------\n");
    printf("\t\tCódigo: %d \t Nome: %s %s\n", j+1, Hospede[j].nome, Hospede[j].sobrenome);
    printf("\t\t----------------------------------------------------------\n");
    printf("\n");
}

  printf("\t\tInforme o Número de indetificação do hóspede cadastrado: ");
  fflush(stdout);
  scanf("%d", &posicao);

  			do{
			  
  			system("cls");

		    printf ("\t\t                                                      	  \n");
			printf ("\t\t                                         	              \n");
			printf ("\t\t|=======================================================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                    ALTERAR HÓSPEDES                   |\n");
			printf ("\t\t|                                                       |\n");
     	    printf ("\t\t|=========================MENU==========================|\n");
			printf ("\t\t|                                                       |\n");
			printf ("\t\t|                  [1] - Nome.                          |\n");
			printf ("\t\t|                  [2] - Sobrenome.                     |\n");
			printf ("\t\t|                  [3] - Data de Nascimento.            |\n");
			printf ("\t\t|                  [4] - CPF.                           |\n");
			printf ("\t\t|                  [5] - Telefone.                      |\n");
			printf ("\t\t|                  [6] - Endereço.                      |\n");
			printf ("\t\t|                  [7] - Hóspedagem.                    |\n");
			printf ("\t\t|                  [0] - Voltar.                        |\n");
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
    		cabecalho();
      printf("\t\tNovo Nome: ");
      fflush(stdin);
      gets(Hospede[posicao-1].nome);
      printf(" \t\tALTERADO COM SUCESSO !!\n");
      printf("\t\t----------------------------------------------------------\n");
      getchar();
      
    break;
    case 2:
    	cabecalho();
      printf("\t\tNovo Sobrenome: ");
      fflush(stdin);
      gets(Hospede[posicao-1].sobrenome);
      printf("\t\t ALTERADO COM SUCESSO !!\n");
      printf("\t\t----------------------------------------------------------\n");
      getchar();
    break;
    case 3:
    	cabecalho();
      printf("\t\tNova Data de Nascimento \n");
      printf("\t\tDia: ");
      fflush(stdin);
      scanf("%d",&Hospede[posicao-1].dia);
      printf("\t\tMês: ");
      fflush(stdin);
      scanf("%d",&Hospede[posicao-1].mes);
      printf("\t\tAno: ");
      fflush(stdin);
      scanf("%d",&Hospede[posicao-1].ano);
      puts("\t\t ALTERADO COM SUCESSO !!\n");
      printf("\t\t----------------------------------------------------------\n");
      getchar();
    break;
    case 4:
    cabecalho();
      printf("\t\tNovo CPF: ");
      fflush(stdin);
      scanf("%d",&Hospede[posicao-1].CPF);
      printf(" \t\tALTERADO COM SUCESSO !!\n");
      printf("\t\t----------------------------------------------------------\n");
      getchar();
    break;
    case 5:
    	cabecalho();
      printf("\t\tNovo Telefone: ");
      fflush(stdin);
      scanf("%d",&Hospede[posicao-1].telef);
      printf(" \t\tALTERADO COM SUCESSO !!\n");
      printf("\t\t----------------------------------------------------------\n");
      getchar();
    break;
    case 6:
      EditarEndereco (posicao);
      
    break;
    case 7:
      EditarHospedagem (posicao);
    break;
  }
   
}while( opcao !=0);
getchar();
}


void PesquisarHospede(){ //FUNÇÃO PESQUISAR HÓSPEDE

    char nome[30];
		
	cabecalho();
	
   	printf("\t\tNome do Hóspede: ");
   	fflush(stdin);
   	gets(nome);
   	
	  cabecalho();
	   
	for(j=0; j<MAX; j++){
		
		if(strcasecmp(Hospede[j].nome, nome)== 0 ){
		
		printf("\t\tNome: %s %s", Hospede[j].nome, Hospede[j].sobrenome);
	    printf("\n");
		printf("\t\tData Nascimento: %d/%d/%d\n", Hospede[j].dia,Hospede[j].mes,Hospede[j].ano );
		printf("\t\tCPF: %d\n", Hospede[j].CPF);
	    printf("\t\tTelefone: %d\n",Hospede[j].telef);
	    printf("\t\tCartão de Crédito: %d\n", Hospede[j].cartao);
	    printf("\n");
	    printf("\t\t- ENDEREÇO \n");
		printf("\t\tCidade: %s", Hospede[j].cidade);
		printf("\n");
		printf("\t\tRua: %s", Hospede[j].rua);
		printf("\n");
		printf("\t\tNúmero: %d\n", Hospede[j].numero);
		printf("\n");
		printf("\t\t- ESTADIA \n");
		printf("\t\tData do check in: %d/%d/%d\n", Hospede[j].entrada.dia,Hospede[j].entrada.mes,Hospede[j].entrada.ano );
		printf("\t\tData do check out: %d/%d/%d\n", Hospede[j].saida.dia, Hospede[j].saida.mes,Hospede[j].saida.ano);
		printf("\t\tDias de Estadia: %d\n", Hospede[j].DiasHospedado);
	    printf("\n");
	    printf("\t\tQuantidade de Pessoas:%d\n",Hospede[j].NPessoas);
	    printf("\t\t---------------------------------------------------------\n");
	    printf("\n");
	    getch();
	    break;
	    
        }
          

  			}
}


void menuHospede(){ // MENU HÓSPEDE
  
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
			printf ("\t\t|                 [1] - Cadastrar.                      |\n");
			printf ("\t\t|                 [2] - Pesquisar.                      |\n");
			printf ("\t\t|                 [3] - Atualizar informações.          |\n");
			printf ("\t\t|                 [4] - Listar Hóspedes.                |\n");
			printf ("\t\t|                 [0] - Voltar.                         |\n");
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
        		cadastro ();
        		break;
        	
        	case 2:
        	    system("cls");
       			PesquisarHospede();
       			break;
       		
        	case 3:
        		system("cls");
        		EditarHospede ();
				break;
						
       		case 4:
       			system("cls");
        		listarHospedes ();
        		break;
        		
        	}
        }while(opcao !=0);
        	
	  }



