#include <iostream>
#include <vector>
using namespace std;


vector<int> sum(vector<int>& v1, vector<int>& v2, int size) {
    vector<int> ans(size);  

    for (int i = 0; i < size; ++i) {
        ans[i] = v1[i] + v2[i]; 
    }

    return ans; 
}

int main() {
    vector<int> v1, v2;
    int size, val;

    cout << "Enter the size of the vectors: ";
    cin >> size;
    cout << endl;

    cout << "Enter the values of the first array: ";
    for (int i = 0; i < size; ++i) {
        cin >> val;
        v1.push_back(val);
    }

    cout << "Enter the values of the second array: ";
    for (int i = 0; i < size; ++i) {
        cin >> val;
        v2.push_back(val);
    }


    cout << "First vector values are: ";
    for (auto p : v1) {
        cout << p << " ";
    }
    cout << endl;

    cout << "Second vector values are: ";
    for (auto p : v2) {
        cout << p << " ";
    }
    cout << endl;

    
    vector<int> ans = sum(v1, v2, size);

    cout << "Sum of vectors: ";
    for (auto p : ans) {
        cout << p << " ";
    }
    cout << endl;
}

  
