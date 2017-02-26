#include <iostream>

using namespace std;

int main()
{
    int n,min,max=0,pom;
    cout << "Podaj ilosc zbioriu" << endl;
    cin >> n;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> min;
    for(int i=1;i<n;i++){
        cout << "Podaj kolejne liczby" << endl;
        cin >> pom;
        if(min > pom){
            min = pom;
        } else if (max < pom){
            max = pom;
        }
    }
    cout << "min " << min << " max " << max;
    return 0;
}
