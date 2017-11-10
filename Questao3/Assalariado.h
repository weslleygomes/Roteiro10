#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado: public Funcionario
{
    public:
        double calculaSalario();
        Assalariado( string nome, int matricula, double salario);

    protected:

    private:
        double salario;
};

#endif
