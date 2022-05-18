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
	i2 = 0;
	printf("first : %c and %c\n", str[i], strToReplace[i2]);
	if (str[i] == strToReplace[i2]){
	//i2++;
	for (i3 = i; i3 < strlen(strToReplace); i3++){
	printf("%c and %c\n", str[i3], strToReplace[i2]);
	if (str[i3] == strToReplace[i2]){
	count++;
	printf("count increased\n");
	}
	i2++;
	}
	printf("finished with count : %i\n", count);
	if (count >= strlen(strToReplace)){
	posStart = i;
	printf("%i\n", posStart);
	//break;
	} //else { return 1; }
	}
	printf("end try\n");
	if (posStart != -1){ break; }
	}
	if (posStart != -1){
	for (i = 0; i < posStart; i++){
	strTemp[i] = str[i];
	printf("strTemp : %s", strTemp);
	}
	printf("strTemp : %s", strTemp);
	printf("before strcat : \n");
	printf("strTemp %s and strReplacing %s", strTemp, strReplacing);
	strcat(strTemp, strReplacing);
	printf("continued\n");
	int temp = posStart + strlen(strToReplace);
	i3 = posStart + strlen(strReplacing);
	for(i=temp;i < strlen(str); i++){
	strTemp[i3] = str[i];
	i3++;
	printf("strTemp : %s\n", strTemp);
	}
	}
	str = strTemp;
	return 0;
}


int main(){
	char* str = "aa hello world";
	replaceString("hello", "goodbye", str);
	printf("%s\n", str);
}
