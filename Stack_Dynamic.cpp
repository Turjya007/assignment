#include<iostream>
using namespace std;

void testStackDynamic(int n) {
    int arr[n]; // VLA (Variable Length Array) on stack
    for(int i = 0; i < n; i++) 
        arr[i] = i * 2;
    
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    testStackDynamic(n);
    return 0;
}
