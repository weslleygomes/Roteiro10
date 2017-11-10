#include "Horista.h"

double Horista::calculaSalario(){
	double horaExtra = this->horasTrabalhada - 40; // quantidades de horas extras trabalhadas.
	double salario = (this->salarioPorHora * 40);  // salario mensal.
	if( horaExtra > 0){
		double meio = (horaExtra*this->salarioPorHora)/2;
		double salExtra = (horaExtra*this->salarioPorHora) + meio;
		return ( salario + salExtra );
	}else{
		return salario;
	}
}


Horista::Horista(string nome, int matricula, double salarioPorHora, double horasTrabalhada){
	this->setNome(nome);
	this->setMatricula(matricula);
	this->salarioPorHora = salarioPorHora;
	this->horasTrabalhada = horasTrabalhada;
}

