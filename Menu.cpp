#include<iostream>
#include<stdlib.h>
using namespace std;
struct Data{
	int dia, mes, ano;
};
struct Doador{
	char nome[50];
	int ndoacao;
	Data dultimo;	
};
main()
{
	setlocale(LC_ALL,"Portuguese");
	int t = 50;
	Doador d[t];
	int opcao, proximodoador = 1;
	do{
		cout<<"\n-----MENU-----";
		cout<<"\n1)Cadastrar doador";
		cout<<"\n2)Cadastrar doação";
		cout<<"\n3)Lista de doadores";
		cout<<"\n4)Lista de aptos a doação";
		cout<<"\n5)Sair\n";
		cin>> opcao;
		switch (opcao)
		{
			case 1:
				cout<<"\n-----CADASTRAR DOADOR-----";
				cout<<"\n Digite o nome do doador: ";
				cin>> d[proximodoador].nome;
				d[proximodoador].ndoacao = 0;
				proximodoador++; // É igual que -> PROXIMODOADOR = PROXIMODOADOR + 1;
			break;
			case 2:
				int codigo;
				cout<<"-----DATA DA DOAÇÃO-----";
				cout<< "\nDigite o código do doador: ";
				cin>> codigo;
				cout<<"\nDoador [" << codigo <<"] : " << d[codigo].nome << "\n";
				cout<< "\n digite o dia de doação: ";
				cin>> d[codigo].dultimo.dia;
				cout<< "\n digite o mês de doação: ";
				cin>> d[codigo].dultimo.mes;
				cout<< "\n digite o ano de doação: ";
				cin>> d[codigo].dultimo.ano;
				d[codigo].ndoacao++;
			break;
			case 3:
				cout<< "\nCODÍGO	NOME	N° DOAÇÃO	ULTIMA DATA";
				for(int i = 1; i<proximodoador; i++)
					cout<< "\n " << i << "	" << d[i].nome << "	" << d[i].ndoacao << "	"	<< d[i].dultimo.dia <<	"/" << d[i].dultimo.mes<<	"/" << d[i].dultimo.ano;
			break;
			case 4:
				cout<< "\nCODÍGO	NOME	N° DOAÇÃO	ULTIMA DATA";
				for(int i = 1; i<proximodoador; i++)
					if((d[i].dultimo.mes < 3 && d[i].dultimo.ano == 2023) || d[i].dultimo.ano< 2023 )
					cout<< "\n " << i << "	" << d[i].nome << "	" << d[i].ndoacao << "	"	<< d[i].dultimo.dia <<	"/" << d[i].dultimo.mes<<	"/" << d[i].dultimo.ano;
			break;
			case 5:
				cout<< "\nAté depois";
			break;
			default:
				cout<< "\nOpção inválida!!\n";
			break;
		}
	}while(opcao!=5);	
}
