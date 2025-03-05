#include <iostream>
#include <vector>
using namespace std;

void sum(vector<int> v1, vector<int> v2) {
    int sumv1 = 0, sumv2 = 0; // Initialize the sum variables

    for (int i = 0; i < v1.size(); ++i) {
        sumv1 += v1[i];
    }
    for (int i = 0; i < v2.size(); ++i) {
        sumv2 += v2[i];
    }

    if (sumv1 == sumv2) {
        cout << "Both are equal: " << sumv1 << endl;
    } else if(sumv1<sumv2){
        cout << "sum of second array is largest : " <<  sumv2 << endl;
    }
    else{
        cout << "sum of First  array is largest : " <<  sumv1 << endl;
    }
}
int main(){

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

    sum(v1,v2);
}