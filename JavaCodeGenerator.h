#ifndef JAVA_CODE_GEN_HPP
#define JAVA_CODE_GEN_HPP
#include "CodeGenerator.h"
#include <string>

class JavaCodeGenerator: public CodeGenerator
{
public:
	JavaCodeGenerator(){};
    
	std::string generateCode();  

        std::string someCodeRelatedThing();

        ~JavaCodeGenerator (){};
};

#endif
