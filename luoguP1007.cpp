//
// Created by Rakan on 2022/3/14.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int l,n;
int mint=0,maxt=0;
int loc[5010];
void getloc(int x)
{
    for (int i = 0; i < x; ++i) {
        cin>>loc[i];
    }
}
int main()
{
    cin>>l>>n;
    getloc(n);
    for (int i = 0; i < n; ++i) {
        mint=max(mint,min(loc[i],l-loc[i]+1));
        maxt=max(maxt,max(loc[i],l-loc[i]+1));
    }
    cout<<mint<<" "<<maxt;
    return 0;
}