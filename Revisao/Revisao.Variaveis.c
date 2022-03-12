// ---------------------------------------------
// Disc.: ESTRUTURAS DE DADOS - IED-001
// Lab. : TIPOS PRIMITIVOS e OCUPA��O DE MEM�RIA
// Ano/S: 2022/1S
// ---------------------------------------------

// arquivos de cabe�alhos
#include <stdio.h>
#include <locale.h>

// programa principal
int main()
{

	// para falar Portugu�s ...
	setlocale(LC_ALL,"Portuguese");

	// declara��o de tipo primitivo - INTEIRO
	int x1;
	int x2;

	// atribui��o de valor
	x1 = 2002;    // x1 = ano de nascimento;
	x2 = 3037;    // x2 = 4 �ltimos d�gitos do R.A.;

	// impress�es: conte�do, qtd bytes na mem�ria, endere�o
	printf("\nTipo INTEIRO");
	printf("\n------------\n");
	printf("int x1 - conteudo %2d - qtd. bytes %d - endereco #%p\n", x1, sizeof(x1), &x1);
	printf("int x2 - conteudo %2d - qtd. bytes %d - endereco #%p\n", x2, sizeof(x2), &x2);

	// declara��o de tipo primitivo - FLOAT (real de precis�o simples)
	float f1;
	float f2;

	// atribui��o de valor
	f1 = 2002. / 11;    // f1 = (ano de nascimento / 11); (2 casas decimais)
	f2 = 3037. / 11;    // f2 = -(4 �ltimos d�gitos do R.A. / 11); (2 casas decimais)

	// impress�es: conte�do, qtd bytes na mem�ria, endere�o
	printf("\nTipo FLOAT");
	printf("\n----------\n");
	printf("float f1 - conteudo %.2f - qtd. bytes %d - endereco #%p\n", f1, sizeof(f1), &f1);
	printf("float f2 - conteudo %.2f - qtd. bytes %d - endereco #%p\n", f2, sizeof(f2), &f2);

	// declara��o de tipo primitivo - DOUBLE (real de precis�o dupla)
	double d1;
	double d2;

	// atribui��o de valor
	d1 = 2002. / 17;    // d1 = (ano de nascimento / 17); (3 casas decimais)
	d2 = 3037. / 17;    // d2 = -(4 �ltimos d�gitos do R.A. / 17); (3 casas decimais)

	// impress�es: conte�do, qtd bytes na mem�ria, endere�o
	printf("\nTipo DOUBLE");
	printf("\n-----------\n");
	printf("double d1 - conteudo %.3f - qtd. bytes %d - endereco #%p\n", d1, sizeof(d1), &d1);
	printf("double d2 - conteudo %.3f - qtd. bytes %d - endereco #%p\n", d2, sizeof(d2), &d2);

	// declara��o de tipo primitivo - CHAR (caracter isolado)
	char c1;
	char c2;

	// atribui��o de valor
	c1 = 'G';    // c1 = primeira letra do seu nome; (mai�scula)
	c2 = 'O';    // c2 = �ltima   letra do seu nome; (mai�scula)

	// impress�es: conte�do, qtd bytes na mem�ria, endere�o
	printf("\nTipo CHAR");
	printf("\n---------\n");

	printf("char c1 - conteudo %c - qtd. bytes %d - endereco #%p\n", c1, sizeof(c1), &c1);
	printf("char c2 - conteudo %c - qtd. bytes %d - endereco #%p\n", c2, sizeof(c2), &c2);

	// identifica��o do autor do trabalho
	printf("\n");
	printf("---------------------------------------\n");
	printf("ESTRUTURAS DE DADOS - Lab. 01 - 2022/1S\n");
	printf("---------------------------------------\n");
	printf("Nome: GUSTAVO HENRIQUE RODRIGUES DE PAULO\n");
	printf("R.A.: 121 092 211 3 037\n");
	
	// finaliza��o
	return 0;
}
