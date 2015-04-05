// Program to print matrix elements in a spiral way from top-left corner (Clockwise direction)

#include<stdio.h>

int main(){
	int m[64][64],r,c,i,j; 
	int test_row = 0, test_col = 0;
	
	printf("enter the number of rows\n");
	scanf("%d", &r);
	printf("enter the number of columns\n");
	scanf("%d", &c);
	
	int tr = r-1, tc = c-1;
	printf("Enter the elements in the matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("the given matrix is\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d", m[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	
	while(test_row < r && test_col < c){
		if(r == 1 && c == 1){
			printf("The matrix consists of only one element:");
			printf("%d\n", m[test_row][test_col]);
			return;
		}
		
		if(test_row == tr){
			for(i=test_col;i<=tc;i++){
				printf("%d", m[test_row][i]);
			}
			return;
		}
		
		if(test_col == tc){
			for(i=test_row;i<=tr;i++){
				printf("%d", m[i][test_col]);
			}
			return;
		}
		
		for(i=test_col;i<tc;i++){
			printf("%d", m[test_row][i]);
		}
		
		for(i=test_row;i<tr;i++){
			printf("%d", m[i][tc]);
		}
		
		for(i=tc;i>test_col;i--){
			printf("%d", m[tr][i]);
		}
		
		for(i=tr;i>test_row;i--){
			printf("%d", m[i][test_col]);
		}
		
		test_row++;
		tr--;
		test_col++;
		tc--;
	//	printf("\n"); ----------------->> For printing each and every loop inside the matrix
		
   }
}
