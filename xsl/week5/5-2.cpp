//
// Created by Rakan on 2022/4/29.
//

#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    int tmp;
    vector<int> data;
    int cnt=0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        data.push_back(tmp);
    }
    for (int i = 0; i < data.size(); i++) {
        while (data[i] != i + 1) {
            swap(data[i], data[data[i]-1]);
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}