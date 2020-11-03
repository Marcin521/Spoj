#include <iostream>
using namespace std;

int f(int n)
{
    if(n==0) return 0;
    else return f(n-1)+n;
}

int main()
{
    int tab[10];
    int number;

    //give number

    for(int i=0; i<10; i++)
    {
        cin >> number;
        number=tab[i];
    }

    for(int i=0; i<10; i++)
    {
        cout << f(i) << endl;
    }


    return 0;
}
