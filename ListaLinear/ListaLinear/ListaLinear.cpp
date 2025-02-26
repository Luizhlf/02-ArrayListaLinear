// Claudio Souza Nunes

#include <iostream>
using namespace std;

// headers
void menu();
void inicializar();
void exibirQuantidadeElementos();
void exibirElementos();
void inserirElemento();
void buscarElemento();
//--------------------------


const int MAX = 5;
int lista[MAX]{};
int nElementos = 0;


int main()
{
	menu();
}

void menu()
{
	int op = 0;
	while (op != 6) {
		system("cls"); // somente no windows
		cout << "Menu Lista Linear";
		cout << endl << endl;
		cout << "1 - Inicializar Lista \n";
		cout << "2 - Exibir quantidade de elementos \n";
		cout << "3 - Exibir elementos \n";
		cout << "4 - Buscar elemento \n";
		cout << "5 - Inserir elemento \n";
		cout << "6 - Sair \n\n";

		cout << "Opcao: ";
		cin >> op;

		switch (op)
		{
		case 1: inicializar();
			break;
		case 2: exibirQuantidadeElementos();
			break;
		case 3: exibirElementos();
			break;
		case 4: buscarElemento();
			break;
		case 5: inserirElemento();
			break;
		case 6:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void inicializar()
{
	nElementos = 0;
	cout << "Lista inicializada \n";

}

void exibirQuantidadeElementos() {

	cout << "Quantidade de elementos: " << nElementos << endl;

}

void exibirElementos()
{
	if (nElementos == 0)
	{
		cout << " A lista esta vazia \n";
	}
	else {
		cout << "Elementos: \n";
		for (int n = 0; n < nElementos; n++) {
			cout << lista[n] << endl;
		}
	}
}

void inserirElemento()
{
	if (nElementos < MAX) {
		cout << "Digite o elemento: ";
		cin >> lista[nElementos];
		nElementos++;
	}
	else {
		cout << "Lista cheia";
	}

}

// deve ser implementada como resposta ao exercicio
#include<string>
void buscarElemento()
{
	if (nElementos == 0) {
		cout << "A Lista esta vazia. N�o a elementos para buscar. \n";
		return;
	}
	int elemento;
	cout << "Digite o elemento: ";
	cin >> elemento;

	int contador = 0;
	string posicoes = "";

	for (int i = 0; i < nElementos; i++) {
		if (lista[i] == elemento) {
			contador++;
			posicoes += to_string(i) + "";
		}
	}

	if (contador > 0) {
		cout << "O elemento " << elemento << " foi encontrado " << contador << " vez(es). \n";
		cout << "Foi encontrado nas posicoes: " << posicoes << endl;
	}
	else {
		cout << "O elemento " << elemento << " nao foi encontado na lista. \n";
	}
}