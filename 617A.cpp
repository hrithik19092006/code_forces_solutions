#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int y = x % 5 ;
    int ans = x / 5;
    if (y == 0){
        cout << ans << endl;
        return 0;
    }
    cout << ans + 1 << endl;
}