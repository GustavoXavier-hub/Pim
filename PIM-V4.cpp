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

	printf ("\t Escolha a opção: ");
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
	    printf ("Mês: ");
	    scanf ("%d",& mes);
	    printf("Ano: ");
	    scanf ("%d", & ano);

	    id=2020-ano;
	    printf ("Idade: %d\n\n",id);
	    printf ("\t... Contato e Informações...\n\tAdicionais\n\n");
	    printf ("Endereço:(Ex: Av. São Paulo, 30) \n");
	    scanf("%d",& endereco);
	    printf ("Bairro: \n");
	    scanf ("%d",& bairro);
		printf ("Telefone:\n ");
		scanf ("%d",&cel);
		printf ("E-mail:\n ");
		scanf ("%d",& email);
		printf ("Estado: (Ex: SP):\n ");
	    scanf("%s",& est);
	    printf ("Cidade: (Ex: São Paulo):\n ");
		scanf ("%s",&cid);

		printf ("\n\t...Cadastro realizado com sucesso...\n\n");
	    system ("pause");
		break;

		case 2:
		system ("cls");
		//visualização
		printf ("\n\t...Visualização...\n\n");
		printf ("Primeiro Nome: %s\n", nome);
	    printf("Sobrenome: %s\n",sob);
	    printf("Cpf: %d",cpf);
	    printf("Sexo: (F ou M): %s\n",sexo);
	    printf("Data de nascimento\n");
	    printf("Dia:%d", dia);
	    printf("Mês:%d",mes);
	    printf("Ano:%d", ano);
	    printf("Idade:%d",id);
	    printf("\n\t...................\n\n");
	    printf("Endereço:(Ex: Av. São Paulo, 30) %d\n", endereco);
	    printf("Bairro: %d\n",bairro);
	    printf("Telefone: %d\n",cel);
		printf("E-mail: %d\n",email);
		printf("Estado: (Ex: SP): %s\n", est);
		printf("Cidade: (São Paulo): %s\n\n",cid);

		//alteração de cadastro
		printf("\n\n\t\tAlterar Cadastro do Paciente");
		printf("\n\t\tDigite 8 caso deseje (Caso NÃO queira alterar nenhum campo\n\t tecle outro número):\n\t\t");
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
		printf ("Mês: %d\n",mes);
		printf ("Ano: %d\n",ano);
		printf ("6-Idade: %d\n",id);
		printf ("7-Endereço: %d\n",endereco);
		printf ("8-Bairro: %d\n",bairro);
		printf ("9-Telefone:%d\n",cel);
		printf ("10-E-mail:%d\n",email);
		printf ("11-Estado: (Ex: SP): %s\n", est);
		printf ("12-Cidade: (São Paulo): %s\n\n",cid);
		system ("cls");
		break;

		case 3:
		system ("cls");
		//sobre a MedWOrk
		printf("\n\t                      MEDWORK\n");
		printf("\t-----------------------------------\n\n");

		printf ("\n\t.........................Sobre.........................\n\n");
		printf ("\tOla.... visitante\n");
		printf("Há cerca de 20 anos nascia a Clínica MedWork, localizada no centro de São Paulo. A ideia veio a partir de quatro amigos recém formados na faculdade:\n");
		printf("A princípio com uma unidade e com quatro salas de atendimento e um número bem restrito de funcionários, mas sempre visando a qualidade no atendimento e a ética profissional:\n");
		printf("Aos poucos a MedWork foi crescendo e contratando bons profissionais de diferentes especialidades médicas, oferecendo a todos seriedade e respeito:\n");
		printf("Devido ao atendimento eficaz e profissional, não demorou muito e logo veio mais duas unidades, somando um total de três unidades:\n");
		system ("pause");
		system ("cls");
		break;

		case 4: // deletar
		system ("cls");

		nome [0]='\0';                           //zerar variaveis
		sob [0]='\0';
		cpf [0]='\0';
		sexo [0]='\0';


		printf ("\t....Cadastro Excluído....\n\n");
		system ("pause");
		system ("cls");
		break;


		case 5:
		system ("cls");
		// sair
		printf("Deseja Realmente Sair do Sistema?\n\n");
		printf("\t 5-Sim  6-Não\n\n");
		printf("Sua escolha: ");
		scanf ("%d",&menu);
		if (menu==5){
	    system("cls");
		printf ("Você Saiu do Sistema!");
		system ("cls");
		break;
		}
		return 0;
	}
}
}
}
