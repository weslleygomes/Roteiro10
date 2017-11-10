#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <exception>
#include <string>

class OrcamentoEstouradoException:public std::exception
{
	public:
		OrcamentoEstouradoException(std::string x);
		const std::string what() throw();
		virtual ~OrcamentoEstouradoException() throw();
	private:
		std::string erro;
};

#endif
