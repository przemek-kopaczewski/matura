#include <iostream>

using namespace std;

int main()
{
    int liczba, a=0;
    cin >> liczba;
    for(int i=1; i <= liczba;i++){
        if(liczba%i==0){
            a++;
        }
    }
    if(a<=2){
        cout << liczba << " Liczba jest pierwsza";
    } else {
        cout << liczba << " Liczba nie jest pierwsza";
    }
    return 0;
}
