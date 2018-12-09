#ifndef STRUCTS_H
#define STRUCTS_H

#define MAX 200

//STRUCT DA LISTA DOS SERVIÇOS ADQUIRIDOS PELO HÓSPEDE
 struct ServicosAdquiridos{
	
	char servico[MAX][30];
	float preco[MAX];
	int nElem;	
	
} lista[MAX];

//STRUCT DO CHECK IN E CHECK OUT
typedef struct{
	int dia;
	int mes;
	int ano;
	int hora;
	int min;
	
} Check;


//ESTRUTURA CADASTR0 DE UM HÓSPEDE
struct Cadastro{
	
	
  char nome[30],sobrenome[50];
  int dia, mes, ano;
  int CPF, telef;
  char cidade[30], rua[50];
  int  numero;
  int cartao;
  int NPessoas;
  int DiasHospedado;
  int contrato;  //VARIAVEL PARA INFORMAR SE O CONTRATO ESTA ABERTO OU FECHADO
 
  Check entrada;
  Check saida;

  
  float total; // VARIAVEL DO TOTAL DA CONTA NA FATURA

}Hospede[MAX];


//STRUCT DO CHECK IN E CHECK OUT // LEITURA DO ARQUIVO HOSPEDE
typedef struct{
	int dia;
	int mes;
	int ano;
	int hora;
	int min;
	
}CHECK;
    
    
//STRUCT USADA NA LEITURA DO ARQUIVO HOSPEDES
struct Leitura{
	
 char nome[30],sobrenome[50];
  int dia, mes, ano;
  int CPF, telef;
  char cidade[30], rua[50];
  int  numero;
  int cartao;
  int NPessoas;
  int DiasHospedado;
  int contrato;

   CHECK in; 
   CHECK out;
 
 float total;

}read;


//STRUCT SERVIÇOS
 struct Servico {
	
  char nome[30];
  float preco;
  int NDisponivel;
  int vazio;
 
}servico[MAX];

 struct LeituraServico { // STRUCT USADA NA LEITURA DO ARQUIVO SERVIÇOS
	
  char nome[30];
  float preco;
  int NDisponivel;
  int vazio;
 
}readServico;



#endif