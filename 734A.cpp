#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int anton = 0;
    int danik = 0;
    string word;
    cin >> n >> word;
    for(int i = 0 ; i < word.size() ; i++){
        if(word[i] == 'D')danik ++;
        else anton++;
    }
    if(danik > anton){
        cout << "Danik" << '\n';
    }
    else if(anton > danik){
        cout << "Anton" << '\n';
    }
    else{
        cout << "Friendship" <<'\n' ;
    }
    return 0;
}