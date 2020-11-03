#include <iostream>
using namespace std;

int f(int n)
{
    if(n==0) return 0;
    else return f(n-1)+n;
}

int main()
{
    cout << "wynik " << f(0) << endl;

    return 0;
}
