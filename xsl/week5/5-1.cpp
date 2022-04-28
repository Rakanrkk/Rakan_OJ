//
// Created by Rakan on 2022/4/28.
//

#include <iostream>
#include <stack>

using namespace std;


int main() {
    string a;
    cin >> a;
    stack<char> s;
    for (char &i: a) {
        if (i == '(') s.push(i);
        if (i == '[') s.push(i);
        if (i == ')') {
            if (s.empty()) {
                cout << "N";
                return 0;
            } else if (s.top() == '(') s.pop();
            else {
                cout << "N";
                return 0;
            }
        }
        if (i == ']') {
            if (s.empty()) {
                cout << "N";
                return 0;
            } else if (s.top() == '[') s.pop();
            else {
                cout << "N";
                return 0;
            }
        }
    }
    if(s.empty()) cout<<"Y";
    else cout<<"N";
    return 0;
}