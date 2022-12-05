#include <bits/stdc++.h>
using namespace std;

void printsol(int board[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<" "<<board[i][j]<<" ";
            cout<<"\n";
        }
    }
}

bool isSafe(int board[N][N], int row, int col){
    int j , i;
    
    for(i=0; i<col; i++){
        if(board[row][i])
        return false;
    }

    //for upr diagonal
    for(i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j]){
            return false;
        }
    }

    //for lwr diagonal
    for(i=row, j=col; j>=0 && i<N; i++, j--){
        if(board[i][j]){
            return false;
        }return true;
    }


}

//recursion until solution
bool queensUntill(int board[N][N], int col){
    if(col>=N)
    return true;

    for(int i=0; i<N; i++){
        if(isSafe(board, i, col)){
            board[i][col]=1;
        }

        if(queensUntill(board, col+1)){
            return true;
        }else{
            board[i][col]=0;
        }
        
    }
    return false;
}

bool solNqueen(){
    int board[N][N]={{0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0}};

    if(queensUntill(board,0)==false){
        cout<<"No solution exist";
        return false;
    }
    printsol(board);
    return true;
}

int main(){
    solNqueen();
    return 0;
}