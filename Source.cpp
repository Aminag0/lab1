//Exercise 3:
//Make a menu of the following operations using two dimensional array of size m x n.
// You should use user - defined functions which accept 2 - D array A, and its size mand n as arguments.The options are :
//•	To input elements into matrix of size m x n
//•	To display elements of matrix of size m x n
//•	Sum of all elements of matrix of size m x n
//•	To display row - wise sum of matrix of size m x n
//•	To display column - wise sum of matrix of size m x n
//•	To create transpose of matrix  of size n x m
//
#include<iostream>
using namespace std;
void input_matrix(int m,int n,int mat[10][10]) {
	cout << "Enter values for matrix : " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}
}
void display_matrix(int m, int n, int mat[10][10]) {
	cout << "The values for matrix are : " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j];
		}
		cout << endl;
	}
}
int sum_matrix(int m, int n, int mat[10][10]) {
	int sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			sum=sum+mat[i][j];
		}
		cout << endl;
	}
	cout << "The sum of matrix is : " <<sum<< endl;
	return sum;
}
int row_sum_matrix(int m, int n, int mat[10][10]) {
	int rowsum=0;
	for (int i = 0; i < m; i++) {
		int rowsum = 0;
		for (int j = 0; j < n; j++) {
			rowsum = rowsum + mat[i][j];
		}
		cout << "The sum of row of matrix is : " << rowsum << endl;

	}
	return rowsum;
}
int col_sum_matrix(int m, int n, int mat[10][10]) {
	int colsum = 0;
	for (int i = 0; i < n; i++) {
		int colsum = 0;
		for (int j = 0; j < m; j++) {
			colsum = colsum + mat[j][i];
		}
		cout << "The sum of column of matrix is : " << colsum << endl;

	}
	return colsum;
}
void transpose_matrix(int m, int n, int mat[10][10]) {
	cout << "The values for matrix are : " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mat[j][i];
		}
		cout << endl;
	}
}
int main() {
	int matrix[10][10];
	int option;
	int row;
	int col;
	cout << "Enter number of rows : ";
	cin >> row;
	cout << "Ener number of columns : ";
	cin >> col;
	do {
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "MENU" << endl;
		cout << "1.Input elements into matrix" << endl;
		cout << "2.Display elements of matrix" << endl;
		cout << "3.Sum of all elements of matrix" << endl;
		cout << "4.Display row - wise sum of matrix" << endl;
		cout << "5.Display column - wise sum of matrix" << endl;
		cout << "6.Display transpose of matrix" << endl;
		cout << "7.Exit the program" << endl;
		cout << "Choose your option from menu : ";
		cin >> option;
		if (option == 1) {
			input_matrix(row, col,matrix);
		}
		else if (option == 2) {
			display_matrix(row, col, matrix);

		}
		else if (option == 3) {
			sum_matrix(row, col, matrix);
			
		}
		else if (option == 4) {
			row_sum_matrix(row, col, matrix);

		}
		else if (option == 5) {
			col_sum_matrix(row, col, matrix);

		}
		else if (option == 6) {
			transpose_matrix(row, col, matrix);

		}
		else
			cout << "Program exited successfully" << endl;
	} 
	while (option < 6);

	return 0;
}