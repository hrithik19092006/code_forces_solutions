#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int number;
    for(int i = 0 ; i < n ; i++){
        cin >> number;
        if(number == 1){
            cout << "HARD" << '\n';
            return 0;
        }
    }
    cout << "EASY" << '\n';
}