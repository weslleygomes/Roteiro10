#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>
#include <string>

class FuncionarioNaoExisteException:public std::exception
{
	public:
		FuncionarioNaoExisteException(std::string x);
		const std::string what() throw();
		virtual ~FuncionarioNaoExisteException() throw();
	private:
		std::string erro;
};

#endif
