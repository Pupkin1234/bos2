#include <iostream>

void getjsonlog(){
	std::cout << "{\"loglevel\":\"INFO\",\"message\":\"test message from library\"}" << std::endl;
}

void writejsonlog(std::string& input){
	std::cout << "hello from library :)\n" << input << std::endl; 
}
