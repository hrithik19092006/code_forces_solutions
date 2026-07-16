#include<iostream>
using namespace std;

void solve(){
    int w ;
    cin >> w;
    
    if(w > 2 && w % 2 == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}