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
        for (int j = n - 1; j > i; j--) {
            if ((tab[i] % 2) != 0 && (tab[j] % 2) == 0) {
                int m = tab[i];
                tab[i] = tab[j];
                tab[j] = m;
            }
        }
    }
    cout << "Tableau organisé pairs et puis impairs : ";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << ",";
    }

    return 0;
    
    
}