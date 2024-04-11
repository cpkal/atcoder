#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    set<string> a = {};
    
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < s.size();j++) {
            a.insert(s.substr(i,j));
        }  
    }
    cout << a.size() << "\n";

    return 0;
}
