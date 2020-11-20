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

// dados cadastrais do paciente
struct cad_paciente
{
		;//
	    int cpf,num_cel,num_casa,data_nascimento; // declaraçao variaveis inteiras
	    char rua[25], bairro[20], nome[40]; //declaraçao da varivaveis char


};
        double notas[100];
		FILE *cad_paciente;
		cad_paciente = fopen("cad_paciente.txt", "a");
		struct cad_paciente paciente;
		int info;

		if(cad_paciente == NULL){
        printf("O arquivo esta com erro.");
        return 0;
        };

        printf("Nro de elementos gravados: %d", info);
        fclose(cad_paciente);


        printf("\n\n--------CADASTRO DO PACIENTE--------\n\n");
		getchar();

	printf("Nome do paciente:\n");
	fgets(paciente.nome, 40, stdin);//leitura e salvamento do nome do paciente
	printf("Digite o nome da rua do paciente:\n");
	fgets(paciente.rua, 25, stdin);//leitura e salvamento do nome da rua do paciente
	printf("Digite o nome do bairro do paciente:\n");
	fgets(paciente.bairro, 20, stdin);//leitura e salvamento do bairro do paciente
	printf("Digite o numero de celular do paciente:\n");
	scanf("%d", &paciente.num_cel);//leitura  do numero_celular do paciente
	printf("Digite o CPF do paciente:\n");
	scanf("%d", &paciente.cpf); // leitura do cpf do paciente
	printf("Digite o numero da casa do paciente:\n");
	scanf("%d", &paciente.num_casa);//leitura e salvamento do numero_casa do paciente
	printf("Digite a data de nascimento do paciente:\n");
	scanf("%d", &paciente.data_nascimento); //leitura da data_nascimento do paciente


		printf("\n\n-----------------------Ficha Paciente-----------------------\n\n");


	printf("\nNome: %s\n", paciente.nome);
	printf("\nCPF: %d\n", paciente.cpf);
	printf("\nNumero do celular: %d\n", paciente.num_cel);
	printf("\nRua: %s\n", paciente.rua);
	printf("\nBairro: %s\n", paciente.bairro);
	printf("\nNumero da casa: %d\n", paciente.num_casa);
	printf("\nData de nascimento: %d\n", paciente.data_nascimento);



	 printf("O cadastro esta correto: 2 para s e 3 para n");
        scanf("%d", &info);

        if(info == 2){
                //salvando os dados em arquivo texto
            fprintf(cad_paciente,"\nDADOS DO PACIENTE CADASTRADO\n");
            fprintf(cad_paciente,"Nome : %s\n", paciente.nome);
            fprintf(cad_paciente,"Cpf: %d\n", paciente.cpf);
            fprintf(cad_paciente,"Numero de celular: %d\n",paciente.num_cel);
			fprintf(cad_paciente,"Nome da rua: %s\n", paciente.rua);
			fprintf(cad_paciente,"Nome do bairro: %s\n", paciente.bairro);
          	fprintf(cad_paciente,"Numero da casa: %d\n", paciente.num_casa);
          	fprintf(cad_paciente,"Data de nascimento: %d\n", paciente.data_nascimento);

            fclose(cad_paciente);
            printf("O paciente foi cadastrado com sucesso!\n");
            }else if(info == 3){
            printf("Os dados não foram cadastrados!\n");
            }

	}



//
//		printf("Digite  o codigo do convenio do paciente:\n");
//		scanf("%d",&paciente.pcv); //capturar se paciente tem convenio
//


