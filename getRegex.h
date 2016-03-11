/* 
	this will be replaced when i find a regex library i like 
*/

#ifndef _H_GETREGEX_H_
#define _H_GETREGEX_H_

#include <stdio.h>
#include <stdlib.h>	
#include <string.h>
#include <ctype.h>

char* getRegex(char* match ){
	char* regex = (char *)malloc(strlen(match)*2);
	for(unsigned i=0; i < strlen(match); i++){
		if(isalpha(match[i])){
			strncat(regex, "\\w", 2);
		}
		else if(isdigit(match[i])){
			strncat(regex, "\\d", 2);
		}
		else{
			strncat(regex, "\\S", 2);
		}
	}
	return regex;
}

#endif // _H_GETREGEX_H_

