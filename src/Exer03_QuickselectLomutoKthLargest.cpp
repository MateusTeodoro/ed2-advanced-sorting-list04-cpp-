#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int partition(vector<int>& v, int left, int right, int& swaps)
    {

    }

    int quickSelect(vector<int>& v, int left, int right, int targetIdx, int& swaps)
    {

    }

public:
    void findKthLargest(vector<int> v, int k)
    {

    }
};

int main()
{
    // --- Case 1 ---
    cout << "=== Case 1 ===\n";
    vector<int> test1 = {3, 2, 1, 5, 6, 4};
    int k1 = 2;

    cout << "Input:  6 2 \\n 3 2 1 5 6 4\n";
    cout << "Output:\n";
    Solution().findKthLargest(test1, k1);
    cout << "\n";

    // --- Case 2 ---
    cout << "=== Case 2 ===\n";
    vector<int> test2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k2 = 4;

    cout << "Input:  9 4 \\n 3 2 3 1 2 4 5 5 6\n";
    cout << "Output:\n";
    Solution().findKthLargest(test2, k2);
    cout << "\n";

    return 0;
}