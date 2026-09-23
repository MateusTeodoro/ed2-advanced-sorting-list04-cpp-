#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Helper function to print vectors
void printResult(const string& prefix, const vector<string>& v)
{
    cout << prefix << " ";

    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }

    cout << "\n";
}

class Solution {
private:
    void merge(vector<string>& v, int left, int mid, int right)
    {

    }

    void mergeSortHelper(vector<string>& v, int left, int right)
    {

    }

    int partition(vector<string>& v, int left, int right)
    {

    }

    void quickSortHelper(vector<string>& v, int left, int right)
    {

    }

public:
    vector<string> mergeSort(vector<string> v)
    {

    }

    vector<string> quickSort(vector<string> v)
    {

    }
};

int main()
{
    // --- Case 1 ---
    vector<string> test1 = {"mar", "Coder", "sol", "broad"};
    vector<string> exp1 = {"Coder", "broad", "mar", "sol"};

    vector<string> resMerge1 = Solution().mergeSort(test1);
    vector<string> resQuick1 = Solution().quickSort(test1);

    cout << "Input:       mar Coder sol broad\n";
    printResult("[MergeSort]", resMerge1);
    printResult("[QuickSort]", resQuick1);
    cout << (resMerge1 == exp1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    vector<string> test2 = {"sol", "lua", "estrela", "mar", "ceu"};
    vector<string> exp2 = {"estrela", "sol", "lua", "mar", "ceu"};

    vector<string> resMerge2 = Solution().mergeSort(test2);
    vector<string> resQuick2 = Solution().quickSort(test2);

    cout << "Input:       sol lua estrela mar ceu\n";
    printResult("[MergeSort]", resMerge2);
    printResult("[QuickSort]", resQuick2);
    cout << (resMerge2 == exp2 ? "[PASSED]" : "[FAILED]") << "\n\n";

    return 0;
}