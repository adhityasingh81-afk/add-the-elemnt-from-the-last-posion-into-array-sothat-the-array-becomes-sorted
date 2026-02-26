#include<iostream>
using namespace std;
int main () {
    int arr[n+1] ;
    int key = arr[n];
    int j = n-1;
    
    while ( j >= 0 && arr[j] > key) {
        arr[j-1] = arr[j];
        j--;
    }
    arr[j-1] = key ;
    
}