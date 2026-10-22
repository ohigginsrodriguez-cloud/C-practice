#include<iostream>
#include<vector>
using namespace std;

void exchangeSort(vector<int> &vec);
void selectionSort(vector<int> &vec);
void insertionSort(vector<int> &vec);

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
    cout << "comparisons: " << comparisons <<endl;
    cout << "swaps: " << swaps <<endl;
}


void selectionSort(vector<int> &vec) {
    int comparisons = 0;
    int swaps = 0;
    int min_val = vec[0]; 
    for(size_t i = 0; i < vec.size(); i++) {
        for(size_t j = 1; j < vec.size(); j++) {
            if(vec[i] > vec[j]) {
                min_val = vec[j];
                vec[j] = vec[i];
                comparisons++;
            }
        }
        swaps++;
        vec[i] = min_val;
    }
    cout << "comparisons: " << comparisons <<endl;
    cout << "swaps: " << swaps <<endl;

}

