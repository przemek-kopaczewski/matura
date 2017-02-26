#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int liczba, i=2;
    cin >> liczba;
    double pierwiastek = sqrt(liczba);
    while(liczba>1&&i<=pierwiastek){
        if(liczba % i == 0){
            cout << liczba << endl;
            liczba/=i;
        }
        i++;
    }
    if(liczba > 1){
        cout << liczba << endl;
    }
    return 0;
}
