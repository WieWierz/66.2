#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class licz {
    ifstream plik;
    int liczby[100];
    int x;

public:
    string wynik="";

    void wypisz() {
        while(!plik.eof()) {
            for(int i = 0; i <= 2; i++) {
                plik >> x;
                liczby[i]=x;
            }
            czy();
        }
        cout<<wynik;
    }

    void czy() {
        bool pierwsze  = true;

        for(int i=0; i<=1; i++) {
            for(int j=2; j<liczby[i]; j++) {
                if(liczby[i]%j == 0) {
                    pierwsze = false;
                }
            }
        }
        if(pierwsze) {
            if(liczby[0]*liczby[1] == liczby[2]) {
                for(int i=0; i<=2; i++) {
                    wynik += to_string(liczby[i]) + " ";
                }
                wynik += "\n";
            }
        }
    }
};

int main(int argc, char** argv) {
	
	licz l;
	l.wypisz();
	
	return 0;
}
