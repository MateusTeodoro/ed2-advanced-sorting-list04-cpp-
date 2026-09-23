#include <iostream>
#include <vector>

using namespace std;

// Helper function to print vectors in terminal
void printVector(const vector<int>& v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    cout << "\n";
}

class Solution {
private:
    int parityPartition(vector<int>& v)
    {

    }

    int partitionAsc(vector<int>& v, int left, int right)
    {

    }

    void quickSortAsc(vector<int>& v, int left, int right)
    {

    }

    int partitionDesc(vector<int>& v, int left, int right)
    {

    }

    void quickSortDesc(vector<int>& v, int left, int right)
    {

    }

public:
    vector<int> sortEvenOdd(vector<int> v)
    {

    }
};

int main()
{
    Solution sol;

    // --- Case 1 ---
    cout << "=== Case 1 ===\n";
    vector<int> test1 = {4, 3, 2, 7, 8, 1};
    vector<int> exp1 = {2, 4, 8, 7, 3, 1};

    vector<int> result1 = sol.sortEvenOdd(test1);

    cout << "Input:           4 3 2 7 8 1\n";
    cout << "Expected Output: "; printVector(exp1);
    cout << "Actual Output:   "; printVector(result1);
    cout << (result1 == exp1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    cout << "=== Case 2 ===\n";
    vector<int> test2 = {10, 9, 8, 7, 6};
    vector<int> exp2 = {6, 8, 10, 9, 7};

    vector<int> result2 = sol.sortEvenOdd(test2);

    cout << "Input:           10 9 8 7 6\n";
    cout << "Expected Output: "; printVector(exp2);
    cout << "Actual Output:   "; printVector(result2);
    cout << (result2 == exp2 ? "[PASSED]" : "[FAILED]") << "\n\n";

    return 0;
}