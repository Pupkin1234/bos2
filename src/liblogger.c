#include <stdio.h>

void getjsonlog(){
	printf("%s\n","{\"loglevel\":\"INFO\",\"message\":\"test message from library\"}");
}

void writejsonlog(char* input){
	printf("%s\n%s\n","hello from library :)",input);
}
