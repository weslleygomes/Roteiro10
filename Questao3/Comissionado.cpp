#include "Comissionado.h"

double Comissionado::calculaSalario(){
	double adicional = (this->vendasSemanais * this->percentualComissao)/100;
	return this->salarioBase + adicional;
}

Comissionado::Comissionado(string nome, int matricula, double vendasSemanais, double percentualComissao, double salarioBase){
	this->setNome(nome);
	this->setMatricula(matricula);
	this->percentualComissao = percentualComissao;
	this->salarioBase = salarioBase;
	this->vendasSemanais = vendasSemanais;
}

