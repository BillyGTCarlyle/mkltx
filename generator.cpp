#include <iostream>
#include <sstream>
#include <fstream>
#include "generator.h"

void MakeDocument(char* type, char* title){
	std::string Title, Type;
	Type.assign(type);
	Title.assign(title);
	if(Type == "s"){
		std::ofstream output(Title+".tex", std::ofstream::out);
		output << "\\documentclass[a4paper]{article} \n";
		output << "\\author{Billy Carlyle} \n";
		output << "\\usepackage{graphicx} \n";
		output << "\\date{\\today} \n";
		output << "\\begin{document} \n";
		output << "\\maketitle \n";
		output << "\\tableofcontents \n";
		output << "\n\\end{document}";
		output.close();
		std::cout << "Standard document " << Title << ".tex generated..." << std::endl;
	}else if(Type == "p"){
		std::ofstream output(Title+".tex", std::ofstream::out);	
		output << "\\documentclass{beamer} \n";
		output << "\\usepackage{graphicx} \n";
		output << "\\author{Billy Carlyle} \n";
		output << "\\date{\\today} \n";
		output << "\\begin{document} \n";
		output << "\\maketitle \n";
		output << "\n\\end{document}";
		output.close();
		std::cout << "Presentation " << Title <<".tex generated..." << std::endl;
	}else{
		std::cout << "Type not recognised..." << std::endl;
	}
}
