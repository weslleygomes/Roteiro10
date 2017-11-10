#ifndef CONTA_H
#define CONTA_H
#include "Iconta.h"
#include <string>

class Conta : public Iconta
{
    public:
        Conta(std::string nomeCliente, double salarioMensal, std::string numeroDaConta, double saldo);
        virtual ~Conta();
        void sacar(double valor);
        void depositar(double valor);
        void definirLimite();
        std::string getNomeCliente();
        double getSalarioMensal();
        std::string getNumeroDaConta();
        double getSaldo();
        double getLimite();
    protected:
        std::string nomeCliente;
        double salarioMensal;
        std::string numeroDaConta;
        double saldo;
        double limite;
};

#endif
