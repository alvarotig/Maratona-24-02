#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;

    cin >> testcases;

    while (testcases > 0)
    {
        int n, contadormoedas = 0;
        string descricao;

        cin >> n;

        vector<int> path(n);

        cin >> descricao;

        for (int i = 0; i < n; i++)
        {
            if (descricao[i] == '*' && descricao[i+1] == '*')
            {
                break;
            }
            if (descricao[i] == '*')
            {
                continue;
            }
            if (descricao[i] == '@')
            {
                contadormoedas++;
            }
        }

        cout << contadormoedas << endl;

        testcases--;
    }

    return 0;
}