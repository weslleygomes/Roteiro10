#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"
#include <string>
using namespace std;

class Comissionado: public Funcionario
{
    public:
        Comissionado(string nome, int matricula, double vendasSemanais, double percentualComissao, double salarioBase);
        double calculaSalario();

    protected:

    private:
        double vendasSemanais;
        double percentualComissao;
        double salarioBase;
};

#endif
