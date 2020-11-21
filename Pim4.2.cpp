#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main(){

system("color F0");
setlocale(LC_ALL, "");

    int menu=0, cadastro, vis, sair, mud;

	while (menu!=5){
	system ("cls");
	printf ("\n\t MEDWORK\n");

	printf("Bem vindo\n");
	printf("1\t Cadastro do Paciente\n");
    printf("2\t Visualizar Cadastrados\n");
    printf("3\t Sobre\n");
    printf("4\t Excluir Paciente\n");
    printf("5\t Sair\n\n");
    
	printf ("\t Escolha a opção: ");
	scanf ("%d", &menu);
	printf("\t......................");
	system ("cls");

	                        // comandos das condiçoes (IF)
	switch (menu) {
		case 1:
		system ("cls");	   // nova pagina

		//cadastro
		char nome [100],sob[100],sexo[100],cid[100],est[100],al[100], end[100], email[100];
		int id,sang, dia, mes, ano, ddd,cel, at;
		system ("cls");
		printf ("\t.....Cadastro do Paciente.....\n\n");
		printf ("Primeiro Nome: ");
		scanf ("%s",&nome);
		printf ("Sobrenome: ");
		scanf ("%s", &sob);
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
		printf ("Telefone:\n ");
		scanf ("%d",&cel);		
		printf ("Estado: (Ex: SP):\n ");
	    scanf("%s",& est);
	    printf ("Cidade: (Ex: São Paulo):\n ");
		scanf ("%s",& cid);
		printf ("\n\t...Dados Médicos...\n\n");
		printf ("Tipo Sanguíneo:\n");
		printf ("1.[A+] 2.[A-] 3.[B+] 4.[B-] 5.[O+] 6.[O-] 7.[AB+] 8.[AB-]\n ");
        scanf ("%d",& sang);
		if (sang==1){
			printf ("*A Positivo\n");
		}
	    if (sang==2){
			printf ("*A Negativo\n");
		} 
        if (sang==3){
			printf ("*B Positivo\n");
		}
		if (sang==4){
			printf ("*B Negativo\n");
		}
		if (sang==5){
			printf ("*O Positivo\n");
		}
		if (sang==6){
			printf ("*O Negativo\n");
		}
		if (sang==7){
			printf ("*AB Positivo\n");
		}
		if (sang==8){
			printf ("*AB Negativo\n");
		}
		printf ("\nComponente causador de alergia (caso NÂO haja digite -n-): \n");
		scanf ("%d",&al);
		system ("cls");
		printf("\n\t...Cadastro Realizado com Sucesso!...\n\n");
		system ("pause");
		system ("cls");
		break;
									
		
		case 2:
		system ("cls");
		//visualização
		printf ("\n\t...Visualização...\n\n");
		printf ("Primeiro Nome: %s\n", nome);
	    printf("Sobrenome: %s\n",sob);   
	    printf("Sexo: (F ou M): %s\n",sexo);
	    printf("Data de nascimento\n");
	    printf("Dia:%d", dia);
	    printf("Mês:%d",mes);
	    printf("Ano:%d", ano);
	    printf("Idade:%d",id);
	    printf("\n\t...................\n\n");	    	    
	    printf("Telefone: %d\n",cel);		
		printf("Estado: (Ex: SP): %s\n", est);
		printf("Cidade: (Ex: São Paulo): %s\n",cid);
		printf("\n\t................\n\n ");
		printf("Tipo Sanguíneo: %d",sang);	
        if (sang==1){
		    printf("*A Positivo\n");	
		} 
        if (sang==2){
		    printf("*A Negativo\n");	
		}
        if (sang==3){
		    printf("*B Positivo\n");	
		}
        if (sang==4){
		    printf("*B Negativo\n");	
		} 
        if (sang==5){
		    printf("*O Positivo\n");	
		}
        if (sang==6){
		    printf("*O Negativo\n");	
		}
        if (sang==7){
		    printf("*AB Positivo\n");	
		}
        if (sang==8){
		    printf("*AB Negativo\n");	
		}


		//alteração de cadastro
		printf("\nComponente causador de alergia (caso NÂO haja digite -n-):%s \n", al);
		printf("\n\n\t\tAlterar Cadastro do Paciente");
		printf("\n\t\tDigite 8 caso deseje (Caso NÃO queira alterar nenhum campo\n\t tecle outro número):\n\t\t");
		scanf ("%d",&mud);

		if (mud==8){

		system ("cls");
		printf ("\n\t......Modificar......\n\n");
		printf ("1-Primeiro nome: %s\n",nome);
		printf ("2-Sobrenome: %s\n",sob);		
		printf ("3-Sexo: (F ou M): %s\n", sexo);
		printf ("4-Data de Nascimento\n");
		printf ("Dia: %d\n",dia);
		printf ("Mês: %d\n",mes);
		printf ("Ano: %d\n",ano);
		printf ("5-Idade: %d\n",id);				
		printf ("6-Telefone:%d\n",cel);		
		printf ("7-Estado: (Ex: SP): %s\n", est);
		printf ("8-Cidade: (São Paulo): %s\n\n",cid);
		printf ("9-Tipo Sanguíneo: %d\n", sang);
		if (sang==1){
			printf ("*A Positivo\n");
		}
		if (sang==2){
			printf ("*A Negativo\n");
		}
		if (sang==3){
			printf ("*B Positivo\n");
		}
		if (sang==4){
			printf ("*B Negativo\n");
		}
		if (sang==5){
			printf ("*O Positivo\n");
		}
		if (sang==6){
			printf ("*O Negativo\n");
		}
		if (sang==7){
			printf ("*AB Positivo\n");
		}
		if (sang==8){
			printf ("*AB Negativo\n");
		}
		if (at==1){
			printf("1-Primeiro Nome: ");
			scanf ("%s", nome);
		}
		if (at==2){
			printf("2-Sobrenome: ");
			scanf ("%s", sob);
		}   
		if (at==3){
			printf("3-Sexo: ");
			scanf ("%s", sexo);
		}
		if (at==4){
			printf("4-Data de Nascimento\n:");
			printf("Dia: ");
			scanf ("%d",&dia);
			printf("Mês: ");
			scanf("%d",&mes);
			printf("Ano: ");
			scanf ("%d",&ano);					
		}
		if (at==6){
			printf("6-Telefone: ");
			scanf ("%d",&cel);				
		}	
		if (at==7){
			printf("7-Estado(Ex: SP): ");
			scanf ("%s",&est);
		}
		if (at==8){
			printf("8-Cidade(Ex: São Paulo): ");
			scanf ("%s",&cid);		
		}
		if (at==9){
			printf("9-Tipo Sanguíneo: \n");
			printf ("1.[A+] 2.[A-] 3.[B+] 4.[B-] 5.[O+] 6.[O-] 7.[AB+] 8.[AB-]\n ");
			scanf ("%d",&sang);		
		
		                //  If dentro do outro if (relacionando ao tipo sanguineo)
		                
		if (sang==1);{
		   printf("*A Positivo\n");		 
		 }
		if (sang==2);{
		   printf("*A Negativo\n");		 
		 }
		if (sang==3);{
		   printf("*B Positivo\n");		 
		 }
		if (sang==4);{
		   printf("*B Negativo\n");		 
		 }
		if (sang==5);{
		   printf("*O Positivo\n");		 
		 }
		if (sang==6);{
		   printf("*O Negativo\n");		 
		 }
		if (sang==7);{
		   printf("*AB Positivo\n");		 
		 }
		if (sang==8);{
		   printf("*AB Negativo\n");		 
		 }
	     }
		
		//tipo sanguineo encerrado
		id=2020-ano;
		
		if (at=10){
			printf("\n10-Componente causador de alergia: ");
			scanf("%s",&al);
		}
		
		system ("cls");
		break;
		
		case 3:
		system ("cls");
		//sobre a MedWOrk
		printf("\n\t                      MEDWORK\n");
		printf("\t-----------------------------------\n\n");

		printf ("\n\t.........................Sobre.........................\n\n");
		printf ("\tOla.... visitante\n");

		system ("pause");
		system ("cls");
		break;

		case 4: // deletar
		system ("cls");

		nome [0]='\0';                           //zerar variaveis
		sob [0]='\0';	
		sexo [0]='\0';
        cid [0]='\0';
        est [0]='\0'; 
        al [0]='\0';
        
        
        dia=0;
        mes=0;
        ano=0;
        cel=0;
        sang=0;
        id=0;



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
	}
}
}
}
