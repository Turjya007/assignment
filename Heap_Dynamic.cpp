#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr;
    int n, x;
    cout << "Enter number of elements to insert: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x); // Dynamic resizing
    }

    for(auto i : arr) 
        cout << i << " ";
    
    return 0;
}
