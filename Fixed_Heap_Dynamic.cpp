#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    int* arr = new int[n]; // Heap allocation

    for(int i = 0; i < n; i++) 
        arr[i] = i * 3;
    
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    
    delete[] arr; // Free heap memory

    return 0;
}
