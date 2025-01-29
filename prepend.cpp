#include <bits/stdc++.h>
using namespace std;

int calculation (int length, char* inicio, char* fim)
{
    if (*(inicio) == *(fim))
    {
        return length;
    }

    while (1)
    {
        if (inicio > fim)
        {
            return 0;
        } else if (inicio == fim)
        {
            return 1;
        } else if (*(inicio) == *(fim))
        {
            return fim-inicio+1;        
        } else
        {
            inicio++;
            fim--;
        }
    }
}

int main ()
{
    int testcases;

    cin >> testcases;

    while (testcases > 0)
    {
        int length; 

        cin >> length;

        char s[length];

        cin >> s;

        char *inicio = &s[0];
        char *fim = &s[length-1];

        cout << calculation(length, inicio, fim) << endl;

        testcases--;
    }    
}