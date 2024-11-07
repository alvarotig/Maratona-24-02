#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int testes;
    cin >> testes;

    for (int i = 0; i < testes; i++) 
    {
        int n;
        cin >> n;

        vector<int> array(n);

        for (int i = 0; i < n; ++i) 
        {
            cin >> array[i];
        }

        sort(array.rbegin(), array.rend()); 

        while (1) 
        {
            int x = array.back();
            array.pop_back();
            int y = array.back();
            array.pop_back();
            array.push_back((x + y) / 2);
            if (array.size() == 1)
            {
                break;
            }
        }

        cout << array[0] << endl;
    }

    return 0;
}
