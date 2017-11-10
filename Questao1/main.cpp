#include <iostream>
#include "TesteValidaNumero.h"

using namespace std;
int main() {
	int numero;
	TesteValidaNumero n;

	cout <<"Digite um numero: ";
	cin >> numero;

	try{
	n.validaNumero(numero);
	}
	catch(exceptionCustom y){
	cerr << "Erro: " << y.what() << endl;
	}

	return 0;
}
