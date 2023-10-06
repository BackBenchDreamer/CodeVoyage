//program to validate a numberplate


#include<stdio.h>
#include<ctype.h>

int main () {

int choice = 1;


while (choice  == 1){

char np [10];

//accepting the number plate from user
printf("\nEnter the Number plate: ");
scanf("%s", np);

int dis = 0;

//validating the first two alphabets
if (isalpha(np[0]) && isalpha(np[1]) != 0)
	dis++;
	
//validating the next two digits
if (isdigit(np[2]) && isdigit(np[3]) != 0)
	dis++;

//validating the next two alphabets
if (isalpha(np[4]) && isalpha(np[5]) != 0)
	dis++;
	
//validating the last four digits
if (isdigit(np[6]) && isdigit(np[7]) && isdigit(np[8]) && isdigit(np[9]) != 0)
	dis++;
	
//displaying the final result
if (dis == 0) 
	printf("\nEntered Numberplate isn't Valid");
else
	printf("\nEntered Numberplate is Valid");
	
printf("\nWould you like to check another Numberplate? (Enter 0 or 1)\n");
scanf("%d", &choice);

}

return 0;

}
