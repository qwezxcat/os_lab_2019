#include "revert_string.h"

void RevertString(char *str)
{
	char* tmp = malloc(sizeof(char)* strlen(str)+1);
	int n = strlen(str);
	for (int i = n-1; i>=0; i--){
		tmp[n-i-1]=str[i];
	}
	strcpy(str,tmp);
	free(tmp);
}

