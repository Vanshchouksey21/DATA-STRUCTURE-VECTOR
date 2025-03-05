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
    int size1, size2, val;

    cout << "Enter the size of the vector one: ";
    cin >> size1;
    cout << "\n";

    cout << "Enter the values of the first array: ";
    for (int i = 0; i < size1; ++i) {
        cin >> val;
        v1.push_back(val);
    }

    cout << "Enter the size of the vector two: ";
    cin >> size2;
    cout << "\n";

    cout << "Enter the values of the second array: ";
    for (int i = 0; i < size2; ++i) {
        cin >> val;
        v2.push_back(val);
    }

    cout << "\n";
    int diff;
    if (size1 < size2) {
        diff = size2 - size1;
        for (int i = 0; i < diff; ++i) {
            v1.insert(v1.begin(), 0);
        }
    } else {
        diff = size1 - size2;
        for (int i = 0; i < diff; ++i) {
            v2.insert(v2.begin(), 0);
        }
    }

    cout << "First vector values are: ";
    for (auto p : v1) {
        cout << p << " ";
    }
    cout << "\n";

    cout << "Second vector values are: ";
    for (auto p : v2) {
        cout << p << " ";
    }
    cout << "\n";

    int size = v1.size();
    vector<int> ans = sum(v1, v2, size);

    cout << "Sum of vectors: ";
    for (auto p : ans) {
        cout << p << " ";
    }
    cout << "\n";

  
}
