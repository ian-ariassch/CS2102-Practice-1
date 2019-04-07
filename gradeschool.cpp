#include <iostream>
#include <string>
#include <vector>

using namespace std;


int gradeschool(string a, string b)
{
    vector<long int> resultadosA;
    int contador = 0;
    int multB=1;
    unsigned long long int suma = 0;
    int ai,bi;
    int mult = 1;
    for(int x = a.size()-1; x>=0; x--)
    {
        ai = int(a[x]) - 48;
        for(int y = b.size()-1; y>=0; y--)
        {
        bi = int(b[y]) - 48;
        contador += ai*bi*multB;
        multB = multB*10;
        }
        multB=1;
        resultadosA.push_back(contador*mult);
        mult = mult*10;
        contador=0;
    }
    for(int i = 0; i<resultadosA.size(); i++)
    {
        suma += resultadosA[i];
    }

    return suma;
}


int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    cout<<gradeschool(a,b);
}