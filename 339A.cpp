#include<bits/stdc++.h>
using namespace std;
int main(){
    string calc;
    cin >> calc;
    vector<int>temp;
    for(int i = 0 ; i < calc.size() ; i++){
        if(calc[i] != '+'){
            temp.push_back(calc[i] - '0');
        }
    }
    sort(temp.begin() , temp.end());
    string ans;
    for(int i = 0 ; i < temp.size() ; i++){
        ans += temp[i] + '0';
        if (i == temp.size() -1){
            break;
        }
        ans += '+';
    }
    cout << ans <<endl;
    return 0;
}