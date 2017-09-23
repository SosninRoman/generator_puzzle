#ifndef C_PLUS_PLUS_CODE_GEN_HPP
#define C_PLUS_PLUS_CODE_GEN_HPP
#include "CodeGenerator.h"
#include <string>

class CppCodeGenerator: public CodeGenerator
{
public:
	CppCodeGenerator(){};
    
	std::string generateCode();  

        std::string someCodeRelatedThing();

        ~CppCodeGenerator (){};
};

#endif
