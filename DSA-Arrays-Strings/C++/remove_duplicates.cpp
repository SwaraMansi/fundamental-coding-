#include<iostream>
#include<set>
using namespace std;
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    set<int> s(arr, arr + 7);
    for(int x : s) cout << x << " ";
}