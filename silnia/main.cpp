#include <iostream>
using namespace std;


int main()
{
    int a;
    //cout << "podaj liczbe prob: " ;
    cin >>a;

    int tabWynik[a];

    for(int x=0; x<a; x++)
    {
        int n;
        //cout << "podaj liczbe calkowita: ";
        cin >> n;

        if(n>=0)
        {
            int wynik=1;

            for(int i = 1; i <= n; i++)
            {
                wynik = wynik * i;
            }

            tabWynik[x] = wynik;

        }
        else tabWynik[x]=0;

    }

    for(int x=0; x<a; x++)
    {
        cout << tabWynik[x]/10%10 << " "<< tabWynik[x]%10 << endl;
    }

    return 0;
}
