#include "getRegex.h" 

int main(int argc, char** argv){
	for(int i=1; i < argc; i++){
		printf("%s", getRegex(argv[i]));
   	}
	return 0;
}
