#include "SaldoNaoDisponivelException.h"
using namespace std;

SaldoNaoDisponivelException::SaldoNaoDisponivelException(std::string x){
	erro = x;
}
const std::string SaldoNaoDisponivelException::what() throw (){
	return erro;
}
SaldoNaoDisponivelException::~SaldoNaoDisponivelException() throw(){
	
}
