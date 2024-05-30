#include <stdio.h>

#include <dlfcn.h>
#include "liblogger.h"

int main(){
	void *handle;
	char *error;

    	handle = dlopen("liblogger.so", RTLD_LAZY);
    	if (!handle) {
        	fprintf(stderr, "%s\n", dlerror());
        	return 1;
    	}
        dlerror();

	void (*writejsonlog)(char*) = dlsym(handle, "writejsonlog");
	void (*getjsonlog)() = dlsym(handle, "getjsonlog");

	if ((error = dlerror()) != NULL)  {
		fprintf(stderr, "%s\n", error);
		dlclose(handle);
		return 1;
	}
	
	getjsonlog();
	writejsonlog("c string example");

	dlclose(handle);

	return 0;
}

