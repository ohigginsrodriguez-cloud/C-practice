#include<iostream>
#include<vector>
using namespace std;


// function declaration
int calculateSum(const vector<int> &vec);
int calculateMax(const vector<int> &vec);
int calculateMin(const vector<int> &vec);


int main() {
    vector<int> vec;

    cout << "fill the vector (use -1 to leave)" << endl;
    int n = 0;
    cin >> n;

    if (n == -1) {
        cout << "closing the program..." << endl;
        return 0;
    }
    
    while(n != -1 ) {
        vec.push_back(n);
        cin >> n;
    }

    cout << "Sum: " << calculateSum(vec) << endl;
    cout << "Max: " << calculateMax(vec) << endl;
    cout << "Min: " << calculateMin(vec) << endl;

    return 0;
}



// function definition
int calculateSum(const vector<int> &vec) {
    int sum = 0;
   for (int value: vec) {
       sum += value;
   }
   return sum;
}

int calculateMax(const vector<int> &vec) {
    int maxVal = vec[0];
    for (int value: vec) {
        if (maxVal < value) {
            maxVal = value; 
        } 
    }
    return maxVal;
}

int calculateMin(const vector<int> &vec) {
    int minVal = vec[0];
    for (int value: vec) { 
        if (minVal > value) {
            minVal = value;
        } 
    }
    return minVal;
}
