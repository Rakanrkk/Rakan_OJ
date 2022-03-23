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
int id[100001];
int dd[100001][2];
int main()
{
    int n,m,t;
    cin>>n>>m>>t;
    for(int i=0;i<m;i++)
    {
        cin>>dd[i][0]>>dd[i][1];
    }
    for (int ts = 1; ts <= t; ++ts) {
        for (int i = 0; i < m; ++i) {
            if (dd[i][0]==ts) id[dd[i][1]]+=3;
        }
        for (int i = 0; i < n; ++i) {
            id[i]--;
        }
    }

    return 0;
}
