#include <iostream>

using namespace std;

const int N = 3;
bool permutation(int m[N][N])
{
    bool flag[N * N + 1] = {false};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int nbr = m[i][j];
            if ((nbr < 1) || (nbr > N * N) || (flag[nbr]))
            {
                return false;
            }
            flag[nbr] = true;
        }
    }
    return true;
}

int main()
{
    int matrice[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 1}};
    if (permutation(matrice))
    {
        cout << "C'est une permutation" << endl;
    }
    else
    {
        cout << "C'est pas une permutation" << endl;
    }
    return 0;
}
//autre méthode plus générique
//#include <cstdlib>
// #include <iostream>

// using namespace std;

// int main(int argc, char *argv[])
// {
//     int L, C;
//     cout << "Saisir le nombre de lignes : ";
//     cin >> L;
//     cout << "Saisir le nombre de colonnes : ";
//     cin >> C;
//     if (L != C) {
//         cout << "C'est pas bidimensionnel" << endl;
//         return 0;
//     }
    
//     int tab[L][C];
//     for (int i = 0; i < L; i++) {
//         for (int j = 0; j < C; j++) {
//             cout << "Saisir le nombre de la ligne " << (i + 1) << " et la colonne " << (j + 1) << " : ";
//             cin >> tab[i][j];
//         }
//     }
//     int m = 1;
//     for (int i = 0; i < L; i++) {
//         for (int j = 0; j < C; j++) {
//             if (m == tab[i][j]) {
//                 m++;
//             }
//         }
//     }
//     m--;
//     if (m == tab[L - 1][C - 1]) {
//         cout << "C'est une permutation" << endl;
//     } else {
//         cout << "Erreur" << endl;
//     }
//      return 0;
     
     
// }
