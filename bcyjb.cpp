//
// Created by Rakan on 2022/3/12.
//

#include <iostream>
#include <iomanip>
using namespace std;
int negative(int a[], int b)
{
    int i,c=0;
    for (i = 0; i < b; i++)
    {
        if (a[i] < 0)
            c++;
    }
    return c;
}
int zero(int a[], int b)
{
    int i, c=0;
    for (i = 0; i < b; i++)
        if (a[i] == 0)
            c++;
    return c;
}
double average(int a[], int b)
{
    int i, sum=0,c=0;
    double ave;
    for (i = 0; i < b; i++)
        if (a[i] > 0)
        {
            c++;
            sum += a[i];
        }
    return double(sum)/c;
}

int main()
{
    int *p,n,i,number;
    double ave;
    cin >> n;
    p = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >>setw(1)>> p[i];
    }
    number = negative(p, n);
    if(negative(p, n)+zero(p,n)<n)
        ave = average(p, n);
    cout << "ave=" << ave << "  number=" << number << endl;
    delete [] p;
    return 0;
}
