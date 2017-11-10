#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>
#include <string>

class SaldoNaoDisponivelException:public std::exception
{
	public:
		SaldoNaoDisponivelException(std::string x);
		const std::string what() throw ();
		virtual ~SaldoNaoDisponivelException() throw();
	private:
		std::string erro;
};

#endif
