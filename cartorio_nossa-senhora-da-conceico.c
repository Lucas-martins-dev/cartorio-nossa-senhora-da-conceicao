#include <stdio.h> // Biblioteca de Comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de Aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de Aloca��es de Texto por Regi�o

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf ("### Cartorio_Nossa_Senhora_Da_Conceicao\n\n");
	printf ("Escolha_A_Op��o_Desejada_Do_Menu:\n\n ");
	printf ("\t1 - Registrar Nomes\n");
	printf ("\t2 - Consultar Nomes\n");
	printf ("\t3 - Deletar Nomes\n");
	printf ("\Esse softare foi desenvolvido por lucas martins");
}
