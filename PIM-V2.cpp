#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){
	
setlocale(LC_ALL, "");	
	
// dados cadastrais do paciente
		

struct cad_paciente
{
		char nome[40];
	    float cpf;
	    int codigo_especialidade;
	    char endereco[40];
		char data_nascimento[40];
		char numero_celular[40];
		char convenio[40];
		int pcv;
};
		
		int i = 1, dados, retornar;
		char forma_pagamento = 'P' || 'C';
		
			
		
 
		FILE *cad_paciente;
		cad_paciente = fopen("cadastro_paciente.txt", "a");
		struct cad_paciente paciente;
		
		if(cad_paciente == NULL){
        printf("O arquvivo esta com erro.");
        };
        
		printf("\n----------------Cadastro do paciente-----------------\n\n\n");
		getchar();
		printf("Digite o nome do paciente:\n");
		fgets(paciente.nome,150,stdin); //capturar nome paciente
		printf("Digite a data de nascimento  do paciente:\n");
		fgets(paciente.data_nascimento,150,stdin); //capturar data_nascimento paciente
		printf("Digite  o endereço do paciente:\n");
		fgets(paciente.endereco,150,stdin); //capturar endereço do paciente	
		printf("Digite  numero de  celular  do  paciente:\n");
		fgets(paciente.numero_celular,150,stdin); //capturar numero do paciente
		printf("O paciente possui convenio:\n");
		fgets(paciente.convenio,150,stdin); //capturar convenio do paciente
		printf("Digita a forma de pagamento:\n");
		scanf("%s", forma_pagamento); // capturar forma de pagamento	
		}
		
        

// 	
//		printf("Digite  o codigo do convenio do paciente:\n");
//		scanf("%d",&paciente.pcv); //capturar se paciente tem convenio
//	
	


