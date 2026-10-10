#include<iostream>
#include<vector>
using namespace std;

int linearSearch(const vector<int> &vec, const int &value);
int binariSearch(const vector<int> &vec, const int &value);

int main() {
    vector<int> vec(1000);

    for (int i = 0; i < 1000; i ++) {
        vec[i] = i * 2;
    }

    int lineal_value = -1;
    cout << "type the number to search using lineal search: " ;
    cin >> lineal_value;

    int lineal_idx = linearSearch(vec, lineal_value);

    if (lineal_idx != -1) {
        cout << "number found in position: " << lineal_idx << endl;
    } else {
        cout << "number not found" << endl;
    }

    int binari_value  = -1;
    cout << endl << "type the number to search using binari search: ";
    cin >> binari_value;

    int binari_idx = binariSearch(vec, binari_value);
    if (binari_idx != -1) {
        cout << "number found in position: " << binari_idx << endl;
    } else {
        cout << "number not found" << endl;
    }

    return 0;
}

int linearSearch(const vector<int> &vec, const int &value) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == value) {
            cout << "this search method made " << i << " comparisons" << endl;
            return i;
        }
    }
    return -1;
}

int binariSearch(const vector<int> &vec, const int &value) {
    int first = vec.front();
    int last = vec.back();
    int midle = (first + last) / 2;

    for (size_t i = 0; vec.size(); i++) {
        if (first > last) {
            return -1;
        }
        if (value == midle) {
            return midle;
            cout << "this search method made " << i << " comparisons" << endl;
        }
        if (value < midle) {
            last = midle - 1;
            midle = (first + last) / 2;
        }
        if (value > midle) {
            first = midle + i;
            midle = (first + last) / 2;
        }
    }
    return -1;
}
