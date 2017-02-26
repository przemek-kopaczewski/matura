#include <iostream>

using namespace std;

static void pierwiastek(int liczba){
    int pom=0;
    for(int i=0; i<=20; i++){
        if(i*i == liczba){
            cout << "Pierwiastek z liczby " << liczba << " istnieje i wynosi " << i << endl;
            break;
        } else {
            pom++;
        }
    }
    if(pom == 0){
        cout << "Pierwiastek z liczby " << liczba << " nie istnieje";
    }
}

int main()
{
    int liczba;
    cin >> liczba;
    pierwiastek(liczba);
    return 0;
}
