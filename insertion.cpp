#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "Enter the size of array: ";
    cin >> n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    n = n + 1 ;
    for(int i = n-1 ; i >= 2 ; i--){
        arr[i+1] = arr[i];
    }
    arr[2] = 25 ;
    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i]<<" ";
    }
}