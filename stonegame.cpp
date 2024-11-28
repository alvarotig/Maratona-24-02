#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        int n;
        cin >> n;
        vector<int> pedras(n);

        int menor = INT_MAX, maior = INT_MIN;
        int indexmenor = 0, indexmaior = 0;

        for (int i = 0; i < n; i++) {
            cin >> pedras[i];
            if (pedras[i] > maior) {
                maior = pedras[i];
                indexmaior = i;
            }
            if (pedras[i] < menor) {
                menor = pedras[i];
                indexmenor = i;
            }
        }

        if (indexmaior < indexmenor) {
            swap(indexmaior, indexmenor);
        }

        int caso1 = indexmaior + 1;                     
        int caso2 = n - indexmenor;                    
        int caso3 = (indexmenor + 1) + (n - indexmaior); 

        cout << min({caso1, caso2, caso3}) << endl;
    }

    return 0;
}