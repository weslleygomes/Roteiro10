#include <iostream>
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"

void exibirOpcoes()
{
	std::cout <<  "1 - Sacar da conta 1\n"
		 	  <<  "2 - Sacar da conta 2\n"
		 	  <<  "3 - Depositar na conta 1\n"
		 	  <<  "4 - Depositar na conta 2\n"
		 	  <<  "5 - Fechar programa"
			  <<  "\n---------------------------------\n\n";
}
void exibirConta(Conta *conta, std::string tipo)
{
	std::cout <<  "Conta " << tipo << ":\n"
		 	  <<  "Nome: " << conta->getNomeCliente()
		      <<  "\nSalario Mensal: " << conta->getSalarioMensal()
		      <<  "\nNumero Da Conta: " << conta->getNumeroDaConta()
		      <<  "\nSaldo: " << conta->getSaldo()
		 	  <<  "\nLimite: " << conta->getLimite()
			  <<  "\n---------------------------------\n\n";
}
void sacar(Conta *conta)
{
	std::cout << "Quanto: ";
	double n;
	std::cin >> n;
	if(n>conta->getSaldo()){
		throw SaldoNaoDisponivelException("O saldo nao esta disponivel.");
	}else{
		conta->sacar(n);
	}
}
void depositar(Conta *conta)
{
	std::cout << "Quanto: ";
	double n;
	std::cin >> n;
	conta->depositar(n);
}
int main()
{
	Conta *c1 = new Conta("Maria De Lourdes",2000.00,"0000-0000",500.0);
	ContaEspecial *ce1 = new ContaEspecial("Joao Pedro",1500.00, "0000-0001", 700.0);
  	exibirConta(c1,"1 (normal)");
  	exibirConta(ce1, "2 (especial)");
  	while(1)
  	{
  		exibirOpcoes();
  		int sw;
  		std::cin >> sw;
		switch(sw)
		{
			case 1:
				try{
					sacar(c1);
				}
				catch(SaldoNaoDisponivelException x){
					std::cout << "Erro: " << x.what() << std::endl;
				}
				break;
			case 2:
				try{
					sacar(ce1);
				}
				catch(SaldoNaoDisponivelException x){
					std::cout << "Erro: " << x.what() << std::endl;
				}
				break;
			case 3:
				depositar(c1);
				break;
			case 4:
				depositar(ce1);
				break;
			default:
				std::cout << "Fim do Programa" << std::endl;
		
		}
		std::cout << "\n";
		exibirConta(c1,"1 (normal)");
  		exibirConta(ce1, "2 (especial)");
  		if(sw==5)
  		{
  			break;
		}
	}
  	
    return 0;
}
