#include<iostream>
#include<vector>
using namespace std;

int linearSearch(const vector<int> &vec, const int value);
int binarySearch(const vector<int> &vec, const int value);

int main() {
    vector<int> vec(1000);

    for (int i = 0; i < 1000; i++) {
        vec[i] = i * 2;
    }

    int linear_value = -1;
    cout << "type the number to search using linear search: " ;
    cin >> linear_value;

    int linear_idx = linearSearch(vec, linear_value);

    if (linear_idx != -1) {
        cout << "number found in position: " << linear_idx << endl;
    } else {
        cout << "number not found" << endl;
    }


    int binary_value  = -1;
    cout << endl << "type the number to search using binary search: ";
    cin >> binary_value;

    int binary_idx = binarySearch(vec, binary_value);

    if (binary_idx != -1) {
        cout << "number found in position: " << binary_idx << endl;
    } else {
        cout << "number not found" << endl;
    }

    return 0;
}

int linearSearch(const vector<int> &vec, const int value) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == value) {
            cout << "this search method made " << (i + 1) << " comparisons" << endl;
            return i;
        }
    }
    return -1;
}

int binarySearch(const vector<int> &vec, const int value) {
    int first = 0;
    int last = vec.size() - 1;
    int comparisons = 0;

    while (first <= last) {
        int middle = first + (last - first) / 2;
        comparisons++;
        if (value == vec[middle]) {
            cout << "this search method made " << comparisons << " comparisons" << endl;
            return middle;
        } else if (value < vec[middle]) {
            last = middle - 1;
        } else if (value > vec[middle]) {
            first = middle + 1;
        }
    }
    return -1;
}
