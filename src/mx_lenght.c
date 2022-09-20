#include "header.h"

int mx_lengh(char *str) {
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
  			result++;
   			i++;
   			continue;
  		}
  		else if (str[i] == '?'){
  			result++;
  			i++;
  			continue;
  		}	
  		else{
   			break;
   		}
 	}
 
 	return result;
}
