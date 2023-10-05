#include <stdio.h> // Biblioteca de Comunicação com o usuário
#include <stdlib.h> // Biblioteca de Alocação de espaço em memória
#include <locale.h> // Biblioteca de Alocações de Texto por Região

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf ("### Cartorio_Nossa_Senhora_Da_Conceicao\n\n");
	printf ("Escolha_A_Opção_Desejada_Do_Menu:\n\n ");
	printf ("\t1 - Registrar Nomes\n");
	printf ("\t2 - Consultar Nomes\n");
	printf ("\t3 - Deletar Nomes\n");
	printf ("\Esse softare foi desenvolvido por lucas martins");
}
