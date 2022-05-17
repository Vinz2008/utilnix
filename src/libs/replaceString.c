#include "replaceString.h"
#include <string.h>
#include <stdio.h>

int replaceString(char* strToReplace, char* strReplacing, char* str){
	int i;
	int i2 = 0;
	int i3;
	int count = 0 ;
	int posStart = -1;
	char* strTemp;
	for (i = 0 ; i < strlen(str);i++){
	printf("%c and %c\n", str[i], strToReplace[i2]);
	if (str[i] == strToReplace[i2]){
	count++;
	printf("count increased\n");
	for (i3 = i + 1; i3 < strlen(strToReplace); i++){
	if (str[i3] == strToReplace[i2]){
	count++;
	printf("count increased\n");
	}
	}
	if (count >= strlen(strToReplace)){
	posStart = i;
	break;
	}
	}
	}
	if (posStart != -1){
	for (i = 0; i < posStart; i++){
	strTemp[i] = str[i];
	}
	printf("strTemp : %s", strTemp);
	i3 = 0;
	for (i = posStart; i < posStart + strlen(strReplacing); i++){
	str[i] = strReplacing[i3];
	i3++;
	}
	}
	return 0;
}


int main(){
	char* str = "hello world";
	replaceString("hello", "goodbye", str);
	printf("%s\n", str);
}
