#include <iostream>
using namespace std;

int KadaneAlgorithm(int T[3][4], int n, int m)
{
    int max_t = 0;
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        int max_ending_here = 0;
        int max_so_far = 0;
        for (int j = 0; j < 4; j++)
        {
            max_ending_here = max_ending_here + T[i][j];
            max_ending_here = max(max_ending_here, 0);
            max_so_far = max(max_so_far, max_ending_here);
        }
        if (max_t > max_so_far)
        {
            pos = i;
        }
        max_t = max(max_t, max_so_far);
    }
    cout << "sous tableau maximal [";
    for (int j = 0; j < m; j++)
    {
        cout << "\t" << T[pos][j];
    }
    cout << "]";

    return max_t;
}

int main()
{

    int T[3][4] = {{-2, 1, -3, 4}, {-1, 2, 1, -5}, {4, -1, 2, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    int k = KadaneAlgorithm(T, 3, 4);
    cout << "\t somme est :" << k;
    return 0;
}
