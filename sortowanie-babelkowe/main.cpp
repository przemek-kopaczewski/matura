#include <iostream>

using namespace std;

int ilosc;

static void b_sort(int tab[]){
    int temp;
    int zmiana = 1;
    while(zmiana > 0){
        zmiana = 0;
        for(int i=0; i<ilosc-1; i++){
            if(tab[i]>tab[i+1]){
                temp = tab[i+1];
                tab[i+1] = tab[i];
                tab[i] = temp;
                zmiana++;
            }
        }
    }
    for(int i=0; i<ilosc; i++){
        cout << tab[i] << " ";
    }
}

int main()
{
    cout << "Podaj ilosc elementow tablicy" << endl;
    cin >> ilosc;

    int tab[ilosc];
    for(int i=0; i<ilosc; i++){
        cout << "Podaj element tablicy:" << endl;
        cin >> tab[i];
    }
    b_sort(tab);
    return 0;
}
