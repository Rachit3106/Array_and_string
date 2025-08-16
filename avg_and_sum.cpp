/*
Name: Rachit Deshpande
PRN: 24070123035
batch:-A2
*/
#include <iostream>
using namespace std;
int main(){
    //exp 3
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    float sum=0,average;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    average=sum/n;
    cout << "Sum : " << sum << "\n" << "Average : " << average;
}
/*
Output:
Enter the number of elements in the array: 5
Enter the elements of the array: 1 5 3 6 7
Sum : 22
Average : 4.4
*/