#include<iostream>
using namespace std;

int main() {

    int arr[5]; 
    vector<int> vec;

    cout << "Fill the array" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int num;
    int sum_vec = 0;
    cout << "Fill the vector" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> num;
        vec.push_back(num);
        sum_vec += num;
    }

    int sum = 0;
    int max = arr[0];
    int min = arr[0];
    for (int j = 0; j < 5; j++) {
       sum += arr[j];
       int key = arr[j];

        if (max < key) {
            max = key;
        }

        if (min > key) {
            min = key;
        } 
    }

    cout << "Sum: " << sum << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    
    
    return 0;
}
