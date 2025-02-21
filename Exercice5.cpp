#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int L, C;
    cout << "Saisir le nombre de lignes : ";
    cin >> L;
    cout << "Saisir le nombre de colonnes : ";
    cin >> C;
    if (L != C) {
        cout << "C'est pas bidimensionnel" << endl;
        return 0;
    }
    
    int tab[L][C];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Saisir le nombre de la ligne " << (i + 1) << " et la colonne " << (j + 1) << " : ";
            cin >> tab[i][j];
        }
    }
    int m = 1;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (m == tab[i][j]) {
                m++;
            }
        }
    }
    m--;
    if (m == tab[L - 1][C - 1]) {
        cout << "C'est une permutation" << endl;
    } else {
        cout << "Erreur" << endl;
    }
     return 0;
     
     
}