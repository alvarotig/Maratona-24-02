#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int numerocasos, n, k, var, robin, contador;

    cin >> numerocasos;

    for (int i = 0; i < numerocasos; i++)
    {   
        robin = 0;
        contador = 0;
        cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            cin >> var;
            if (var >= k)
            {
                robin += var;
            } else if (var == 0 && robin > 0) 
            {
                robin--;
                contador++;
            }
        }
        cout << contador << endl;
    }

    return 0;
}