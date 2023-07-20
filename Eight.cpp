#include<iostream>
using namespace std;
int main()
{
    int m;int n;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;
    int *rows[m];
    for(int i=0;i<m;i++)
    {
        rows[i]=new int[n];
    }
    int *(*matrix)[m]=&rows;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            *matrix[i][j]=i+j;
        }
    }

    return 0;
}