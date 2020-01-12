// Convert provences in upper case letters

#include <stdio.h>

void toUpper(char * provinces[]){
	int i;

	int len = -1;
	while (provinces[++len] != NULL) {
		/* do nothing */ 
	}

	for(i=0; i< len; i++){
		printf("%s\n", provinces[i]);
	}

	return NULL;
}

int main(int argc, char *argv[])
{
  	char *provinces[] = { "British Columbia", "Alberta", "Saskatchewan", 
                        "Manitoba", "Ontario", "Quebec", "New Brunswick",
                        "Nova Scotia", "Prince Edward Island", "Newfoundland",
                        "Yukon", "Northwest Territories", "Nunavut" };

	toUpper(provinces);

  	return 0;
}

