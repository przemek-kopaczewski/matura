#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int liczba,a, i = 0;
    int tab[8] = {200,100,50,20,10,5,2,1};
    cin >> liczba;
    while(liczba>0){
        if(liczba >= tab[i]){
            a=liczba/tab[i];
            liczba=liczba-(tab[i]*a);
            cout << tab[i] << "x" << a << endl;
        }
        i++;
    }
    return 0;
}
