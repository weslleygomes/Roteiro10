#include "TesteValidaNumero.h"

void TesteValidaNumero::validaNumero(int num){
	if(num <=0){
		throw exceptionCustom("ValorAbaixoException");
	}else if(num>100 && num <1000){
		throw exceptionCustom("ValorAcimaException");
	}else if(num >=1000){
		throw exceptionCustom("ValorMuitoAcimaException");
	}
}
