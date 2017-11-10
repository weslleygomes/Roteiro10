#include "Conta.h"

Conta::Conta(std::string nomeCliente, double salarioMensal, std::string numeroDaConta, double saldo)
{
    this->nomeCliente=nomeCliente;
    this->salarioMensal=salarioMensal;
    this->numeroDaConta=numeroDaConta;
    this->saldo=saldo;
}

std::string Conta::getNomeCliente()
{
    return nomeCliente;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

std::string Conta::getNumeroDaConta()
{
    return numeroDaConta;
}

double Conta::getSaldo()
{
    return saldo;
}

void Conta::sacar(double valor)
{
    saldo-=valor;
}

void Conta::depositar(double valor)
{
    saldo+=valor;
}

void Conta::definirLimite()
{
    limite=2*salarioMensal;
}

double Conta::getLimite()
{
	definirLimite();
	return limite;
}

Conta::~Conta()
{
}

