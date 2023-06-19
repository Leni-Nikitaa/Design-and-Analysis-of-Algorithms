#include<stdbool.h>
#include<stdio.h>
#define N 10
void printSolution(int board[N][N],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",board[i][j]);
        }
        printf("\n");
    }
}
bool isSafe(int board[N][N],int row,int col,int n){
    int i,j;
    for(i=0;i<col;i++){
        if(board[row][i]){
            return false;
        }
    }
    for(i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j]){
            return false;
        }
    }
    for(i=row,j=col;j>=0&&i<n;i++,j--){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}
bool solveNQUtil(int board[N][N],int col,int n){
    if(col>=n){
        return true;
    }
    for(int i=0;i<n;i++){
        if(isSafe(board,i,col,n)){
            board[i][col]=1;
            if(solveNQUtil(board,col+1,n)){
                return true;
            }
            board[i][col]=0;
        }
    }
    return false;
}
bool solveNQ(int n){
    int board[N][N];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            board[i][j]=0;
        }
    }
    if(solveNQUtil(board,0,n)==false){
        printf("Solution does not exist");
        return false;
    }
    printSolution(board,n);
    return true;
}
int main(){
    int n;
    printf("Enter the size of the chessboard (<= 10): ");
    scanf("%d",&n);
    if(n>10||n<1){
        printf("Invalid input");
        return 1;
    }
    solveNQ(n);
    return 0;
}