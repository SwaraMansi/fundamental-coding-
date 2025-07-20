#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    nums.push_back(6);

    cout << "Vector elements: ";
    for (int n : nums) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}