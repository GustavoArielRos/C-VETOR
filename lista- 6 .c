//lista 6

// 1-

// Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade 
// de números armazenados no vetor. Esta função deverá retornar a média dos números.

float Calcula_media(int v[], int qtd)
{
	int soma, cont;
	float media;
	soma = 0;
	
	for(cont = 0; cont < qtd; cont++)
	{
		soma += v[cont];
	}
	
	media = (float)soma/qtd;
	
	return media;
}

// 2-

// Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade 
// de números armazenados no vetor. Esta função deverá calcular a quantidade de números 
// pares e a quantidade de números ímpares, armazenando-as nas variáveis cujos endereços 
// são fornecidos na chamada da função.

void parImpar(int *v, int qtd, int *par, int*impar)
{
	int cont;
	*par = *impar = 0;
	for(cont=0; cont < qtd ; cont ++)
	{
		if(v[cont]%2 == 0)
		    (*par)++;
		else
		    (*impar)++;
	}
}

// 3-

// Faça uma função que receba como parâmetro um vetor de números reais, a quantidade de 
// números armazenados no vetor e a média dos números. Esta função deverá retornar a 
// quantidade de números acima da média dos números.

int acima_media(float v[], int qtd, float md)
{
	for(cont=0; cont < qtd ; cont++)
	{
		if(v[cont] > md)
		  acima++;
	}
	
	return acima;
}

// 4-

// Faça um programa que leia as notas (número inteiro de 0 a 10) dos alunos de uma turma 
// e exiba a quantidade de alunos em cada nota, conforme exemplo abaixo. Término da 
// leitura: nota = -1. Faça as seguintes funções:

// a) inicializa(): recebe como parâmetro um vetor de números inteiros e inicializa-o 
//    apropriadamente.

// b) exibe():recebe como parâmetro um vetor de números inteiros já preenchido e exibe 
//    a quantidade de alunos em cada nota conforme exemplo abaixo.

//    Nota 0: 2
//    Nota 1: 4
//     …
//    Nota 10: 8

#include<stdio.h>
#define TOT 11

void inicializa(int *v)
{
	int cont;
	for(cont = 0; cont < TOT; cont++)
	    v[cont] = 0;
}

void exibe(int v[])
{
	int cont;
	for(cont = 0; cont < TOT; cont ++)
	   printf("\nNota %d : %d", cont, v[cont]);
}

int main()
{
	int vqtd[TOT];
	inicializa(vqtd);
	printf("Digite nota(0 a 10). -1 para encerrar:");
	scanf("%d", &nota);
	while(nota != -1)
	{
		vqtd[nota]++;
		printf("Digite nota(0 a 10). -1 para encerrar:");
		scanf("%d", &nota);
	}
	exibe(vqtd);
	return 0;
}

// 5-

// Faça um programa para processar os 500 funcionários de uma empresa. Para cada 
// funcionário, o programa deverá ler o código do departamento no qual ele trabalha 
// (número inteiro de 1 a 10) e o salário. O programa deverá exibir o salário médio 
// de cada departamento. Faça as seguintes funções:

// a) inicializa(): recebe como parâmetro um vetor de struct e inicializa-o apropriadamente.

// b) exibe(): recebe como parâmetro um vetor de struct já preenchido e exibe o salário 
//             médio de cada departamento.

#include<stdio.h>
#define TOT 10
#define FUNC 500

struct depto
{
	float soma;
	int qtd;
};
typedef struct depto Tdepto

void inicializa(Tdepto v[])
{
	int cont;
	for(cont = 0; cont < TOT; cont++)
	{
		v[cont].soma = 0;
		v[cont].qtd = 0;
	}
}

void exibe(Tdepto v[])
{
	int cont;
	float md;
	for(cont = 0; cont < TOT; cont++)
	{
		if(v[cont].qtd != 0)
		    md = v[cont].soma / v[cont].qtd;
		    
		else
		    md = 0;
		    
		printf("\nDepartamento %d : %.2f", cont+1,md);
	}
}

int main()
{
	float sal;
	int cont, cod;
	Tdepto v[TOT];
	inicializa(v);
	for(cont = 0; cont < FUNC; cont++)
	{
		printf("Digite codigo e salario: ");
		scanf("%d%f", &cod, &sal);
		v[cod-1].soma += sal;
		v[cod -1].qtd++;
	}
	
	exibe(v);
	return 0;

}

