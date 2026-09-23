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
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<string> L(n1);
        vector<string> R(n2);

        for (int i = 0; i < n1; i++) L[i] = v[left + i];
        for (int j = 0; j < n2; j++) R[j] = v[mid + 1 + j];

        int i = 0, j = 0, k = left;

        while (i < n1 && j < n2)
        {
            // >= prefere a palavra que já estava à esquerda
            if (L[i].length() >= R[j].length())
            {
                v[k++] = L[i++];
            }

            else
            {
                v[k++] = R[j++];
            }
        }

        while (i < n1)
        {
            v[k++] = L[i++];
        }

        while (j < n2)
        {
            v[k++] = R[j++];
        }
    }

    void mergeSortHelper(vector<string>& v, int left, int right)
    {
        if (left < right)
        {
            int mid = left + (right - left) / 2;

            mergeSortHelper(v, left, mid);
            mergeSortHelper(v, mid + 1, right);
            merge(v, left, mid, right);
        }
    }

    int partition(vector<string>& v, int left, int right)
    {
        string pivot = v[right];
        int i = left - 1;

        for (int j = left; j < right; j++)
        {
            if (v[j].length() >= pivot.length())
            {
                i++;
                swap(v[i], v[j]);
            }
        }

        swap(v[i + 1], v[right]);
        return i + 1;
    }

    void quickSortHelper(vector<string>& v, int left, int right)
    {
        if (left < right)
        {
            int pi = partition(v, left, right);
            quickSortHelper(v, left, pi - 1);
            quickSortHelper(v, pi + 1, right);
        }
    }

public:
    vector<string> mergeSort(vector<string> v)
    {
        mergeSortHelper(v, 0, v.size() - 1);
        return v;
    }

    vector<string> quickSort(vector<string> v)
    {
        quickSortHelper(v, 0, v.size() - 1);
        return v;
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