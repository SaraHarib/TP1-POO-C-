#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int L;
    cout << "Saisir le nombre de lignes : ";
    cin >> L;
    int** tab = new int*[L];
    int* t = new int[L];
    for (int i = 0; i < L; i++) {
        cout << "Saisir le nombre de colonnes dans la ligne " << (i + 1) << ": ";
        cin >> t[i];
        tab[i] = new int[t[i]];  
    }
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            cout << "Saisir le nombre de la ligne " << (i + 1) << " et la colonne " << (j + 1) << " : ";
            cin >> tab[i][j];
        }
    }
    cout << "\n La matrice saisie : \n";
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < t[i]; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    int* S = new int[L];
    for (int i = 0; i < L; i++) {
        S[i] = 0;
        for (int j = 0; j < t[i]; j++) {
            S[i] += tab[i][j];
        }
    }
    for (int i = 0; i < L; i++) {
        cout << "La Somme de la ligne " << (i + 1) << " : " << S[i] << endl;
    }
    return 0 ;

}