#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario
{
    public:
        void setNome( string nome );
        void setMatricula( int matricula );
        string getNome();
        int getMatricula();
        virtual double calculaSalario() = 0;

    protected:

    private:
        string nome;
        int matricula;
};
#endif
