#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v[5];
    int i = 0, incremento = 0;

    for (i = 0; i < 5; i++)
    {
        cout << "Ingrese dato: ";
        cin >> v[i];

        if (v[i] % 2 != 0)
        {
            incremento += v[i];
        }
    }
    cout << incremento;
}