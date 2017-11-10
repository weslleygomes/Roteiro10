#include "FuncionarioNaoExisteException.h"
using namespace std;
	
FuncionarioNaoExisteException::FuncionarioNaoExisteException(std::string x){
	erro = x;
}

const string FuncionarioNaoExisteException::what() throw(){
	return erro;
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException() throw(){
	
}
