#include <iostream>
#include <math.h>
#include <list>

using namespace std;

int main()
{
    int casos, cont = 0, numero, cont2, casos2, cont3, tamanho, defi;
    list<int> lista;
    list<int>::iterator it;
    cin >> casos;
    while (cont < casos){
        cin >> casos2;
        cont2 = 0;
        while (cont2 < casos2){
            cin >> numero;
            if (numero%2 == 1){
                lista.push_back(numero);
            }
            cont2++;
        }
        lista.sort();
        cont3 = 0;
        tamanho = lista.size();
        defi = 1;
        while (cont3 < tamanho){
            if (defi == 1){
                it = lista.end();
                *it--;
                cout << *it;
                defi = 0;
                it = lista.erase(it);
            }else{
                it = lista.begin();
                cout << *it;
                defi = 1;
                it = lista.erase(it);
            }
            if (cont3 < tamanho - 1){
                cout << " ";
            }
            cont3++;
        }
        cout <<endl;
        lista.clear();
        cont++;
    }
    return 0;
}
