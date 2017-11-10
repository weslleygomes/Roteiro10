#include "OrcamentoEstouradoException.h"
using namespace std;
	
OrcamentoEstouradoException::OrcamentoEstouradoException(std::string x){
	erro = x;
}

const string OrcamentoEstouradoException::what() throw(){
	return erro;
}

OrcamentoEstouradoException::~OrcamentoEstouradoException() throw(){
	
}
