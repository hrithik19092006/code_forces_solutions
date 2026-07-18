#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> operation(n);
    for(int i = 0 ; i < n ; i++){
        cin >> operation[i];
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(operation[i] == "X++" || operation[i] == "++X"){
            count ++;
        }
        else {
            count --;
        }
    }
    cout << count;
    return 0;
}