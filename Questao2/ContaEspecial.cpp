#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(std::string nomeCliente, double salarioMensal,std::string numeroDaConta, double saldo):Conta(nomeCliente, salarioMensal, numeroDaConta, saldo)
{
}

void ContaEspecial::definirLimite()
{
    limite=3*salarioMensal;
}

double ContaEspecial::getLimite()
{
	definirLimite();
	return limite;	
}
 
ContaEspecial::~ContaEspecial()
{
}

