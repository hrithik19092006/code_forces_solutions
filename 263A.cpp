#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>matrix(5 , vector<int>(5));
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> matrix[i][j];
        }
    }
    int row;
    int col;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0; j < 5 ; j++){
            if(matrix[i][j] == 1){
                row = i;
                col =j;
                break;
            }
        }
    }
    int mid = 2;
    int moves = abs(row - mid) + abs(col - mid);
    cout << moves;
    return 0;
}