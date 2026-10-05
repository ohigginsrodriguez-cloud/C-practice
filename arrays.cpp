#include<iostream>
#include<vector>
using namespace std;

int main() {

    int arr[5]; 
    vector<int> vec;

    cout << "Fill the array" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
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
    
    int num = 0;
    cout << endl << "Write a number for the vector" << endl;
    cin >> num;
    while (num != -1) {
        vec.push_back(num);
        cin >> num;
    }

    int sum_vec = 0;
    int max_vec = vec[0];
    int min_vec = vec[0];
    for (int i = 0; i < vec.size(); i++) {
        sum_vec += vec[i];
        if (max_vec < vec[i]) {
            max_vec = vec[i];
        }
        if (min_vec > vec[i]) {
            min_vec = vec[i];
        }
    }

    cout << "Vec sum: " << sum_vec << endl;
    cout << "Vec max: " << max_vec << endl;
    cout << "Vec min: " << min_vec << endl;
    
    return 0;
}
