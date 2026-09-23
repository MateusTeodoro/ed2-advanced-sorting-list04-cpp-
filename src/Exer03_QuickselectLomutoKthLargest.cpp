#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int partition(vector<int>& v, int left, int right, int& swaps)
    {
        int pivot = v[right];
        int i = left - 1;

        for (int j = left; j < right; j++)
        {
            if (v[j] <= pivot)
            {
                i++;

                if (i != j)
                {
                    swap(v[i], v[j]);
                    swaps++;
                }
            }
        }

        if (i + 1 != right)
        {
            swap(v[i + 1], v[right]);
            swaps++;
        }

        return i + 1;
    }

    int quickSelect(vector<int>& v, int left, int right, int targetIdx, int& swaps)
    {
        if (left <= right)
        {
            int pi = partition(v, left, right, swaps);

            if (pi == targetIdx)
            {
                return v[pi];
            }

            else if (pi < targetIdx)
            {
                return quickSelect(v, pi + 1, right, targetIdx, swaps);
            }

            else
            {
                return quickSelect(v, left, pi - 1, targetIdx, swaps);
            }
        }

        return -1;
    }

public:
    void findKthLargest(vector<int> v, int k)
    {
        int n = v.size();
        int targetIdx = n - k; // Converte "K-ésimo maior" para o índice real de um vetor crescente
        int swaps = 0;

        int kth = quickSelect(v, 0, n - 1, targetIdx, swaps);

        cout << kth << "\n";

        // Inteiros ao estado final do vetor
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << (i + 1 == n ? "" : " ");
        }

        cout << "\n";

        // Número total de trocas efetivas
        cout << swaps << "\n";
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