#ifndef CODE_GEN_HPP
#define CODE_GEN_HPP
#include <string>

class CodeGenerator
{
public:
	CodeGenerator(){};
    
	virtual std::string generateCode() = 0 ;
    
	virtual std::string someCodeRelatedThing() = 0;
    
	virtual ~CodeGenerator(){};
};


#endif