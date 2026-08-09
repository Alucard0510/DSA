#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets (vector<int> arr, vector<int> ans, int size, int index, vector<vector<int>> &allSubsets) {
    if (index == size) {
         allSubsets.push_back({ans});
         return allSubsets;
    }

    // include
    ans.push_back(arr[index]);
    subsets(arr, ans, size, index+1, allSubsets);

    ans.pop_back();
    // ignore
    subsets(arr, ans, size, index+1, allSubsets);

    return allSubsets;
}

int main () {
    vector<int> arr = {1,2};
    vector<int> ans;
    vector<vector<int>> allSub;
    vector<vector<int>> ALL = subsets(arr, ans, arr.size(), 0, allSub);
    for (const vector<int>& subset : ALL) {
        cout << '{';
        for (int value : subset) {
            cout << value << ' ';
        }
        cout << '}';
        cout << '\n';
    }
    return 0;
}
