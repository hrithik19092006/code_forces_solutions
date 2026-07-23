#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    int t ;
    string word;
    cin >> n >> t >> word;
    for(int i = 0 ; i < t ; i++){
        for(int j = 0 ; j < word.size() -1 ; j++){
            if(word[j] == 'B' && word[j+1] == 'G'){
                swap(word[j] , word[j+1]);
                j++;
            }
        }
    }
    cout << word << '\n';
    return 0;
}