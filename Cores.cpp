#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
 
int main(void){
    //vari�veis
    char comando[9] = "color ";
    char cores[2];
    //comando de regionaliza��o
    setlocale(LC_ALL, "Portuguese");
    //t�tulo do programa
    SetConsoleTitle("Cores com system");
    
    printf ("Tabela de cores:\n\n");
    printf ("\t0 - Preto\t8 - Cinza\n");
    printf ("\t1 - Azul\t9 - Azul Claro\n");
    printf ("\t2 - Verde\tA - Verde Claro\n");
    printf ("\t3 - Verde �gua\tB - Verde �gua Claro\n");
    printf ("\t4 - Vermelho\tC - Vermelho Claro\n");
    printf ("\t5 - Roxo\tD - Lil�s\n");
    printf ("\t6 - Amarelo\tE - Amarelo Claro\n");
    printf ("\t7 - Branco\tF - Branco Brilhante\n");
    
    printf ("\n\nCor de fundo: ");
    scanf("%c", &cores[0]);
    getchar();
    
    printf ("Cor do texto: ");
    scanf("%c", &cores[1]);
    
    strcat (comando, cores);
    
    system (comando);
}
