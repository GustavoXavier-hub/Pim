#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//-- Estruct cadastro ------------------

struct cadastro{
int idade,ex,sexo;//esta vari�vel ex serve para saber se o cadastro est� exclu�do ou n�o. se for 1 est� exclu�do se for 0 n�o est�.
char nome[50];
float salario, comissao;
};

//-- Vari�veis do tipo: global -----------

FILE *cadastros;
struct cadastro cadast;

//-- Declarando fun��es ------------

void abre_arquivo(){ // fun��o que abre o arquivo de cadastros

cadastros=fopen("cadastros.txt","rb+"); // tenta abrir o arquivo (rb+)
if(cadastros == NULL) // se ele ainda n�o existe
cadastros=fopen("cadastros.txt","wb+");// ent�o criamos ele (wb+)
if(cadastros == NULL) // se a cria��o tamb�m n�o funcionar
printf("\nErro ao abrir/criar arquivo de cadastros"); // ent�o uma mensagem de erro � mostrada
}

//------ Pesquisa de Clientes --------------------------------

char pesquisa_cadast(char nome2[30]){


rewind(cadastros);// coloca o ponteiro no inicio do arquivo para pesquisar desde o come�o
printf("feof: %d", feof(cadastros));
while(feof(cadastros) == 0){// enquanto n�o chega no fim do arquivo...
fread(&cadast, sizeof(struct cadastro), 1, cadastros);// l� uma struct cadastro do arquivo e copia ela para a vari�vel global cadast
if(strcmp(cadast.nome,nome2) == 0 && cadast.ex == 0)return 1;// se o codigo do cadastro que eu acabei de ler (cadast.nome) � igual ao c�digo que passei pra fun��o (cod) E o cadastro n�o foi exclu�do...
} // ent�o encerro a fun��o retornando uma resposta positiva (1)
return 0;// se o while terminou sem passar pelo "return 1" ent�o o c�digo n�o existe. Neste caso retorno uma resposta negativa (0)
}

//------- Cadastro de Clientes -------------------------------

void cad_cadast(){
int pos;
struct cadastro aux;
system("cls");
printf("- Novo cliente para cadastrar -");
printf("\n\nNome: ");
fflush(stdin);
gets(aux.nome); //assim que recebo o nome digitado pelo usu�rio

if(pesquisa_cadast(aux.nome) == 0){ // chamo a pesquisa pra saber se j� existe. Se n�o existir (== 0) ent�o...
printf("\n\nSexo (1- Masculino , 2- Feminino): ");
fflush(stdin);
scanf("%d",&aux.sexo);
printf("\nIdade: ");
fflush(stdin);scanf("%d",&aux.idade);
printf("\nValor do salario: ");
fflush(stdin);scanf("%f", &aux.salario);
printf("\nPreco da comissao vendida: ");
fflush(stdin);scanf("%f", &aux.comissao);
aux.ex=0; // indica que o cadastro n�o est� exclu�do
fseek(cadastros, 0, SEEK_END);// posiciono o ponteiro no final do arquivo
fwrite(&aux, sizeof(struct cadastro), 1, cadastros);// e gravo a vari�vel aux que eu acabei de preencher
system("cls");
printf("Cadastro efetuado com sucesso!");
getch();
}
else {
printf("\n\nCadastro ja existente.");// se a pesquisa retornar o valor 1 e que o cadastro j� existe
getch();
}
}

//--------- Altera��o de Cadastros ---------------------------------------------------------------------

