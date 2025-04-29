#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    int arr[n]; // Size is dynamic but fixed after creation

    for(int i = 0; i < n; i++) 
        arr[i] = i;
    
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    
    return 0;
}


