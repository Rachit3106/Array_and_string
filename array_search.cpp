/*
Name: Rachit Deshpande
PRN: 24070123035
batch:-A2
*/
#include <iostream>
using namespace std;
int main(){
 //exp 2
    int n;
    int arr[5]={1,5,7,10,15};      // sorted array
    cout << "Type number to find: ";
    cin >> n;
    //first we will assume that the array is sorted in ascending order i.e. sorted
    int left=0;
    int right=4;
    int mid=(right-left)/2;
    bool found=0;
    while(left<=right){
        mid=left+(right-left)/2;
        if(n==arr[mid]){cout << "Element found at "<< mid <<" position.";found=true;break;}
        if(n>arr[mid]){left=mid+1;}
        if(n<arr[mid]){right=mid-1;}
    }
    if(!found){cout << "Element not found!!";}
}
/*
Output:-
1)Type number to find: 10
Element found at 3 position.
2)Type number to find: 7
Element found at 2 position.
3)Type number to find: 6
Element not found!!
*/