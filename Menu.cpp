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
		cout<<"\n2)Cadastrar doa��o";
		cout<<"\n3)Lista de doadores";
		cout<<"\n4)Lista de aptos a doa��o";
		cout<<"\n5)Sair\n";
		cin>> opcao;
		switch (opcao)
		{
			case 1:
				cout<<"\n-----CADASTRAR DOADOR-----";
				cout<<"\n Digite o nome do doador: ";
				cin>> d[proximodoador].nome;
				d[proximodoador].ndoacao = 0;
				proximodoador++; // � igual que -> PROXIMODOADOR = PROXIMODOADOR + 1;
			break;
			case 2:
				int codigo;
				cout<<"-----DATA DA DOA��O-----";
				cout<< "\nDigite o c�digo do doador: ";
				cin>> codigo;
				cout<<"\nDoador [" << codigo <<"] : " << d[codigo].nome << "\n";
				cout<< "\n digite o dia de doa��o: ";
				cin>> d[codigo].dultimo.dia;
				cout<< "\n digite o m�s de doa��o: ";
				cin>> d[codigo].dultimo.mes;
				cout<< "\n digite o ano de doa��o: ";
				cin>> d[codigo].dultimo.ano;
				d[codigo].ndoacao++;
			break;
			case 3:
				cout<< "\nCOD�GO	NOME	N� DOA��O	ULTIMA DATA";
				for(int i = 1; i<proximodoador; i++)
					cout<< "\n " << i << "	" << d[i].nome << "	" << d[i].ndoacao << "	"	<< d[i].dultimo.dia <<	"/" << d[i].dultimo.mes<<	"/" << d[i].dultimo.ano;
			break;
			case 4:
				cout<< "\nCOD�GO	NOME	N� DOA��O	ULTIMA DATA";
				for(int i = 1; i<proximodoador; i++)
					if((d[i].dultimo.mes < 3 && d[i].dultimo.ano == 2023) || d[i].dultimo.ano< 2023 )
					cout<< "\n " << i << "	" << d[i].nome << "	" << d[i].ndoacao << "	"	<< d[i].dultimo.dia <<	"/" << d[i].dultimo.mes<<	"/" << d[i].dultimo.ano;
			break;
			case 5:
				cout<< "\nAt� depois";
			break;
			default:
				cout<< "\nOp��o inv�lida!!\n";
			break;
		}
	}while(opcao!=5);	
}
