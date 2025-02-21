#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, m;
    cout << "Saisir le nombre d'éléments du tableau : ";
    cin >> n;
    
    cout << "Saisir le nombre souhaité : ";
    cin >> m;
    int* tab = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Saisir le nombre " << (i + 1) << " : ";
        cin >> tab[i];
    }
    cout << "Les paires dont la somme est " << m << " sont : ";
    bool Paire = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((tab[i] + tab[j]) == m) {
                cout << "( " << tab[i] << ", " << tab[j] << " ), ";
                Paire = true;
            }
        }
    }
    if (!Paire) {
        cout << "Aucune paire trouvée";
    }
    
    return 0;
    
    
}