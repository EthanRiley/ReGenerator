/* 
	this will be replaced when i find a regex library i like 
*/

#ifndef _H_METACHARS_H_
#define _H_METACHARS_H_

#include <stdio.h>
#include <stdlib.h>	
#include <ctype.h>

char* getRegex(char* match, unsigned size){
	char* regex;
	for(unsigned i=0; i < size; i++){
		if(isalpha(match[i])){
			regex+="\w";
		}
		else if(isdigit(match[i])){
			regex+="\d";
		}
		
	}
}

#endif // _H_METACHARS_H_

