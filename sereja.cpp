#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sereja = 0, dima = 0;

    cin >> n;

    int *vetor = (int*)malloc(n*sizeof(int));
    int *fim = &vetor[n-1];
    int *inicio = &vetor[0];

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i]; 
    }

    for (int i = 0; i < n; i++)
    {

        if (i%2 == 0)
        {
            if (*(inicio) > *(fim))
            {
                sereja += *(inicio);
                inicio++;
            } 
            else 
            {
                sereja += *(fim);
                fim--;
            }

        } 
        else
        {
            if (*(inicio) > *(fim))
            {
                dima += *(inicio);
                inicio++;                
            } 
            else 
            {
                dima += *(fim);
                fim--;
            }
        }
    }

    cout << sereja << " " << dima; 
}