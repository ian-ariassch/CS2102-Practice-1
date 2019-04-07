#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int algorithm(int n)
{
    long int counter = 1;
    while(n!=1){
        counter++;
        {
            if(n%2 == 0)
            {
                n = n/2;
            }
            else
            {
                n = 3*n+1;
            }
        }}
    return counter;
}


int main() {

    vector<int> values;
    long int max, min;
    int a,b;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }
        for(int x=min; x<=max; x++)
        {
            values.push_back(algorithm(x));
        }

        sort(values.begin(), values.end());
        cout<<a<<" "<<b<<" "<<values.back()<<endl;
        values.clear();
    }

    return 0;
}