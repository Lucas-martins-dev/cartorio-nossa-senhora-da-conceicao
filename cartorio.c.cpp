#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //bibloteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() // fun��o respons�vel por cadastrar os us�arios no sistema
{
	// inicio da cria��o das vari�veis / string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    // final da cria��o das vari�veis / string
    
    printf("Digite o CPF a ser cadastrado: "); // coletando a informa��o do usu�rio
    scanf("%s", cpf); // %s refere-se a string
   
    strcpy(arquivo, cpf); // respons�vel por copiar os valores das string
   
    FILE *file; // cria o arquivo
    file = fopen(arquivo, "w"); // abrindo o arquivo e o "w" significa escrever
    fprintf(file,cpf); // salvo o valor da vari�vel
    fclose(file); // fecha o arquivo
   
    file = fopen(arquivo, "a"); // abrindo o arquivo, "a" para atualizar informa��o
    fprintf(file,","); // salvo o valor da vari�vel
    fclose(file); // fecha o arquivo
   
    printf("Digite o nome a ser cadastrado: "); //coletando a informa��o do usu�rio
    scanf("%s",nome); // %s refere-se a string
   
    file = fopen(arquivo, "a");  // abrindo o arquivo, "a" para atualizar informa��o
    fprintf(file,nome); // salvo o valor da vari�vel nome
    fclose(file); // fecha o arquivo
   
    file = fopen(arquivo, "a");  // abrindo o arquivo, "a" para atualizar informa��o
    fprintf(file,","); // salvo o valor da vari�vel
    fclose(file); // fecha o arquivo
    
	printf("Digite o sobrenome a ser cadastrado: "); // coletando a informa��o do usu�rio
    scanf("%s",sobrenome); // %s refere-se a string
   
    file = fopen(arquivo, "a");  // abrindo o arquivo, "a" para atualizar informa��o
    fprintf(file,sobrenome); // salvo o valor da vari�vel sobrenome
    fclose(file); // fecha o arquivo
   
    file = fopen(arquivo, "a");  // abrindo o arquivo, "a" para atualizar informa��o
    fprintf(file,","); // salvo o valor da vari�vel
    fclose(file); // fecha o arquivo
   
    printf("Digite o cargo a ser cadastrado: "); // coletando informa��o do usu�rio
    scanf("%s", cargo); // %s refere-se a string
   
    file = fopen(arquivo, "a"); // abrindo o arquivo, "a" para atualizar informa��o
    fprintf(file,cargo); // salvo o valor da vari�vel cargo
    fclose(file); // fecha o arquivo
     
    system("pause"); // fun��o de pausar
   
}

int consulta() // fun��o de consultar os usu�rios
{
    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	// inicio da cria��o das vari�veis / string
    char cpf[40];
    char conteudo[200];
	// final da cria��o das vari�veis / string
    printf("Digite o CPF a ser consultado: "); // coletando a informa��es do usu�rio
    scanf("%s",cpf); // %s refere-se a string
  	
    FILE *file;  // cria o arquivo
    file = fopen(cpf,"r"); // abrindo o arquivo, o "r" � para ler o arquivo
  	
    if(file == NULL) // est� comparando se o arquivo � nulo
    {
	    printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.\n"); // informa��o para o usu�rio
    }
	
    while(fgets(conteudo, 200, file) != NULL) // fun��o de criar o arquivo dentro
    {
	    printf("\nEssas s�o as informa��es do usu�rio: "); // mostrando informa��es
	    printf("%s", conteudo); // salvando o conte�do
	    printf("\n\n"); // pulando linhas no final
    }
  	fclose(file); // fecha o arquivo
    system ("pause"); // fun��o de pausar

		
}

int deletar() // fun��o de deletar os usu�rios
{
    char cpf[40];
	// final da cria��o das vari�veis / string
	printf("Digite o CPF do usu�rio a ser deletado: "); // coletando informa��es do usu�rio
	scanf("%s",cpf); // %s refere-se a string
	 
	remove(cpf);
	
	FILE *file;  // cria o arquivo
	file = fopen(cpf,"r"); // abrindo o arquivo, o "r" � para ler o arquivo
	fclose(file); // fecha o arquivo
	
	if(file == NULL) // est� comparando se o arquivo � nulo
   {
   	 printf("O usu�rio n�o se encontra no sistema!.\n"); // informa��o para o usu�rio
   	 system("pause"); // fun��o de pausar
   }
     else
     printf("Usu�rio deletado com sucesso!.\n"); // informa��o para o usu�rio
}



int main()
    {
	int opcao=0; // definindo vari�veis
	int laco=1;

	for(laco=1;laco=1;)
	{
    
	    system("cls");  // fun��o de limpar a tela
		
		setlocale(LC_ALL, "Portuguese"); // definindo linguagem
	
	    printf("### Cart�rio Nossa Senhora Da Concei��o ###\n\n"); // inicio do menu
	    printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - Consultar nomes\n");
	    printf("\t3 - Deletar nomes\n\n");
		printf("\t4 - Sair do sistema\n\n"); 
	    printf("Op��o: "); // fim do menu
	
	    scanf("%d", &opcao); // armezenando a escolha do usu�rio
	
	    system("cls"); // fun��o de limpar a tela
	    
	     switch(opcao) // inicio da sele��o do menu
	    {
	        case 1:
	        registro(); // chamada de fun��es
		    break; // fechando a chave
		
		    case 2:
		    consulta(); // chamada de fun��es
		    break; // fechando a chave
		
		    case 3:
		    deletar(); // chamada de fun��es
		    break; // fechando a chave
		    
		    case 4:
		    printf("Obrigado por utilizar o sistema!\n");
		    return 0;
		    break;
		    
			default: 
	  	    printf("essa op��o n�o est� dispon�vel!\n"); // definindo uma op��o inv�lida
		    system("pause");
		    break;
				// fim da sele��o do menu	
		}
		
		
    }
}
