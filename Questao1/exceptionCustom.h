#ifndef EXCEPTIONCUSTOM_H
#define EXCEPTIONCUSTOM_H
#include <exception>
#include <string>

class exceptionCustom:public std::exception
{
	public:
	virtual const std::string what() throw();	
	exceptionCustom(std::string x);
	virtual ~exceptionCustom() throw();	
	private:
	std::string erro;
};

#endif
