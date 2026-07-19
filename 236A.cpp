#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin >> word;
    unordered_set<char> st;
    for(auto it : word){
        st.insert(it);
    }
    if(st.size() % 2 == 0){
        cout << "CHAT WITH HER\n";
        return 0;
    }
    else{
        cout << "IGNORE HIM\n";
        return 0;
    }
}