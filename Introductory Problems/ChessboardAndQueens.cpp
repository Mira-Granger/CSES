//Concept: n queens(where n=8) with a small extra condition
//Reference: https://www.youtube.com/watch?v=RfcdzNze0F0
#include<bits/stdc++.h>
using namespace std;

char board[8][8];
int c=0;

bool isPositionValid(int row, int col){
    //Additional check other than N Queens
    //Check if the cell is blocked
    if(board[row][col]=='*'){
        return false;
    }
    
    //N Queens with N=8
    //Check if the column is occupied previously
    for(int i=0;i<row;i++){
        if(board[i][col]=='q'){
            return false;
        }
    }
    //Check if negative slope is occupied
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='q'){
            return false;
        }
    }
    //Check if positive slope is occupied
    for(int i=row,j=col;i>=0 && j<8; i--,j++){
        if(board[i][j]=='q'){
            return false;
        }
    }
    return true;
}

void eightQueens(int row){
    if(row==8){
        c++;
        return;
    }
    //Try placing the queen in all the columns one by one and proceed to next row
    for(int col=0;col<8;col++){
        if(isPositionValid(row,col)){
            board[row][col]='q';
            eightQueens(row+1);
            //we don't care if the soln works till the 8th row or not- we are 
            //just gonna start with a clean slate for the next iteration
            board[row][col]='.';
        }
    }
}

int main(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>board[i][j];
        }
    }
    eightQueens(0); //start with row 0
    cout<<c<<endl;
}
