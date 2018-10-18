// Program to print matrix elements in spiral way (Cloclwise Direction) 

// Efficient Way // 

#include<stdio.h>

int shouldTurn(int row, int col, int height, int width){
    int same = 1;
    if(row > height-1-row) row = height-1-row, same = 0;        // Give precedence to top-left over bottom-left
    if(col >= width-1-col) col = width-1-col, same = 0;        // Give precedence to top-right over top-left
    row -= same;                                              // When the row and col doesn't change, this will reduce row by 1
    if(row==col) return 1;
    return 0;
}

int vecs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
void printSpiral(int arr[4][4], int height, int width){
    int vecIdx=0, i=0;
    int curRow=0, curCol=0;
    for(i=0; i<height*width; i++){
        printf("%d ",arr[curRow][curCol]);
        if(shouldTurn(curRow, curCol, height, width)){
            vecIdx = (vecIdx+1)%4;
        }
        curRow += vecs[vecIdx][0];
        curCol += vecs[vecIdx][1];
    }
    printf("\n");
}

int main(){
    int arr[4][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printSpiral(arr, 4, 4);
    printSpiral(arr, 3, 4);
}
