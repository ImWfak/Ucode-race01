#include "header.h"

int mx_findQuestions(char *str) {
	int result = 0;
	int i = 0;
	
	while (str[i] != '\0') {
  		if (mx_isspace(str[i])){
  			i++;
   			continue;
   		}
  		else if (mx_isdigit(str[i]))
   			break;
   		else if (str[i] == '?') {
   			break;
   		}
  		else
   			return -1;
 		}
 
 	while (str[i] != '\0')	{
  		if (mx_isdigit(str[i])) {
   			i++;
   			continue;
  		}
  		else if (str[i] == '?'){
  			result = result * 10 + i + 1;
  			i++;
  			continue;
  		}	
  		else{
   			break;
   		}
 	}
 
 	return result;
}
