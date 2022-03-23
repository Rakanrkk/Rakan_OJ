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
int a[20190330];
int main()
{
    a[1]=1;a[2]=1;a[3]=1;
    ifor(i,4,20190329){
        a[i]=a[i-1]+a[i-2]+a[i-3];
        a[i]%=10000;
    }
    cout<<a[20190324];
    return 0;
}
