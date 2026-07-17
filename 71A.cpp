#include<bits/stdc++.h>
using namespace std;
void solve(){
    string word;
    cin >> word;
    int n = word.size();
    if(word.size() <= 10){
        cout << word;
    }
    else{
        cout << word[0] << n-2 << word[n-1]; 
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}