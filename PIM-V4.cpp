#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main(void){

system("color F0");
setlocale(LC_ALL, "");

    int menu, cadastro, vis, sair, mud;

	while (menu!=5){
	system ("cls");
	printf ("\n\t MEDWORK\n");

	printf("Bem vindo\n");
	printf(" 1\t Cadastro do Paciente\n 2\t Visualizar Cadastro\n 3\t MedWork\n 4\t Exluir Cadastro\n 5\t Sair\n\n");

	printf ("\t Escolha a op��o: ");
	scanf ("%d", &menu);
	printf("\t......................");
	system ("cls");

	                        // comandos IF
	switch (menu) {
		case 1:
		system ("cls");	   // nova pagina

		//cadastro
		char nome [100],sob[100],cid[100],sexo[100], est[100],end[100], email [100], cpf [100],bairro[100], endereco[100];
		int id, dia, mes, ano, ddd,cel,sang, at;
		system ("cls");
		printf ("\t.....Cadastro do Paciente.....\n\n");
		printf ("Primeiro Nome: ");
		scanf ("%s",&nome);
		printf ("Sobrenome: ");
		scanf ("%s", &sob);
		printf ("Cpf: ");
	    scanf ("%d",& cpf);
		printf("Sexo (F ou M):");
		scanf ("%s",&sexo);
	    printf ("Data de Nascimento:\n");
	    printf("Dia: ");
	    scanf("%d",&dia);
	    printf ("M�s: ");
	    scanf ("%d",& mes);
	    printf("Ano: ");
	    scanf ("%d", & ano);

	    id=2020-ano;
	    printf ("Idade: %d\n\n",id);
	    printf ("\t... Contato e Informa��es...\n\tAdicionais\n\n");
	    printf ("Endere�o:(Ex: Av. S�o Paulo, 30) \n");
	    scanf("%d",& endereco);
	    printf ("Bairro: \n");
	    scanf ("%d",& bairro);
		printf ("Telefone:\n ");
		scanf ("%d",&cel);
		printf ("E-mail:\n ");
		scanf ("%d",& email);
		printf ("Estado: (Ex: SP):\n ");
	    scanf("%s",& est);
	    printf ("Cidade: (Ex: S�o Paulo):\n ");
		scanf ("%s",&cid);

		printf ("\n\t...Cadastro realizado com sucesso...\n\n");
	    system ("pause");
		break;

		case 2:
		system ("cls");
		//visualiza��o
		printf ("\n\t...Visualiza��o...\n\n");
		printf ("Primeiro Nome: %s\n", nome);
	    printf("Sobrenome: %s\n",sob);
	    printf("Cpf: %d",cpf);
	    printf("Sexo: (F ou M): %s\n",sexo);
	    printf("Data de nascimento\n");
	    printf("Dia:%d", dia);
	    printf("M�s:%d",mes);
	    printf("Ano:%d", ano);
	    printf("Idade:%d",id);
	    printf("\n\t...................\n\n");
	    printf("Endere�o:(Ex: Av. S�o Paulo, 30) %d\n", endereco);
	    printf("Bairro: %d\n",bairro);
	    printf("Telefone: %d\n",cel);
		printf("E-mail: %d\n",email);
		printf("Estado: (Ex: SP): %s\n", est);
		printf("Cidade: (S�o Paulo): %s\n\n",cid);

		//altera��o de cadastro
		printf("\n\n\t\tAlterar Cadastro do Paciente");
		printf("\n\t\tDigite 8 caso deseje (Caso N�O queira alterar nenhum campo\n\t tecle outro n�mero):\n\t\t");
		scanf ("d",&mud);

		if (mud==8){

		system ("cls");
		printf ("\n\t......Modificar......\n\n");
		printf ("1-Primeiro nome: %s\n",nome);
		printf ("2-Sobrenome: %s\n",sob);
		printf ("3-Cpf: %d\n",cpf);
		printf ("4-Sexo: (F ou M): %s\n", sexo);
		printf ("5-Data de Nascimento\n");
		printf ("Dia: %d\n",dia);
		printf ("M�s: %d\n",mes);
		printf ("Ano: %d\n",ano);
		printf ("6-Idade: %d\n",id);
		printf ("7-Endere�o: %d\n",endereco);
		printf ("8-Bairro: %d\n",bairro);
		printf ("9-Telefone:%d\n",cel);
		printf ("10-E-mail:%d\n",email);
		printf ("11-Estado: (Ex: SP): %s\n", est);
		printf ("12-Cidade: (S�o Paulo): %s\n\n",cid);
		system ("cls");
		break;

		case 3:
		system ("cls");
		//sobre a MedWOrk
		printf("\n\t                      MEDWORK\n");
		printf("\t-----------------------------------\n\n");

		printf ("\n\t.........................Sobre.........................\n\n");
		printf ("\tOla.... visitante\n");
		printf("H� cerca de 20 anos nascia a Cl�nica MedWork, localizada no centro de S�o Paulo. A ideia veio a partir de quatro amigos rec�m formados na faculdade:\n");
		printf("A princ�pio com uma unidade e com quatro salas de atendimento e um n�mero bem restrito de funcion�rios, mas sempre visando a qualidade no atendimento e a �tica profissional:\n");
		printf("Aos poucos a MedWork foi crescendo e contratando bons profissionais de diferentes especialidades m�dicas, oferecendo a todos seriedade e respeito:\n");
		printf("Devido ao atendimento eficaz e profissional, n�o demorou muito e logo veio mais duas unidades, somando um total de tr�s unidades:\n");
		system ("pause");
		system ("cls");
		break;

		case 4: // deletar
		system ("cls");

		nome [0]='\0';                           //zerar variaveis
		sob [0]='\0';
		cpf [0]='\0';
		sexo [0]='\0';


		printf ("\t....Cadastro Exclu�do....\n\n");
		system ("pause");
		system ("cls");
		break;


		case 5:
		system ("cls");
		// sair
		printf("Deseja Realmente Sair do Sistema?\n\n");
		printf("\t 5-Sim  6-N�o\n\n");
		printf("Sua escolha: ");
		scanf ("%d",&menu);
		if (menu==5){
	    system("cls");
		printf ("Voc� Saiu do Sistema!");
		system ("cls");
		break;
		}
		return 0;
	}
}
}
}