// 6-

// Um banco possui as seguintes informações dos seus clientes: número da conta do cliente 
// e saldo do cliente. Faça um programa que leia os dados dos clientes e exiba para cada 
// cliente: número da conta, saldo do cliente e mensagem informando se o saldo dele está 
// acima do saldo médio dos clientes do banco, abaixo do saldo médio dos clientes do banco 
// ou se é igual ao saldo médio dos clientes do banco. Término da leitura: número da conta 
// do cliente = 0. Considere que o banco possui, no máximo, 10573 clientes. O seu programa 
// deverá utilizar a função abaixo.

// a) Função exibe(): recebe como parâmetros um vetor de struct, já preenchido, a quantidade 
//    de clientes do banco e o saldo médio do banco e exibe para cada cliente o número da 
//    conta, saldo do cliente e mensagem informando se o saldo dele está acima do saldo 
//    médio dos clientes do banco, abaixo do saldo médio dos clientes do banco ou se é igual 
//    ao saldo médio dos clientes do banco.

#include<stdio.h>
#define MAX 10573

struct cliente
{
	int conta;
	float saldo;
};
typedef struct cliente Tcli;

void exibe(Tcli *v, int qtd, float saldomd)
{
	int cont;
	for(cont = 0; cont < qtd; cont++)
	{
		printf("\nConta: %d e \tSaldo:%.2f", v[cont].conta, v[conta].saldo);
		if(v[cont].saldo > saldomd)
		   printf("Acima do saldo medio");
		   
		else
		   if(v[cont].saldo > saldomd)
		       printf("Acima do saldo medio");
		       
		   else
		       if(v[cont].saldo = saldomd)
		           printf("Igual ao saldo medio");
		           
		       else
		           printf("Abaixo do saldo medio");
	}
}

int main()
{
	Tcli v[MAX];
	int i, conta;
	float soma;
	soma = 0;
	i = 0;
	
	printf("Digite conta 0 para encerrar");
	scanf("%d", &conta);
	while(conta!=0)
	{
		printf("Digite o saldo:");
		scanf("%f", &v[i].saldo);
		v[i].conta = conta;
		soma += v[i].saldo;
		i++;
		printf("Digite conta 0 para encerrar");
		scanf("%d", &conta);		
	}
	
	if(i != 0)
	{
		md = soma/i;
		exibe(v,i,md);
	}
	
	return 0;
}

// 7-

// Faça um programa para processar os 1000 funcionários de uma empresa. Para cada 
// funcionário, o programa deverá ler o código do departamento no qual ele trabalha 
// (número inteiro de 10 a 20) e a idade. O programa deverá exibir a matrícula e a 
// idade do funcionário mais velho de cada departamento. Faça as seguintes funções:

// a) inicializa(): recebe como parâmetro um vetor de struct e inicializa-o apropriadamente.

// b) exibe(): recebe como parâmetro um vetor de struct já preenchido e exiba a matrícula e 
//    a idade do funcionário mais velho de cada departamento.

#define FUNC 1000
#include<stdio.h>
#define TOT 11

struct depto
{
	int matr;
	int idade;
}
typedef struct depto Tdepto;

void inicializar(Tdepto v[])
{
	int;
	for(cont = 0; cont < TOT; cont++)
	    v[cont].idade = 0;
}

void exibe(Tdepto v[])
{
	int cont;
	for(cont = 0 ; cont < TOT ; cont++)
	{
		printf("\nDepartamento %d", cont + 10);
		printf("\tMatricula mais velho: %d", v[cont].matr);
		printf("\tIdade mais velho: %d", v[cont].idade);
	}
}

int main()
{
	Tdepto velho[TOT];
	int cont, cod, idade, matr;
	inicializa(velho);
	for(cont = 0; cont < FUNC; cont++)
	{
		printf("Digite codigo(10 a 20), idade e matricula:");
		scanf("%d%d%d", &cod , &idade, &matr);
		if(idade > velho[cod - 10].idade)
		{
			velho[cod - 10].idade = idade;
			velho[cod - 10].matr = matr;
		}
	}
	exibe(velho);
	return 0;
}
