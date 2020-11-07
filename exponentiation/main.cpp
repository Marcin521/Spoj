#include <iostream>
#include <cmath>
using namespace std;

int exponentiation(int a, int b)
{
    int result;
    result = pow(a, b);
}

int main() {

    int n;

    cout << "number of tries" << endl;
    cin >> n;

    int a, b, arr[n], arr2[n];

    for( ; n>0; n--)
    {
        cin >> a >> b;
        arr[n-1] = a;
        arr2[n-1] = b;
    }

    return 0;
}
