#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> uniqueval(vector<int>&v ,int &size){
    vector <int> k ;
    if (size > 0) {
        k.push_back(v[0]);  
    }
    for (int i = 1; i < size; ++i) {
        if (v[i] != v[i - 1]) {
            k.push_back(v[i]);  
        }
    }
    return k;
}
int main(){
    vector<int> v;
    int val , size ;
    cout << "Enter the size of the vector : ";
    cin >> size;
    cout << "\n";

    cout << "Enter the values vector: ";
    for (int i = 0; i < size; ++i) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());

    cout << "sorted vector values are: ";
    for (auto p : v) {
        cout << p << " ";
    }
    cout << endl;

    vector <int> un = uniqueval(v,size);
    cout<<endl;

    cout << "Unique values: ";
    for (int num : un) {
        cout << num << " ";
    }
    cout << endl;



}