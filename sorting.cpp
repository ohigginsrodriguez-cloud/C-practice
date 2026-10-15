#include<iostream>
#include<vector>
using namespace std;

void exchangeSort(vector<int> &vec);
void selectionSort(vector<int> &vec);
void insertionSort(vector<int> &vec);

int main() {
    vector<int> vec{5, 2, 9, 1, 7};

    exchangeSort(vec);

    for(int value: vec) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}


void exchangeSort(vector<int> &vec) {
    int key = 0; 
    for(size_t i = 0; i < vec.size(); i++) {
        for(size_t j = 0; j < vec.size(); j++) {
            if(vec[i] < vec[j]) {
                key = vec[i];
                vec[i] = vec[j];
                vec[j] = key;
            } 
        }
    }
}


void selectionSort(vector<int> &vec) {
    int key = 0; 
    for(size_t i = 0; i < vec.size(); i++) {
        for(size_t j = 0; j < vec.size(); j++) {

        }
    }
}
