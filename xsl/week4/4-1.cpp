//
// Created by Rakan on 2022/4/20.
//

#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> num;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        num.insert(tmp);
    }
//    cout<<num.size();
    if (k > num.size()) {
        cout << "NO RESULT";
        return 0;
    } else {
        auto it = num.begin();
        for (int i = 1; i < k; i++) {
            it++;
        }
        cout <<*it;
    }
    return 0;
}