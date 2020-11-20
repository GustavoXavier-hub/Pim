#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 int main(void){
	

setlocale(LC_ALL, "");	
	

		

int opcao = 0;


// login predefinido
{

    char login[15] = "unip";
    char login1[15];
    char senha[15] = "pim2";
    char senha1[15];        
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    while(!login_efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);
        system("cls");  
        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\n\t BEM VINDO A MEDWORK!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    
    }

}
	
	
	struct ficha_paciente // Estrutura da ficha do paciente
	{
		char nome[40], rua[25], bairro[20]; // Declarações das variáveis do tipo char
		int tele_cel, cpf, data_nascimento, tele_casa; // Declarações das variáveis do tipo int
	};
	
	struct ficha_paciente paciente;
	
	printf("\n-----------------------Cadastro do Paciente-----------------------\n\n\n");
	
	printf("Nome do paciente.....:\n");
	fgets(paciente.nome, 40, stdin);
	
	printf("Digite o CPF do paciente.....:\n");
	scanf("%d", &paciente.cpf);
	
	printf("Digite o numero de celular do paciente.....:\n");
	scanf("%d", &paciente.tele_cel);
	
	printf("Digite o nome da rua do paciente.....:\n");
	fgets(paciente.rua, 25, stdin);
	
	printf("Digite o nome do bairro do paciente.....:");
	fgets(paciente.bairro,20, stdin);
	
	printf("Digite o numero da casa do paciente.....:");
	scanf("%d", &paciente.tele_casa);
	
	printf("Digite a data de nascimento do paciente.....:");
	scanf("%d", &paciente.data_nascimento);
	
	printf("\n\n-----------------------Ficha Paciente-----------------------\n\n");
	
	printf("\nNome: %s\n", paciente.nome);
	printf("\nCPF: %d\n", paciente.cpf);
	printf("\nNumero do celular: %d\n", paciente.tele_cel);
	printf("\nRua: %s\n", paciente.rua);
	printf("\nBairro: %s\n", paciente.bairro);
	printf("\nNumero da casa: %d\n", paciente.tele_casa);
	printf("\nData de nascimento: %d\n",paciente.data_nascimento);
	
	return(0);
	}
