#include<bits/stdc++.h>
using namespace std;
int main(){
    int cost;
    int dollars;
    int n;
    cin >> cost >> dollars >> n;
    int total = cost * n * (n + 1) /2;
    if(total >= dollars){
        cout << total -dollars << '\n';
        return 0;
    }
    cout << 0 << '\n';
}