#include "replaceString.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* replaceString(char* strToReplace, char* strReplacing, char* str){
	char* result;
    int i, cnt = 0;
    int strReplacinglen = strlen(strReplacing);
    int strToReplacelen = strlen(strToReplace);
    // Counting the number of times old word
    // occur in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (strstr(&str[i], strToReplace) == &str[i]) {
            cnt++;
            // Jumping to index after the old word.
            i += strToReplacelen - 1;
        }
    }
    // Making new string of enough length
    result = (char*)malloc(i + cnt * (strReplacinglen - strToReplacelen) + 1);
    i = 0;
    while (*str) {
        // compare the substring with the result
        if (strstr(str, strToReplace) == str) {
            strcpy(&result[i], strReplacing);
            i += strReplacinglen;
            str += strToReplacelen;
        }
        else
            result[i++] = *str++;
			//printf("result : %s\n", result);
    }
    result[i] = '\0';
	str = result;
	return result;
}


/*int main(){
	char* str = "hello world";
	str = replaceString("hello", "goodbye", str);
	printf("%s\n", str);
}*/
