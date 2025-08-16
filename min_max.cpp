/*
Name: Rachit Deshpande
PRN: 24070123035
batch:-A2
*/
#include <iostream>
using namespace std;

int main(){
 //exp 4
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min=arr[0];
    int max=arr[4];
    for(int i=0;i<5;i++){
        if(arr[i]>max){max=arr[i];}
        if(arr[i]<min){min=arr[i];}
    }
    cout << "MIN: " << min << "\n" << "MAX: "<<max;
}
/*
Output:
Enter the size of the array: 5
Enter the elements of the array: 100 30 1 32 0
MIN: 0
MAX: 100
*/