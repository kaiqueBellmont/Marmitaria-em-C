// Kaique Cairan Chaves Costa
//ps: utilizei bastante \t e \n pois assim melhorei a est�tica do programa.

//inclus�o de bibliotecas
#include <stdio.h>

//responsavel por axuliar e para usar fun��es como o SYSTEM
#include <stdlib.h>

//responsavel pela matem�tica (sempre adiciono por via das duvidas)
#include <math.h>

// linguagens de cada regiao
#include <locale.h>

//Defini��o de Constantes:(o que nao muda)
//Mensagem de erro
#define ERRO "As informa��es n�o foram inseridas corretamente. Por favor digite conforme as instru��es abaixo:"

//defini��o de categoria dos produtos( nao cheguei utilizar, n�o sei se vai contar, mas eu consultava por aqui)
#define CATEGORIA_MATINAIS 1
#define CATEGORIA_CEREAIS 2
#define CATEGORIA_BEBIDAS 3

//defini��o de situa��o, utilizavel em mensagens para o comando de atributo de produto.

#define SITUACAO_R "***O produto precisa ser refrigerado.***"
#define SITUACAO_N "***O produto nao precisa de refrigera��o.***"

//fun��o principal
int main(void)
{

//Declara��o de Vari�veis (o que pode mudar e armazenar valores)
	//ajustar idioma para o portugues
		setlocale(LC_ALL, "Portuguese");
	
	//variaveis e seus nomes simples
	
		float aumento, imposto, preco, novopreco;

//situacao[1] pois quero que apenas armazene um caractere na memoria e na variavel.	
		char situacao[1];
	
		int categoria, returnorclose;

// do � ultilizado como comando do-while para repeti�oes, estrutura de repeti�oes. (Este eu utilizei para repetir todo o programa caso a pessoa queira)
// (do linha 50,  at� while 271.)Esse do-while � respons�vel para reiniciar o APP caso a pessoa queira refazer compara��es.

do {

//Entrada de Dados	

//O printF para fazer a entrada do programa com intru��es para entrada de dados e apresenta��o
	
	printf("\n\n\t\t\t\t Seja bem vindo ao aplicativo >> Compras do AMBAL << \n");
	printf("\t\t Digite o n�mero correspondente a categoria do produto de acordo com a tabela a seguir:\n\n");

 //novamente o do, utilizei em cada estrutura para  que a pessoa so consiga seguir adiante inserindo  op��es v�lidas. (do linha 60, while 97)
 do {
	
//novamente o printF para apresentar op�oes para o usu�rio

	printf("\t\t\t\t\t\t |||||CATEGORIAS|||||");
	printf("\n\n");
	printf("\t\t\t\t\t\t Matinais: Digite > | 1 | \n");
	printf("\t\t\t\t\t\t Cereais : Digite > | 2 |\n");
	printf("\t\t\t\t\t\t Bebidas : Digite > | 3 |\n");
	printf("\n\t\t\t\t\t\t categoria do produto:");
	
// O fflush(sdtin) eu utilizei para limpar o buffer, pois assim o do while nao cai no limbo :).	
// o primeiro scanf para receber dados da categoria dos produtos
	
		fflush(stdin);
		scanf("%d", &categoria );
		
//aqui utilizei o switch-case, pois, achei bem pertinente utiliza-lo.	
//utiliza��o do switch-case para apresentar	estruturas simples e inteiros.

	switch (categoria) {
		case 1: printf("\n\t\t A categoria do produto � : %d => MATINAIS.\n\n", categoria);
				break;

		case 2: printf("\n\t\t A categoria do produto � : %d => CEREAIS.\n\n", categoria);
				break;
	
		case 3: printf("\n\t\t A categoria do produto � : %d => BEBIDAS.\n\n", categoria);
				break;
	
		default: printf("\n\t\t" ERRO "\n\n");
		
	}	


 }	
//while do 	'do' da linha 60, Para repetir a estrutura inicial, a de categoria, caso a pessoa inserisse op�oes invalidas.
 while 
// condi��o do while. Ele repetira tudo at� que se satisfa�a a condi��o dele.
  
    (categoria <=0 || categoria > 3);

//DO (linha 103) par do while da linha 125. Utilizei para fazer repetir a estrutura caso a pessoa digite um valor impossivel.	
do{

	printf("\n\n\t\t Digite o *VALOR* do produto usando VIRGULA (,) caso necess�rio:");

//utilizei (preco = -1) para indicar um caminho para o valor come�ar, mas adimito que pesquisei na internet e nao entendi bem o conceito.(te mandei audio sab)
    
	preco = -1;

//limpeza de buffer com o sttdin para nao cair no limbo novamente.
	
	fflush(stdin);
	scanf("%f", &preco);

//condi��o para que o valor inserido seja permitido acima de 0 e nao seja Caracteres.
//impressao da mensagem de ERRO da constante ERRO caso nao cumpra as expectativas de inser��o.		

		if(preco <= 0){
		  printf("\t" ERRO);
		}
	
 }	
//novamente o while para repetir (do linha 103 while 125)
while
    (preco <=0);
     
// impress�o na tela do que o usiario fez ate agora/ comprova��o de informa��es

	printf("\n\t\t\t\t\t\t categoria : %d \n", categoria);
	printf("\t\t\t\t\t\t Pre�o : %.2f\n", preco);
		
//novamente utilizei o do para repetir a estrutura e o APP nao fechar caso a pessoa digite uma op��o invalida, num, char invalidos, etc. do linha 134 while 162.
do {
	printf("\n\t\t Se seu produto precisa se manter refrigerado, digite |R| ou |r|. \n");
	printf("\t\t Se o produto, (N�O) precisa de refrgera��o, digite |N| ou |n|:");
	
//mais uma limpeza de buffer para vitar o limbo	
// PS : esse %1[^\n]s" utilizei conforme vi em um exemplo seu com a logica, mas nao entendi bem o conceito tbm.	
	
	fflush(stdin);
	scanf("%1[^\n]s", &situacao[1]);
			
	
   
//IF ELSE, estrutura de condi��o para casos espec�ficos
// PROCESSAMENTO DE DADOS
		
		if (situacao[1] == 'n' || situacao[1] == 'N' ){
			printf("\n\t\t\t" SITUACAO_N "\n\n");
		}
		else
		
			if (situacao[1] == 'R' || situacao[1] == 'r'){
			printf("\n\t\t\t" SITUACAO_R "\n\n" );
			}
			else
			printf("\t" ERRO "\n");


}	
 while
//CONDI��O do while acima, para permitir apenas os characteres especificos mostrados ao usuario par do "do" linha 134 - while 162  
		 
	 (situacao[1] != 'r' && situacao[1] !='R' && situacao[1] != 'n' && situacao[1] != 'N') ;
		   
//processamento de dados
//condi��es para suprir as exig�ngias das tabelas, com valores armazenados nas variaveis
		
				if(preco <= 25 || categoria == 1){
				        novopreco = preco * 1.05;
				     aumento = novopreco - preco;
				}
				else
					if(preco <= 25 || categoria ==2){
					       novopreco = preco * 1.08;
					    aumento = novopreco - preco;
					}
					else
					 	if(preco <= 25 || categoria == 3){
					 		    novopreco = preco * 1.10;
					         aumento = novopreco - preco;
						 }
						 else
						 	if(preco > 25 || categoria == 1){
						 	   	    novopreco = preco * 1.12;
								 aumento = novopreco - preco;
							}
							else
								if(preco > 25 || categoria == 2){
						 	   	           novopreco = preco * 1.15;
								        aumento = novopreco - preco;
							      }
								  else
								    if(preco > 25 || categoria == 3){
						 	   	           novopreco = preco * 1.18;
								        aumento = novopreco - preco;
								    }
						    			
	
//processamento de dados para satisfazer a vari�vel imposto;									
//condi��es necess�rias para saida de dados corretas para o usu�rio.
			
		if(categoria == 1 || situacao[1] == 'r' || situacao[1] == 'R'){
		   imposto = novopreco * 0.05;
		   
		}
		else {
			imposto = novopreco * 0.08;
			
			}

//SAIDA de dados
//saida da logo e os dados calculados a partir das op��es inseridas pelo usu�rio
	
		printf("\n\t\t\t\t\t\t >>COMPRAS DO AMBAL<<\n");
		printf("\n\t\t\t\t\t\t >>DADOS DO PRODUTO<<\n");
		printf("\t\t\t\t\t\tPre�o antigo : %.2f\n", preco);
		printf("\t\t\t\t\t\tNovo pre�o   : %.2f\n", novopreco);
		printf("\t\t\t\t\t\tAumento de   : %.2f\n", aumento);
		printf("\t\t\t\t\t\timposto de   : %.2f\n",imposto);

//condi��o para a classifica��o de acordo com a tabela		

		if(novopreco < 50.00){
			printf("\n\t\t\t\t\t\tCLASSIFICA��O: < BARATO >\n");
		}
		else
		   if(novopreco <= 50.00 && novopreco <= 120.00){
		   	printf("\n\t\t\t\t\t\tCLASSIFICA��O: < NORMAL >\n");
		   }
			else{
			   printf("\n\t\t\t\t\t\tCLASSIFICA��O: < CARO >\n");
			}

//do utilizado para a ultima impressao para o cliente, caso ele digite op��es invalidas, a estrutura/impressao ir� se repetir		

do {	

//novamente o switch-case para op��es simples e inteiras
//novamnte utilizei o sttdin para limpeza do buffer
//ultima impress�o para o cliente, com op��es caso ele queira refazer c�lculos ou fechar o programa
	
		printf("\n\t\t\t\tSe Caso deseje fazer novas compara��es: DIGITE > | 1 |");
		printf("\n\t\t\t\tSe Caso deseje encerrar o programa    : DIGITE > | 2 |");
		printf("\n\t\t\t\tOp��o desejada :");
		
		fflush(stdin);
		scanf("%d", &returnorclose);
		   
//estrutura condicional utilizada para escolha da �ltima op��o do APP, 'return or close'		   
		   
		   switch (returnorclose){
				case 1 : printf("\n\t\t\t Op��o escolhida: 1 \n");
						 printf("\n\t\t\t Voc� ser� redirecionado.\n");
				break;				

//No caso 2 ultilizei um exit0 para o programa sair e apresentar 0 erros.				
				case 2 : printf("\n\t\t\t Fechando o aplicativo...\n");
			    exit(0);
				break;
				
				default: printf("\n\t\t" ERRO "\n");
		}
//while do 'do' linha 238 para repetir a ultima instru��o, caso o usu�rio erre na inser��o nos menus.
}
 while 
	 (returnorclose != 1 && returnorclose !=2);
//esse while foi utilizado para retornar ao inicio do programa, caso a pessoa deseje refazer c�lculos. do linha 50 while 271.	
}
 while 
	 (returnorclose == 1);	
		
		
//fun��es utilizadas para retornar 0 erros, e o system pause aguarda uma tecla do usu�rio.( tem que incluir a stdlib);		
	
	
	system("PAUSE");
		   return 0;
}
