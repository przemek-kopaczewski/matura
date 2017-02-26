#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int liczba, suma =1;
    cin >> liczba;
    double pierwiastek = sqrt(liczba);
    for(int i=2; i <= pierwiastek ;i++){
        if(liczba % i == 0){
            suma += i + liczba/i;
        }
    }
    if(liczba == suma){
        cout << "liczba jest doskona³a";
    } else {
        cout << "liczba nie jest doskonala";
    }
    return 0;
}
