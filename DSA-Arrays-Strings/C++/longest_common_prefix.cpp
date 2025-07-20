#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()) return "";
    sort(strs.begin(), strs.end());
    string a = strs[0], b = strs.back();
    int i = 0;
    while(i < a.size() && a[i] == b[i]) i++;
    return a.substr(0, i);
}
int main() {
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
}