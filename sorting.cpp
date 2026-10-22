#include<iostream>
#include<vector>
using namespace std;

void exchangeSort(vector<int> &vec);
void selectionSort(vector<int> &vec);
void insertionSort(vector<int> &vec);
void change(int &x, int  &y); 

int main() {
    vector<int> vec(1000);
    for(size_t i = 0; i < 1000; i++) {
        vec[i] = vec.size() - i;
    }

    selectionSort(vec);
    //    exchangeSort(vec);
    for(int value: vec){
        cout << value << " ";
    }
    return 0;
}

void exchangeSort(vector<int> &vec) {
    int comparisons = 0;
    int swaps = 0;
    int key = 0; 
    for(size_t i = 0; i < vec.size(); i++) {
        for(size_t j = 0; j < vec.size(); j++) {
            if(vec[i] < vec[j]) {
                key = vec[i];
                vec[i] = vec[j];
                vec[j] = key;
                swaps++;
            } 
            comparisons++;
        }
    }
    cout << "comparisons: " << comparisons << endl;
    cout << "swaps: " << swaps << endl;
}

void selectionSort(vector<int> &vec) {
    for(size_t i = 0; i + 1 < vec.size(); i++) {
        int minIdx = i;
        for(size_t j = i + 1; j < vec.size(); j++) {
            if(vec[minIdx] > vec[j]) {
                minIdx = j;
            }
        }
        change(vec[minIdx], vec[i]);
    }
}

void change(int &x, int &y) {
    int aux = x;
    x = y;
    y = aux;
}
