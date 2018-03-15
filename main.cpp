#include <iostream>
#include "generator.h"

int main(int argc, char* argv[]){	
	if(argc < 2){
		std::cout << "Correct usage:" << std::endl;
		std::cout << "mkltx [type] [document name]" << std::endl;
	}else{
		MakeDocument(argv[1], argv[2]);	
	}
}
