#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista: public Funcionario
{
    public:
        Horista( string nome, int matricula, double salarioPorHora, double horasTrabalhada);
        double calculaSalario();

    private:
        double salarioPorHora;
        double horasTrabalhada;

};


#endif
