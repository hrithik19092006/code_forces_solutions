#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin >> word;
    if(word[0]>= 'a' && word[0] <= 'z'){
        char a = toupper(word[0]);
        word[0] = a;
    }
    cout << word<< endl;
    return 0;
}