#include<bits/stdc++.h>
using namespace std;
int main(){
    int number_of_students;
    int position_of_passing;
    cin >> number_of_students >> position_of_passing;
    vector<int>students(number_of_students);
    for(int i = 0 ; i < number_of_students ; i++){
        cin >> students[i];
    }
    int count = 0;
    int value = students[position_of_passing -1];
    for(int i = 0 ; i < number_of_students ; i++){
        if(students[i] >= value && students[i] > 0){
            count ++;
        }
    }
    cout << count;
    return 0;
}