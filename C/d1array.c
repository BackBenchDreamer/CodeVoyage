ead and print elements of 1d array

#include<stdio.h>

void main (){

printf ("\nEnter the number of elements : ");
int n ;
scanf("%d", &n);  

//accepting the values from user
int arr[n]; 
for (int i = 0 ; i < n ; i++){
	printf("\nEnter %d element: ", i);
	scanf("%d", &arr[i]);
}
	
//displaying the elements of array
printf("\n");
for (int i = 0; i < n; i++)
	printf("\n%d element of array is %d", i,arr[i]); 
	
} */


//second program

/*
#include<stdio.h>

void main (){

printf ("\nEnter the number of elements : ");
int n ;
scanf("%d", &n);  

//accepting the values from user
int arr[n]; 
for (int i = 0 ; i < n ; i++){
	printf("\nEnter %d element: ", i);
	scanf("%d", &arr[i]);
}

//accepting the values of 2nd array from user
int arr2[n]; 
for (int i = 0 ; i < n ; i++){
	printf("\nEnter %d element: ", i);
	scanf("%d", &arr2[i]);
}
	
int sum[n];
for (int i = 0 ; i < n ; i++)
	sum[i] = arr[i]+ arr2[i];
	
//displaying the resultant sum array
printf("\n The summed array");
for (int i = 0; i < n; i++)
	printf("\n%d element of array is %d", i,sum[i]);

printf("\n");	
	
}*/

//third program

//print elements from 2d array

/*
#include<stdio.h>

void main (){

//accepting the number of rows and columns
printf ("\nEnter the number of rows and columns : ");
int r,c ;
printf("\n>>>");
scanf("%d", &r);
printf("\n>>>");
scanf("%d", &c);   

int arr[r][c];
printf("\n");

//geting the matrix element input 
for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++)
		{
			printf("\nEnter the %d row, %d columm element", i ,j);
			scanf("%d", &arr[i][j]);
		}
	printf("\n");
}

printf("\n");

//printing the input matrix
for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++)
			printf("%d", arr[i][j]);
	printf("\n");
}

}

*/

#include<stdio.h>

void main (){

//accepting the number of rows and columns
printf ("\nEnter the number of rows and columns : ");
int r,c ;
printf("\n>>>");
scanf("%d", &r);
printf("\n>>>");
scanf("%d", &c);   

int arr[r][c], arr2[c][r], sum[r][r];
printf("\n Enter the first matrix \n");


//geting the first matrix element input 
for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++)
		{
			printf("\nEnter the %d row, %d columm element", i ,j);
			scanf("%d", &arr[i][j]);
		}
	printf("\n");
}

printf("\n Enter the second matrix elements \n");

//second matrix inp
for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++)
		{
			printf("\nEnter the %d row, %d columm element", i ,j);
			scanf("%d", &arr2[i][j]);
		}
	printf("\n");
}

//printing the two matrices 
printf("\n");
for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++)
			printf("%d", arr[i][j]);
	printf("\n");
}
printf("\n");
for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++)
			printf("%d", arr2[i][j]);
	printf("\n");
}
printf("\n");

//multiplying the matrix
for(int i = 0; i < r; i++)
	for (int j = 0; j < c; j++)
		for (int k = 0; k < r; k++)
		 sum[i][j] += arr[i][k] * arr2 [k][j]; 
		 		
		 
		 
//printing the sum matrix
for (int i = 0; i < r; i++){
	for (int j = 0; j < c; j++)
			printf("%d ", sum[i][j]);
	printf("\n");
	
}

}
