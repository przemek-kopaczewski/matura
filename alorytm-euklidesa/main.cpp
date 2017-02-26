#include <iostream>

using namespace std;

int main()
{
    int liczba1, liczba2;
    cin >> liczba1;
    cin >> liczba2;
    while(liczba1!=liczba2){
        if(liczba1 > liczba2){
            liczba1-=liczba2;
        }else {
            liczba2-=liczba1;
        }
    }
    cout << liczba1;
    return 0;
}
