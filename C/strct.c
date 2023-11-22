
#include<stdio.h>
#include<string.h>

struct std_db{
	char usn[10];
	char nama[30];
	int sub[5]; 
	int avg;
}s[5];

void main(){
	system("clear");
	struct std_db *s1 = s;
	int n = 0;
	printf ("\nEnter the number of students");
	scanf("%d", &n);
	printf("\nEnter the following details for %d students", n);
	for(int i =0; i <n ; i++, s1++){
		char name[30], u[10];
		
		printf("\nEntering Details for %d student", i);
		printf("\nEnter Name: ");
		scanf("%s", name);
		strcpy(s1->nama, name); 
		printf("\nEnter USN: ");
		scanf("%s", u);
		strcpy(s1->usn, u);
		
		for (int j =0; j < 5; j++){
			printf("\nEnter Sub %d marks: ", j+1);
			scanf("%d", &s1->sub[j]);
			}
		}
	s1 -= n;	
		
		
	for(int i = 0; i< n; i++,s1++){
		for (int j = 0; j < 5; j++){
				s1->avg += s1->sub[j];
			}
			
		s1->avg /= 5;		
		}
	s1 -= n;	
		
		
	for(int i =0; i <n; i++, s1++){
		printf("\nAvg Marks of %s is %d \n", s1->nama, s1->avg);
		if (s1->avg > 90 && s1->avg <= 100)
			printf("Passed with O grade");
		else if (s1->avg > 80 && s1->avg <= 90)
			printf("Passed with A+ grade");
		else if (s1->avg > 70 && s1->avg <= 80)
			printf("Passed with A grade");
		else if (s1->avg > 60 && s1->avg <= 70)
			printf("Passed with B grade");
		else if (s1->avg > 50 && s1->avg <= 60)
			printf("Passed with C grade");
		else if (s1->avg > 40 && s1->avg <= 50)
			printf("Passed with D grade");
		else if (s1->avg >= 0 && s1->avg <= 40)
			printf("Failed with F grade");
		else
			printf("Invalid Input");
	
	printf("\n");
		
	}

}
