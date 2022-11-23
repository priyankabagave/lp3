// #include<bits/stdc++.h>
// using namespace std;
// #define N 6



// void printBoard(vector<vector<int>>arr) {
//     for(int i=0; i<arr.size(); i++){
//         for(int j = 0; j< arr[0].size(); j++)cout<<arr[i][j]<<" ";
//         cout<<endl;
//     }
  
// }

// bool isValid(vector<vector<int>>board, int row, int col) {
//    for (int i = 0; i < col; i++) 
//       if (board[row][i])
//          return false;
//    for (int i=row, j=col; i>=0 && j>=0; i--, j--)
//       if (board[i][j])
//          return false;
//    for (int i=row, j=col; j>=0 && i<N; i++, j--)
//       if (board[i][j]) 
//          return false;
//    return true;
// }


// bool solveNQueen(vector<vector<int>>& board, int col) {
//    if (col >= N) 
//       return true;
//    for (int i = 0; i < N; i++) { 
//       if (isValid(board, i, col) ) {
//          board[i][col] = 1; 
//          if ( solveNQueen(board, col + 1)) 
//             return true;
//          board[i][col] = 0;
//       }
//    }
//    return false; 
// }
// bool checkSolution() {
//    vector<vector<int>> board
//     {
//         {0, 0, 0, 0, 0, 0},
//         {0, 0, 0, 0, 0, 0},
//         {0, 1, 0, 0, 0, 0},
//         {0, 0, 0, 0, 0, 0},
//         {0, 0, 0, 0, 0, 0},
//         {0, 0, 0, 0, 0, 0}
//     };
//    if ( solveNQueen(board, 1) == false ) { //starting from 0th column
//       cout << "Solution does not exist";
//       return false;
//    }
//    printBoard(board);
//    return true;
// }
// int main() {
//    checkSolution();
// }

/* Online C++ Compiler and Editor */
// #include <bits/stdc++.h>
// using namespace std;
// #define N 4
// void printsolution(vector<vector<int>> arr){
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[0].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }

// bool isvalid(vector<vector<int>> board, int row, int col){
//     for(int i=0;i<col;i++){
//         if(board[row][i]) return false;
//     }
//     for(int i=row,j=col;i>=0 && j>=0;i--,j--){
//         if(board[i][j]) return false;
//     }
//     for(int i=row,j=col;i<N && j>=0;i++,j--){
//         if(board[i][j]) return false;
//     }
//     return true;
// }
// bool solveNQueen(vector<vector<int>> &board,int col){
//     if(col>=N) return true;
//     for(int i=0;i<N;i++){
//         if(isvalid(board,i,col)) {
//             board[i][col] = 1;
//             if(solveNQueen(board,col+1)){return true;}
//             board[i][col] = 0;
//         }
//     }
//     return false;
// }
// bool checksolution(){
//     vector<vector<int>> board {
//         {0,0,0,0},
//         {0,0,0,0},
//         {0,0,0,0},
//         {0,0,0,0}
//     };
//     if(solveNQueen(board,1)==false){
//         cout<<"Soltion Doesn't exist";
//         return false;
//     }
//     printsolution(board);
//     return true;
// }
// int main()
// {
//    checksolution();
//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;
# define N 4
void printsolution(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
bool isvalid(vector<vector<int>> board,int row,int col){
    for(int i=0;i<col;i++){
        if(board[row][i]) return false;
    }
    for(int i=row,j=col;i>=0 and j>=0; i--,j--){
        if(board[i][col]) return false;
    }
    for(int i=row,j=col;i<N and j>=0; i++,j--){
        if(board[i][col]) return false;
    }
    return true;
}
bool solveNQueen(vector<vector<int>> &board,int col){
    if(col>=N) return true;
    for(int i=0;i<N;i++){
        if(isvalid(board,i,col)){
            board[i][col] = 1;
            if(solveNQueen(board,col+1)) {return true;}
            board[i][col] = 0;
        }
    }
    return false;
}

bool checksolution(){
    vector<vector<int>> board {
        {0,0,0,0},
        {1,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    if(solveNQueen(board,1)==false){
        cout<<"Soltion Doesn't exist";
        return false;
    }
    printsolution(board);
    return true;
}
int main()
{
   checksolution();
   return 0;
}