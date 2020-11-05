#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<Student> arr;

    for(; n>0;n--)
    {
        string a, b;
        float c;

        cin >> a >> b >> c;



        arr.push_back(Student (a, b, c));
        cout << arr.back().getName() << endl;


    }

    return 0;
}
