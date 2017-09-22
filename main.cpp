#include <memory>
#include <vector>
#include "JavaCodeGenerator.h"
#include "CppCodeGenerator.h"
 
using std::unique_ptr;

int main(int argc, char* argv[])
{
	std::vector<unique_ptr<CodeGenerator> > v;
    
	v.push_back( unique_ptr<CodeGenerator>(new JavaCodeGenerator() ) );
	v.push_back( unique_ptr<CodeGenerator>(new CppCodeGenerator() ) );
    
	std::string javaCode = v[0]->generateCode(); //for Java
    std::string cppCode = v[1]->generateCode(); //for C++

}
