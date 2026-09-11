#include<iostream>
using namespace std ;
int main(){
    int n ;
    int index ;
    cout << "Enter the size of array: ";
    cin >> n ;
    int arr[n];
    
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << "enter index to delete:  ";
    cin >> index ;

    for(int i = index ; i < n ; i ++){
        arr[i] = arr[i+1];
    }
    n = n - 1 ;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i]<<" ";
    }
}
