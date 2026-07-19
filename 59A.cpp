#include<bits/stdc++.h>
using namespace std;
int main(){
    int lower_count= 0 ;
    int upper_count = 0;
    string word;
    cin >> word;
    for(auto it : word){
        if(islower(it)){
            lower_count++;
        }
        else{
            upper_count++;
        }
    }
    if(upper_count > lower_count){
        for(int i = 0 ; i < word.size() ; i++){
            word[i] = toupper(word[i]);
        }
    }
    else{
        for(int i = 0 ; i < word.size() ; i++){
            word[i] = tolower(word[i]);
        }
    }
    cout << word << endl;
    return 0;
}