void alt_cadast(){
struct cadastro aux;
int resp, flag=1, pos;

system("cls");
printf("- Alteracao de Clientes -");
printf("\n\nNome: ");
fflush(stdin);
gets(aux.nome);

if(pesquisa_cadast(aux.nome) == 0){
printf("\nCadastro nao encontrado!");
getch();
}
else{
fseek(cadastros, -sizeof(struct cadastro), SEEK_CUR); // se o cadastro existe ent�o posiciono o ponteiro para o inicio dele
fread(&aux, sizeof(struct cadastro), 1, cadastros); // assim eu posso fazer a leitura no arquivo e colocar os dados na vari�vel aux
printf("\nNome: %s", aux.nome);
printf("\nSexo (1-Masc,2-Fem): %d", aux.sexo); //
printf("\nIdade: %d", aux.idade); //
printf("\nValor do salario: %.2f", aux.salario); // mostro os dados do cadastro e pergunto se
printf("\nPreco da comissao vendida: %.2f", aux.comissao); // o usu�rio quer mesmo alter�-los
printf("\n\nAlterar? 1- sim 0- nao "); //
scanf("%d", &resp); //
do{
switch(resp){
case 0:
flag=0;
break;
case 1: // se a resposta for sim (1)...
printf("\n- Novos Dados- \n");
printf("\nNome: "); //
fflush(stdin);gets(aux.nome);
printf("\nSexo (1-Masc,2-Fem): ");
fflush(stdin);scanf("%d",&aux.sexo); //
printf("\nIdade: "); //
fflush(stdin);scanf("%d",&aux.idade); // ...ent�o eu obtenho os novos dados
printf("\nValor do salario: "); //
fflush(stdin);scanf("%f", &aux.salario);//
printf("\nPreco da comissao vendida: "); //
fflush(stdin);scanf("%f", &aux.comissao);//
fseek(cadastros, -sizeof(struct cadastro), SEEK_CUR); // volto o ponteiro para o in�cio da ficha
fwrite(&aux, sizeof(struct cadastro), 1, cadastros); //e gravo os novos dados que o usu�rio acabou de digitar
system("cls");
printf("Cadastro alterado com sucesso!");
getch();
flag=0;
break;
default:
printf("\nOpcao invalida! Digite novamente: ");
scanf("%d", &resp);
}
}while(flag);
}
}

//------ Busca/Pesquisa de Cadastros --------------------------------

void mostra_cadast(){
int pos;
struct cadastro aux;
system("cls");
printf("- Pesquisa de Cadastro -");
printf("\n\nNome: ");
fflush(stdin);
gets(aux.nome);

if(pesquisa_cadast(aux.nome) == 0){
printf("\ncadastro nao encontrado!");
getch();
}
else {
fseek(cadastros, -sizeof(struct cadastro), SEEK_CUR); // se o cadastro existe eu volto o ponteiro para o in�cio da ficha
fread(&aux, sizeof(struct cadastro), 1, cadastros);
printf("\nNome: %s", aux.nome);
printf("\nSexo (1-Masc,2-Fem): %d", aux.sexo); //
printf("\nIdade: %d", aux.idade); // e mostro os dados
printf("\nValor do salario: %.2f", aux.salario); //
printf("\nComissao vendida: %.2f", aux.comissao); //
getch();
}
}



//--------------------------------------
void exc_cadast(){

struct cadastro aux;
int resp, flag=1, pos;

system("cls");
printf("- Excluir cadastro -");
printf("\n\nNome: ");
fflush(stdin);
gets(aux.nome);

if(pesquisa_cadast(aux.nome) == 0){
printf("\nCadastro nao encontrado!");
getch();
}
else {
fseek(cadastros, -sizeof(struct cadastro), SEEK_CUR); // se o cadastro existe ent�o posiciono o ponteiro para o inicio dele
fread(&aux, sizeof(struct cadastro), 1, cadastros); // assim eu posso fazer a leitura no arquivo e colocar os dados na vari�vel aux
printf("\nNome: %s", aux.nome);
printf("\nSexo (1-Masc,2-Fem): %d", aux.sexo); //
printf("\nIdade: %d", aux.idade); //
printf("\nValor do salario: %.2f", aux.salario);// mostro os dados do cadastro e pergunto se
printf("\nPreco da comissao vendida: %.2f", aux.comissao);// o usu�rio quer mesmo exclu�-los
printf("\n\nDeseja excluir? (1- Sim 0- Nao): "); //
scanf("%d", &resp);
do{
switch(resp){
case 0:
flag=0;
break;
case 1: // se a resposta for sim (1)...
aux.ex=1; // altero o campo ex para 1
fseek(cadastros, -sizeof(struct cadastro), SEEK_CUR);// ponho o ponteiro no in�cio da ficha
fwrite(&aux, sizeof(struct cadastro), 1, cadastros); // e a gravo novamente mas agora com o campo ex valendo 1, o que faz com que a pesquisa n�o o encontre
system("cls");
printf("Cadastro excluido com sucesso!");
getch();
flag=0;
break;
default:
printf("\noOpcao invalida! Digite novamente: ");
scanf("%d", &resp);
}
}while(flag);
}
}

//---------- Listar cadastros -------------------

