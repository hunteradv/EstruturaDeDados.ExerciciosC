// ------------------------------------------------------
// Disc.: ESTRUTURAS DE DADOS - IED-001
// Lab. : REVISÃO DE LINGUAGEM C, FUNÇÕES E PROCEDIMENTOS
// Ano/S: 2022/1S
// ------------------------------------------------------

// arquivos de cabeçalhos ('header')
#include <stdio.h>
#include <locale.h>

//definição de constantes
#define correctPassword 3037
#define Ok 1
#define NotOk 0

// Atividade 1 - if...else
// Atividade 2 - for
// -----------------------
float IncreaseSalary() 
{
	// Passo 1 - receber o salário atual do funcionário
	float salary;
	
	printf("Informe o salário atual - número float: ");
	scanf("%f",&salary);
	
	// Passo 2 - decide o aumento de salário com base no valor atual 
	if ( salary <= 800 ) {
		salary = salary * 1.2;
	}
	else {
		salary = salary * 1.1;
	}
	
	// retorna o valor do salário aumentado
	return salary;
}

// Atividade 3 - while
// -------------------
void ShowOdd ( int value ) 
{	
	// exibição do valor inicial
	printf("Valor inicial: %d\n",value);
	
	// enquanto valor <= 99, exibe ímpares
	while ( value <= 99 ) {
		// testa para saber se é ímpar
		if ( (value%2) == 1 ) {
			printf("%d ",value);
		}
		value++;
	}
	// termina sem retornar valor
	printf("\nFim dos valores - valor final: %d\n",value);
	return;
}

void ValidatePassword()
{
	int password;
	int correct = NotOk;
	do
	{
 		printf("Informe a senha (4 digitos):");      	
 		scanf("%d", &password);
 		
 		if(password == correctPassword)
		{
			correct = Ok;
		}
		else
		{
			printf("Senha incorreta!\n");			
		}
		
	}while(correct == NotOk);
	
	printf("Senha correta !");
}

int ConvertTime()
{
	int hours;
	int minutes;
	int seconds;
	int timeValue;
	
	printf("Digite as horas (0 a 23): ");
    scanf("%d", &hours);
	printf("Digite os minutos (0 a 59): ");
	scanf("%d", &minutes);
	printf("Digite os segundos (0 a 59): ");
	scanf("%d", &seconds);
	
	hours = hours * 3600;
	minutes = minutes * 60;
	
	timeValue = hours + minutes + seconds;
	
	return timeValue;
} 

void ConvertMinutesToHours(int minutes)
{
	   int hours;
	   int minutesAfterConvert;
	   
	   hours = minutes / 60;
	   minutesAfterConvert = minutes % 60;
	   
	   printf("Valor inserido em minutos (%d) após conversão: %d hora(s) e %d minutos", minutes, hours, minutesAfterConvert);		
}

// programa principal
// ------------------
int main()
{

	// para falar Português ...
	setlocale(LC_ALL,"Portuguese");
	
	// menu de escolha da Atividade a ser executada
	int choice;
	do {
		// apresentação das opções de escolha
		printf("\n\n");
		printf("Escolha uma das opções abaixo:\n");
		printf("1 - Atividade 1 - if...else\n");
		printf("2 - Atividade 2 - for\n");
		printf("3 - Atividade 3 - while\n");
		printf("4 - Atividade 4 - do...while\n");
		printf("5 - Atividade 5 - função\n");
		printf("6 - Atividade 6 - procedimento\n");
		printf("7 - Sair\n");
		
		printf("\nDigite aqui a sua opção: ");
		
		// coleta da opção digitada
		scanf("%d",&choice);
		
		// avaliação da opção e acionamento da respectiva Atividade
		switch ( choice ) {
			
			case 1: printf("Atividade 1 ...\n");
					float salary;
					salary = IncreaseSalary();
					printf("O salário após o aumento é: %.2f\n",salary);
					
			        break;
			    
 			case 2: printf("Atividade 2 ...\n");
 					int i;
			 	 	for ( i = 0; i < 5; i++ ) {
			  			// exibição do novo salário
						printf("O salário do funcionário %d após o aumento é: %.2f\n",(i+1),IncreaseSalary());
					}
					
					break;
				
			case 3: printf("Atividade 3 ...\n");
					int initialValue;
				    printf("Informe o valor de início da série: ");
					scanf("%d",&initialValue);
					ShowOdd(initialValue);
					
					break;
				
			case 4: printf("Atividade 4 ...\n");
					ValidatePassword();    	
					
				    break;	
				
			case 5: printf("Atividade 5 ...\n");
					int timeValue;
					timeValue = ConvertTime();
					printf("O valor inserido em segundos é: %d", timeValue);
			
				    break;	
				
			case 6: printf("Atividade 6 ... IMPLEMENTANDO!\n");
					int minutes;
					printf("Digite os minutos (0 a 1339): ");
					scanf("%d", &minutes);
					
					ConvertMinutesToHours(minutes);					
				    break;	
				
			case 7: printf("Sair ...\n");
				    break;
				
			default: printf("Opção inválida !  Tente novamente ...\n");
		}
			
	} while ( choice != 7 );
	
	// identificação do autor do trabalho
	printf("\n");
	printf("---------------------------------------\n");
	printf("ESTRUTURAS DE DADOS - Lab. 02 - 2022/1S\n");
	printf("---------------------------------------\n");
	printf("Nome: GUSTAVO HENRIQUE RODRIGUES DE PAULO\n");
	printf("R.A.: 121 092 211 3 037\n");
			
	// finalização
	return 0;
	
}

