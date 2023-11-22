//Program to implement stacks 
#include<stdio.h>


int size = 5;
int arr[5];
int top = -1;

void push(int n){
	//checking if the stack is full
	if(top == size)
		printf("\nStack is full! ");
	else{
		top++;
		arr[top] = n;
		printf("\nSuccessfully pushed an element into the stack");
	}
}


void display(){
	printf("\n");
	if (top == -1)
		printf("\nStack is empty");
	else
		for(int i = 0; i <= top; i ++)
			printf("\n%d", arr[i]); 

}


void pop(){
	printf("\n");
	if (top == -1)
		printf("\nStack is empty");
	else	{
		arr[top] = 0;
		top--;
		printf("\nSuccessfully popped an element from the stack");
	}	
}


void main(){
	system("clear");
	int check = 0;
	while(check == 0){
		//menu driven
		printf("\n");
		printf("\nImplementing Stack");
		printf("\n1)Push an element into the stack");
		printf("\n2)Pop an element from the stack");
		printf("\n3)Display the elements of stack");
		printf("\n4)Quit");
		printf("\nPlease enter the choice");
		
		int choice = 0;
		scanf("%d", &choice);
		
		//If-else instead of switch ;)
		if (choice == 1){
			printf("\nEnter an Element");
			int num;
			scanf("%d", &num); 
			push(num);
		}
		
		else if ( choice == 2)
			pop();
		else if ( choice == 3) 
			display();
		else if (choice == 4)
			check++;
		else 
		printf("\nInvalid Input, continuing the program");
	}
}
