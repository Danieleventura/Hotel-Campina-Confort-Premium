#ifndef FUNCOES_H
#define FUNCOES_H


#define MAX 200

//FUN��ES HOSPEDE.C
void LeituraHospedes();
int Salvar(int n);
void cadastro ();
void listarHospedes ();
void EditarEndereco (int posicao);
void EditarHospedagem (int posicao);
void EditarHospede ();
void RemoverEndereco (int posicao);
void RemoverHospedagem (int posicao);
void Remover();
void PesquisarHospede();
void menuHospede();


//FUN��ES DIARIA.C
void DiferecaDatas(int NHospede);
void check(int NHospede);


//FUN��ES CONTRATO
void IniciarLista();
void Restaurante(int posicao);
void AluguelCarros(int posicao);
void AdicionarServico(int posicao);
void AtualizarContrato();
void PesquisarContrato();
void RemoverContrato();
void FecharContrato();
void C_fechado();
void C_aberto();
void menuContratos();

//FUN�OES SERVI�O
int LeituraServicos();
int SalvarServicos(int n);
void cadastroServico ();
void listarServico ();
void EditarServico ();
void RemoverServico();
void PesquisarServico();
void menuServicos();

#endif