#include <stdlib.h>
#include <string.h>

#include "disemvowel.h"

int isVowel(char a){
    char* vowels = "aeiouAEIOU";
    for(int i = 0; i < strlen(vowels); i++){
        char current = vowels[i];
        if(current == a){
            return 1;
        }
    }
    return 0;
}

char *disemvowel(char *str) {
  char *result;
  int length;
  int position = 0;

  length = strlen(str);
  result = (char*) calloc(length+1, sizeof(char));

  for (int i=0; i<length; i++){
	if(isVowel(str[i]) == 0){
	  	result[position] = str[i];
		position++;
	}
  }
  result[length] = '\0';
  return result;
}


