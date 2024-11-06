#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int numerocasos, n, contador, par, impar, check;

    cin >> numerocasos;

    for (int i = 0; i < numerocasos; i++)
    {
        contador = 0;
        par = 0;
        impar = 0;
        check = 0;

        cin >> n;
        vector<int> vetorn(n);
        vector<int> vetorindices(n);

        for (int j = 0; j < n; j++)
        {
            cin >> vetorn[j];
            if (vetorn[j]%2 == 0)
            {
                par++;
            } else 
            {
                impar++;
            }
        }

        if (par == 0 || impar == 0) {
            cout << 0 << endl;
            continue;
        }

        sort(vetorn.begin(), vetorn.end());

        for (int j = 0; j < n; j++)
        {
            if (vetorn[j]%2 == 1) 
            {
                vetorindices[j] = 1;
            } else 
            {
                vetorindices[j] = 0;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (vetorindices[j] == 0)
            {
                for (int x = j+1; x < n; x++) 
                {
                    if (vetorindices[x] == 1)
                    {
                        vetorn[j] = vetorn[j] + vetorn[x];
                        check = 1;
                        contador++;
                        break;
                    } 
                }

                if (check != 1)
                {
                    for (int x = j-1; x >= 0; x--)
                    {
                        if (vetorindices[x] == 1)
                        {
                            vetorn[x] = vetorn[j] + vetorn[x];
                            contador++;
                            break;
                        }
                    }
                }
            }
        }

        cout << contador << endl;
    }

    return 0;
}