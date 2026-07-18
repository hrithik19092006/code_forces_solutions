#include<bits/stdc++.h>
using namespace std;
int main(){
    string nums1;
    string nums2;
    cin >> nums1 >> nums2;
    for(int i = 0 ; i < nums1.size() ; i++){
        char a = tolower(nums1[i]);
        char b = tolower(nums2[i]);
        if(a > b){
            cout << 1;
            return 0;
        }
        if(a < b){
            cout << -1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}