#include <iostream>
#include <cmath>
using namespace std;

int exponentiation(int n, int *a, int *b)
{
    int result;
    for(int i=0; i<n; i++)
    {
        result = pow(a[i], b[i]);
        cout << result << endl;
    }
    return 0;
}

int main() {

    int n;

    cout << "number of tries" << endl;
    cin >> n;

    int a=0, b=0, arr[n], arr2[n];

    for(int i=0 ; i<n; i++)
    {
        cin >> a >> b;
        arr[i] = a;
        arr2[i] = b;
    }

    int score;
    score = exponentiation(n, arr, arr2);

    return 0;
}
