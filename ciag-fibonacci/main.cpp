#include <iostream>

using namespace std;

int main()
{
    int liczba, a=0, b=1;
    cin >> liczba;
    for(int i=0; i<liczba; i++){
        cout << a << endl;
        b += a;
        a = b - a;
    }
    return 0;
}
