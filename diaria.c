#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#include "FUNCOES.h"
#include "STRUCTS.h"


#define MAX 200

//Variaveis globais
int dia, mes, ano;


void DiferecaDatas(int NHospede){ //FUNÇÃO PARA CALCULAR DIAS DE ESTADIA
	
	getchar();
    ano = Hospede[NHospede].saida.ano - Hospede[NHospede].entrada.ano;
    mes = Hospede[NHospede].saida.mes - Hospede[NHospede].entrada.mes;
    dia = Hospede[NHospede].saida.dia - Hospede[NHospede].entrada.dia;
    
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
    
    Hospede[NHospede].DiasHospedado = dia + mes + ano;
    
    
    printf("\t\tEstadia: %d dias\n", Hospede[NHospede].DiasHospedado);
    getchar();
	
}


void check(int NHospede){//FUNÇÃO INFORMAR DATAS CHECKIN E CHECKOUT

	 cabecalho();
	 
    printf("\t\tCHECK IN\n\n");
    printf("\t\tDia: ");
    scanf("%d",&Hospede[NHospede].entrada.dia);
    printf("\t\tMês: ");
    scanf("%d",&Hospede[NHospede].entrada.mes);
    printf("\t\tAno: ");
    scanf("%d",&Hospede[NHospede].entrada.ano);
    printf("\t\tHORÁRIO\n");
    printf("\t\tHora: ");
    scanf("%d",&Hospede[NHospede].entrada.hora);
    printf("\t\tMinutos: ");
    scanf("%d",&Hospede[NHospede].entrada.min);
    
    printf("\n");
    
    getchar();
	
    cabecalho();
	 
	printf("\t\tCHECK OUT\n\n");
	printf("\t\tDia: ");
    scanf("%d",&Hospede[NHospede].saida.dia);
    printf("\t\tMês: ");
    scanf("%d",&Hospede[NHospede].saida.mes);
    printf("\t\tAno: ");
    scanf("%d",&Hospede[NHospede].saida.ano);
    printf("\t\tHORÁRIO\n");
    printf("\t\tHora: ");
    scanf("%d",&Hospede[NHospede].saida.hora);
    printf("\t\tMinutos: ");
    scanf("%d",&Hospede[NHospede].saida.min);

     DiferecaDatas(NHospede);
    
    getchar();

}

