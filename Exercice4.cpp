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
    int tab[L][C];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "Saisir le nombre de la ligne " << (i + 1) << " et la colonne " << (j + 1) << " : ";
            cin >> tab[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cout << "  " << tab[i][j];
        }
        cout << endl;
    }
    int s[L] = {0}; 
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            s[i] += tab[i][j];
        }
    }
    int m = 0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {
            if (s[i] > s[j]) {
                m = i;
            } else {
                m = j;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < C; i++) {
        cout << " " << tab[m][i];
    }
    cout << " = " << s[m] << endl;

    return 0;
    
}