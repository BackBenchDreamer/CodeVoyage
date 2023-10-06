//program to validate the sudoku board 

#include<stdio.h>

void main (){

int board[9][9];

//accepting the matrix 
printf("\nEnter the Sudoku Board (row wise):");
for (int i = 0; i < 9; i++){
	for (int j = 0; j < 9; j ++)
		scanf("%d",&board[i][j]);
	printf("\n");
}


int valid  = 1;
//validating the sudoku
//checking validity of numbers in columns
for(int j = 0; j < 9; j++){
	int row[9];
	for (int i = 0 ; i < 9; i++){
		row[i] = board[i][j];
		for (int k = 0; k < 9; k++){
			if (k != i && row [k] == board [i][j]) {
				printf("\nEntered Sudoku Board is not valid");
				valid == 0;
				break;
				}
			}
		}
	}
	
if( valid == 1){
//checking validity of numbers in rows
for(int i = 0; i < 9; i++){
	int col[9];
	for (int j = 0 ; j < 9; j++){
		col[j] = board[i][j];
		for (int k = 0; k < 9; k++){
			if (k != i && col [k] == board [i][j]) {
				printf("\nEntered Sudoku Board is not valid");
				valid == 0;
				break;
				}
			}
		}
	}	
}


//checking the validity of elements in 3x3 matrix
if( valid == 1 ){
for (int i = 0,n =1; i < 9; i = i + 3,n++){
	int sub_mat[3][3];
	for (int j = i; j < (i+3); j++){
		for (int k = i; k < (i +3); k++) { 
			//checking every element inside the submatrix with duplicates
			for (int a = 0; a < 3; a++){
				for (int b = 0; b < 3; b++){
					if(sub_mat[a][b] == board[j][k]){
						valid == 0;
						break;
					}

				}
			}
			//updating the submatrix if no error is found
			sub_mat[j-(3*n)][k-(3*n)] = board[j][k];
        }
    }
}
}

if (valid == 1)
	printf("\nEntered board is completely valid");
else
	printf("\nEntered board isn't a valid board, please check your input");

}