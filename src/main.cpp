#include <iostream>

#include "liblogger.h"

int main(){
	std::cout << "Hello world!" << std::endl;
	getjsonlog();
	std::string logexample = "json log write example";
	writejsonlog(logexample);
	return 0;
}

