#include <iostream>
#include <vector>
#include <random>

using namespace std;


void insertsort(vector<int> &vec)
{
    int k, x;
    for(int i = 1; i < vec.size(); i++)
    {
        k = vec[i];
        x = i - 1;
        while(x >= 0 && vec[x] > k)
        {
            vec[x+1] = vec[x];
            x--;
        }
        vec[x+1]=k;
    }
}

void mergesort(vector<int> &vec)
{

}

int main()
{
    vector<int> vec;
    for(int x = 0; x < 5; x++)
    {
        vec.push_back(rand()%100);
        cout<<vec[x]<<" ";
    }
    insertsort(vec);
    cout<<endl;
    for(int i = 0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}