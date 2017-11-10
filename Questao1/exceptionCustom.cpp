#include "exceptionCustom.h"

exceptionCustom::exceptionCustom(std::string x){
	erro = x;
}

const std::string exceptionCustom::what() throw(){
	return erro;
}

exceptionCustom::~exceptionCustom() throw(){
	
}

