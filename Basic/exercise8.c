// Asks the user for a 24-hour time format, then displays the time in 12-hour form.

#include <stdio.h>
#include "header.h"

int main(){
	int hours, minutes;
	printf("Enter a 24-hour time: ");
	scanf("%2d : %2d", &hours, &minutes);
	
	timeFormat(hours, minutes);
	
	return 0;
}

void timeFormat(int hours, int minutes){
	if(hours >= 12)
		printf("Equivalent 12-hour time: %2d:%2d PM", hours-12, minutes);
	else
		printf("Equivalent 12-hour time: %2d:%2d AM", hours, minutes);
}
