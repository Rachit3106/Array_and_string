/*
Name: Rachit Deshpande
PRN: 24070123035
batch:-A2
*/
#include <iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int len= str.length();
    string rev;
    for(int i=(len-1); i>=0; i--){
        rev += str[i];
    }
    cout << "Reversed string: " << rev << endl;
    return 0;
}
/*
Output:-
Enter a string: Rachit
Reversed string: tihcaR
*/