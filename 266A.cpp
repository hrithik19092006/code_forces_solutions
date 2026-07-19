#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    string word;
    cin >> n >> word;
    int i = 0 ;
    int j = 1 ;
    int count = 0 ;
    while(j < n){
        if(word[i] == word[j]){
            count ++;
        }
        i++;
        j++;
    }
    cout << count << '\n' ;
    return 0;
}