#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //bibloteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro() // função responsável por cadastrar os usúarios no sistema
{
	// inicio da criação das variáveis / string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    // final da criação das variáveis / string
    
    printf("Digite o CPF a ser cadastrado: "); // coletando a informação do usuário
    scanf("%s", cpf); // %s refere-se a string
   
    strcpy(arquivo, cpf); // responsável por copiar os valores das string
   
    FILE *file; // cria o arquivo
    file = fopen(arquivo, "w"); // abrindo o arquivo e o "w" significa escrever
    fprintf(file,cpf); // salvo o valor da variável
    fclose(file); // fecha o arquivo
   
    file = fopen(arquivo, "a"); // abrindo o arquivo, "a" para atualizar informação
    fprintf(file,","); // salvo o valor da variável
    fclose(file); // fecha o arquivo
   
    printf("Digite o nome a ser cadastrado: "); //coletando a informação do usuário
    scanf("%s",nome); // %s refere-se a string
   
    file = fopen(arquivo, "a");  // abrindo o arquivo, "a" para atualizar informação
    fprintf(file,nome); // salvo o valor da variável nome
    fclose(file); // fecha o arquivo
   
    file = fopen(arquivo, "a");  // abrindo o arquivo, "a" para atualizar informação
    fprintf(file,","); // salvo o valor da variável
    fclose(file); // fecha o arquivo
    
	printf("Digite o sobrenome a ser cadastrado: "); // coletando a informação do usuário
    scanf("%s",sobrenome); // %s refere-se a string
   
    file = fopen(arquivo, "a");  // abrindo o arquivo, "a" para atualizar informação
    fprintf(file,sobrenome); // salvo o valor da variável sobrenome
    fclose(file); // fecha o arquivo
   
    file = fopen(arquivo, "a");  // abrindo o arquivo, "a" para atualizar informação
    fprintf(file,","); // salvo o valor da variável
    fclose(file); // fecha o arquivo
   
    printf("Digite o cargo a ser cadastrado: "); // coletando informação do usuário
    scanf("%s", cargo); // %s refere-se a string
   
    file = fopen(arquivo, "a"); // abrindo o arquivo, "a" para atualizar informação
    fprintf(file,cargo); // salvo o valor da variável cargo
    fclose(file); // fecha o arquivo
     
    system("pause"); // função de pausar
   
}

int consulta() // função de consultar os usuários
{
    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	// inicio da criação das variáveis / string
    char cpf[40];
    char conteudo[200];
	// final da criação das variáveis / string
    printf("Digite o CPF a ser consultado: "); // coletando a informações do usuário
    scanf("%s",cpf); // %s refere-se a string
  	
    FILE *file;  // cria o arquivo
    file = fopen(cpf,"r"); // abrindo o arquivo, o "r" é para ler o arquivo
  	
    if(file == NULL) // está comparando se o arquivo é nulo
    {
	    printf("Não foi possível abrir o arquivo, não localizado!.\n"); // informação para o usuário
    }
	
    while(fgets(conteudo, 200, file) != NULL) // função de criar o arquivo dentro
    {
	    printf("\nEssas são as informações do usuário: "); // mostrando informações
	    printf("%s", conteudo); // salvando o conteúdo
	    printf("\n\n"); // pulando linhas no final
    }
  	fclose(file); // fecha o arquivo
    system ("pause"); // função de pausar

		
}

int deletar() // função de deletar os usuários
{
    char cpf[40];
	// final da criação das variáveis / string
	printf("Digite o CPF do usuário a ser deletado: "); // coletando informações do usuário
	scanf("%s",cpf); // %s refere-se a string
	 
	remove(cpf);
	
	FILE *file;  // cria o arquivo
	file = fopen(cpf,"r"); // abrindo o arquivo, o "r" é para ler o arquivo
	fclose(file); // fecha o arquivo
	
	if(file == NULL) // está comparando se o arquivo é nulo
   {
   	 printf("O usuário não se encontra no sistema!.\n"); // informação para o usuário
   	 system("pause"); // função de pausar
   }
     else
     printf("Usuário deletado com sucesso!.\n"); // informação para o usuário
}



int main()
    {
	int opcao=0; // definindo variáveis
	int laco=1;

	for(laco=1;laco=1;)
	{
    
	    system("cls");  // função de limpar a tela
		
		setlocale(LC_ALL, "Portuguese"); // definindo linguagem
	
	    printf("### Cartório Nossa Senhora Da Conceição ###\n\n"); // inicio do menu
	    printf("Escolha a opção desejada do menu:\n\n");
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - Consultar nomes\n");
	    printf("\t3 - Deletar nomes\n\n");
		printf("\t4 - Sair do sistema\n\n"); 
	    printf("Opção: "); // fim do menu
	
	    scanf("%d", &opcao); // armezenando a escolha do usuário
	
	    system("cls"); // função de limpar a tela
	    
	     switch(opcao) // inicio da seleção do menu
	    {
	        case 1:
	        registro(); // chamada de funções
		    break; // fechando a chave
		
		    case 2:
		    consulta(); // chamada de funções
		    break; // fechando a chave
		
		    case 3:
		    deletar(); // chamada de funções
		    break; // fechando a chave
		    
		    case 4:
		    printf("Obrigado por utilizar o sistema!\n");
		    return 0;
		    break;
		    
			default: 
	  	    printf("essa opção não está disponível!\n"); // definindo uma opção inválida
		    system("pause");
		    break;
				// fim da seleção do menu	
		}
		
		
    }
}
