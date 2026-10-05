#include<iostream>
using namespace std;

int main()
{
    cout << "Write 2 numbers: ";

    double num1, num2;
    cin >> num1 >> num2;

    double sum = num1 + num2;
    double avg = sum / 2;

    cout << "Sum: " << sum << endl << "Avg: " << avg << endl;

    if (num1 > num2) {
        cout << "Largest number: " << num1 <<endl;
    } else {
        cout << "Largest number: " << num2 << endl;
    }
//=========== Exercise 2: Loops ==========
    
    int n;
    cout << endl << "Pick a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << "X" << i << " = " << (n * i) << endl;
    }
    cout << endl;

//=====================================================

    int num = -1;
    int sum_while = 0;
    while (num != 0) {

        cout << "Write a number: ";
        cin >> num;
        
        sum_while += num;
    }
        
    cout << endl << "Sum: " << sum_while << endl;

    return 0;
}
