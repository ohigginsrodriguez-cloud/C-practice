#include<iostream>
#include<vector>
using namespace std;


// function declaration
int calculateSum(vector<int> vec);
int calculateMax(vector<int> vec);
int calculateMin(vector<int> vec);


int main() 
{
    vector<int> vec;

    cout << "fill the vector (use -1 to leave)" << endl;
    int n = 0;
    cin >> n;
    while(n != -1)
    {
        vec.push_back(n);
        cin >> n;
    }

    cout << "Sum: " << calculateSum(vec) << endl;
    cout << "Max: " << calculateMax(vec) << endl;
    cout << "Min: " << calculateMin(vec) << endl;
}



// function definition
int calculateSum(vector<int> vec)
{
    int sum = 0;
   for (int i = 0; i < vec.size(); i++){sum += vec[i];}
   return sum;
}

int calculateMax(vector<int> vec)
{
    int max = vec[0];
    for (int i = 0; i < vec.size(); i++)
    { if (max < vec[i]) { max = vec[i]; } }
    return max;
}

int calculateMin(vector<int> vec)
{
    int min = vec[0];
    for (int i = 0; i < vec.size(); i++) 
    { if (min > vec[i]) { min = vec[i];} }
    return min;
}
