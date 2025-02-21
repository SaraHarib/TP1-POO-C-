#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cout << "Saisir le nombre d'éléments du tableau : ";
    cin >> n;
    
    int* tab = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Saisir le nombre " << (i + 1) << " : ";
        cin >> tab[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Le nombre " << (i + 1) << " est : " << tab[i] << endl;
    }
    for (int i = 0; i < n; i++) {
        int m = 0;
        for (int j = 0; j < n; j++) {
            if (j != i && tab[i] == tab[j]) {
                m = tab[i];
                break;
            }
        }
        if (m == 0) {
            cout << "Le nombre unique est : " << tab[i] << endl;
        }
    }
    return 0;
    
    
}
