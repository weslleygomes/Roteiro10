#include "Assalariado.h"

double Assalariado::calculaSalario(){ return salario; }
Assalariado::Assalariado(string nome, int matricula, double salario){
    this->setNome(nome);
    this->setMatricula(matricula);
    this->salario = salario;
}

