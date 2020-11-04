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
    int number=0;

    //give number

    for(int i=0; i<10; i++)
    {
        cin >> number;
        tab[i]=number;
    }

    for(int i=0; i<10; i++)
    {
        cout << f(tab[i]) << endl;
    }


    return 0;
}
