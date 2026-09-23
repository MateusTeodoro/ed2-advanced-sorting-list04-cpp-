#include <iostream>
#include <vector>
#include <utility>

using namespace std;

using ll = long long;

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
    // Função auxiliar que intercala (merge) duas metades e conta as inversões
    ll mergeAndCount(vector<int>& v, int left, int mid, int right)
    {

    }

    ll mergeSortAndCount(vector<int>& v, int left, int right)
    {

    }

public:
    pair<vector<int>, ll> countInversions(vector<int> v)
    {

    }
};

int main()
{
    // --- Case 1 ---
    vector<int> test1 = {2, 3, 8, 6, 1};

    vector<int> exp1 = {1, 2, 3, 6, 8};

    ll expected1 = 5;

    pair<vector<int>, ll> result1 = Solution().countInversions(test1);

    cout << "Input:           "; printVector(test1);
    cout << "\nExpected Output: "; printVector(exp1);
    cout << expected1 << "\n";
    cout << "\nActual Output:   "; printVector(result1.first);
    cout << result1.second << "\n";
    cout << (expected1 == result1.second && exp1 == result1.first ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    vector<int> test2 = {1, 2, 3, 4};

    vector<int> exp2 = {1, 2, 3, 4};
    ll expected2 = 0;

    pair<vector<int>, ll> result2 = Solution().countInversions(test2);

    cout << "Input:           "; printVector(test2);
    cout << "\nExpected Output: "; printVector(exp2);
    cout << expected2 << "\n";
    cout << "\nActual Output:   "; printVector(result2.first);
    cout << result2.second << "\n";
    cout << (expected2 == result2.second && exp2 == result2.first ? "[PASSED]" : "[FAILED]") << "\n\n";

    return 0;
}