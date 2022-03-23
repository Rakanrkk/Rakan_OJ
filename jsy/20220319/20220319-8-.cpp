//
// Created by Rakan on 2022/3/19.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <functional>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdlib>
#include <ctime>
#include <string>
#include <map>
#include <iomanip>
#include <set>
#include <deque>
using namespace std;
#define ifor(i, a, b) for ( int i = (a); i < (b); ++i)
#define MEMS(seq, val) memset(seq, val, sizeof(seq));
const int INF = 0x3f3f3f3f;
typedef vector<int> Iv;
typedef long long LL;
typedef unsigned long long ULL;
int a[1000010];
int main()
{
    int n;
    cin>>n;
    ifor(i,0,n){
        cin>>a[i];
    }
    ifor(i,1,n){
        for(int j=0;j<i;j++)
        {
            if(a[j]==a[i])
            {
                a[i]++;
                j=-1;
            }
        }
    }
    ifor(i,0,n){
        cout<<a[i]<<' ';
    }
    return 0;
}
