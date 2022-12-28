#include<iostream>
using namespace std;
int main()
{
    int n=4,i,j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i && j>1)
            {
                cout<<i;
            }
            else 
            cout<<" ";
        }
    }
}