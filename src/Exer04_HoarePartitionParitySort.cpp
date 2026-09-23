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
        int left = 0;
        int right = v.size() - 1;

        while (true)
        {
            // O ponteiro da esquerda avança enquanto ver números PARES
            while (left < v.size() && v[left] % 2 == 0)
            {
                left++;
            }

            // O ponteiro da direita retrocede enquanto ver números ÍMPARES
            while (right >= 0 && v[right] % 2 != 0) {
                right--;
            }

            // Se os ponteiros se cruzarem, o vetor está segregado
            if (left >= right)
            {
                return left; // Retorna o índice exato onde começam os ímpares
            }

            // Se pararam, é porque encontraram um ímpar na esquerda e um par na direita. Trocam!
            swap(v[left], v[right]);

            // Após trocar, movem-se para a próxima casa para não ficarem travados
            left++;
            right--;
        }
    }

    int partitionAsc(vector<int>& v, int left, int right)
    {
        int pivot = v[left + (right - left) / 2];
        int i = left - 1;
        int j = right + 1;

        while (true)
        {
            do { i++; } while (v[i] < pivot);
            do { j--; } while (v[j] > pivot);

            if (i >= j)
            {
                return j;
            }

            swap(v[i], v[j]);
        }
    }

    void quickSortAsc(vector<int>& v, int left, int right)
    {
        if (left < right)
        {
            int pi = partitionAsc(v, left, right);
            quickSortAsc(v, left, pi);
            quickSortAsc(v, pi + 1, right);
        }
    }

    int partitionDesc(vector<int>& v, int left, int right)
    {
        int pivot = v[left + (right - left) / 2];
        int i = left - 1;
        int j = right + 1;

        while (true)
        {
            do { i++; } while (v[i] > pivot); // Inverte o sinal de < para >
            do { j--; } while (v[j] < pivot); // Inverte o sinal de > para <

            if (i >= j)
            {
                return j;
            }

            swap(v[i], v[j]);
        }
    }

    void quickSortDesc(vector<int>& v, int left, int right)
    {
        if (left < right)
        {
            int pi = partitionDesc(v, left, right);
            quickSortDesc(v, left, pi);
            quickSortDesc(v, pi + 1, right);
        }
    }

public:
    vector<int> sortEvenOdd(vector<int> v)
    {
        if (v.empty()) return v;

        // Isola todos os pares na esquerda e os ímpares na direita
        int boundary = parityPartition(v);

        // Ordena a metade dos pares em ordem crescente
        if (boundary > 0)
        {
            quickSortAsc(v, 0, boundary - 1);
        }

        // Ordena a metade dos ímpares em ordem decrescente
        if (boundary < v.size())
        {
            quickSortDesc(v, boundary, v.size() - 1);
        }

        return v;
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