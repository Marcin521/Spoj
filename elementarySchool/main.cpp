#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

float avg(float *arr, int n)
{
    float sum=0;

    for(int i =0; i<n; i++)
    {
        sum+=arr[i];
    }

    return sum/n;

}

int main() {

    int n;

    cin >> n;

    float arrAvg[n];

    vector<Student> arr;

    for(; n>0;n--)
    {
        string a, b;
        float c;

        cin >> a >> b >> c;



        arr.push_back(Student (a, b, c));
        arrAvg[n-1] = c;
    }

    cout << avg(arrAvg, sizeof(arrAvg)/sizeof(arrAvg[0]));

    return 0;
}
