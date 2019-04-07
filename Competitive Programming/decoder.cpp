#include <iostream>

using namespace std;

int main()
{
    string mensaje;
    while(cin>>mensaje)
    {
    char z;
    for(int x=0; x<mensaje.size(); x++)
    {
        z = mensaje[x]-7;
        cout<<z;
    }
    cout<<endl;
    }
    return 0;
}