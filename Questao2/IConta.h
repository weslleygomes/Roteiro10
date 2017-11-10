#ifndef ICONTA_H
#define ICONTA_H


class Iconta
{
    public:
        Iconta();
        virtual ~Iconta();
        virtual void sacar(double valor)=0;
        virtual void depositar(double valor)=0;
};

#endif
