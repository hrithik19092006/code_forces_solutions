#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    int n;
    cin >> number >> n;
    while(n--){
        int m = number % 10;
        if(m == 0){
            number /= 10;
        }
        else{
            number--;
        }
    }
    cout << number <<'\n';
    return 0;
}