void list_cadast(){
struct cadastro aux;
int cont=1,auxs;
system("CLS");
printf("\t\t- Categorias -");
printf("\nListar por Sexo: \n1- Masculino 2- Feminino\n\nDigite sua opcao: ");
fflush(stdin);
scanf("%d",&auxs);
system("CLS");
rewind(cadastros);// coloca o ponteiro no inicio do arquivo para pesquisar desde o come�o
while(feof(cadastros) == 0 ){// enquanto n�o chega no fim do arquivo...
fread(&aux, sizeof(struct cadastro), 1, cadastros);
if (aux.sexo == auxs && aux.ex == 0)
{
printf("\n\n- %do Funcionario -",cont);
printf("\nNome: %s",aux.nome);
printf("\nSexo: %d",aux.sexo); //
printf("\nIdade: %d",aux.idade); // e mostro os dados
printf("\nValor do salario: %.2f", aux.salario); //
printf("\nComissao vendida: %.2f", aux.comissao); //
cont++;
printf("\n");
getch();
}

}


}

//----- lixeira ----

void lixeira_cadast(){

struct cadastro aux;
int cont=1,op;

system("cls");
printf("- %do Funcionario Excluido - ",cont);
rewind(cadastros);// coloca o ponteiro no inicio do arquivo para pesquisar desde o come�o
while(feof(cadastros) != EOF ){// enquanto n�o chega no fim do arquivo...
fread(&aux, sizeof(struct cadastro), 1, cadastros);
if (aux.ex == 1){
printf("\n\n- %do Funcionario -",cont);
printf("\nNome: %s",aux.nome);
printf("\nSexo: %d",aux.sexo); //
printf("\nIdade: %d",aux.idade); // e mostro os dados
printf("\nValor do salario: %.2f", aux.salario); //
printf("\nComissao vendida: %.2f", aux.comissao); //
cont++;
printf("\n");
printf("Deseja recuperar o cadastro? (1-Sim,2-Nao): ");
scanf("%d",&op);
if (op==1){
aux.ex=0; // altero o campo ex para 1
fseek(cadastros, -sizeof(struct cadastro), SEEK_CUR);// ponho o ponteiro no in�cio da ficha
fwrite(&aux, sizeof(struct cadastro), 1, cadastros); //
printf("Cadastro recuperado com sucesso!");
}
else{
getch();

}
}

}
}

//--------------------------------------

void menu_principal(){

int op;

do{
system("cls");
system("color F0");
printf(" %c----------------------------------------------------------------------------%c\n",201,187);
printf(" | ");
printf("\t\t\t- CADASTRO DE FUNCIONARIOS -");
printf("\t\t\t |\n");
printf(" %c----------------------------------------------------------------------------%c\n\n",200,188);
printf("\t\t\t %c----------%c\t\t\t\t ",201,187);
printf("\t\t\t | MENU: ");
printf("|\t\t\t\t \n");
printf("\t\t %c-----------%c----------%c------------%c \n",201,200,188,187);
printf("\t\t | <1> Novo cadastro |\n");
printf("\t\t |-----------------------------------|\n");
printf("\t\t | <2> Pesquisar cadastro |\n");
printf("\t\t |-----------------------------------|\n");
printf("\t\t | <3> Alterar cadastro |\n");
printf("\t\t |-----------------------------------|\n");
printf("\t\t | <4> Excluir cadastro |\n");
printf("\t\t |-----------------------------------|\n");
printf("\t\t | <5> Listar Categorias |\n");
printf("\t\t |-----------------------------------|\n");
printf("\t\t | <6> Lixeira |\n");
printf("\t\t |-----------------------------------|\n");
printf("\t\t | <0> Sair |\n");
printf("\t\t %c-----------------------------------%c\n",200,188);
printf("\n%c----------------------------------------------------------------------------%c\n",201,187);
printf("| ");
printf("\t\t\tDigite a opcao desejada: ");
fflush(stdin);
scanf("%d", &op);

switch(op){
case 1:
cad_cadast();
break;
case 2:
mostra_cadast();
break;
case 3:
alt_cadast();
break;
case 4:
exc_cadast();
break;
case 5:
list_cadast();
break;
case 6:
lixeira_cadast();
break;
case 0:
break;
default:
printf("\n\nOpcao Invalida!\n\n");
getch();
}
}while(op);
}

//-- programa ------------------------

int main(){
abre_arquivo();
menu_principal();
fclose(cadastros);
}
//    return 0;
//}
