#include <iostream>
#include <conio.h>

using namespace std;

int ilosc;

static void przezWybor(int tab[]){
    int min,b;
    for (int i=0;i<ilosc-1;i++)  {
        min=i;
        for (int j=i+1;j<ilosc;j++){
            if (tab[j]<tab[min]){
                min=j;
            }
        }
        b=tab[min];
        tab[min]=tab[i];
        tab[i]=b;
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
    przezWybor(tab);
    for(int i=0;i<ilosc;i++){
        cout << tab[i] << " ";
    }
    return 0;
}
