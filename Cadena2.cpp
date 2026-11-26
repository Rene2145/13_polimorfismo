#include <iostream>
using namespace std;

class Cadena {
private:
    string texto;
public:
    Cadena(string texto = "");
    int longitud();
    Cadena operator+(Cadena& c);
    bool operator==(Cadena& c);
    bool operator!=(Cadena& c);
    bool operator<(Cadena& c);
    bool operator>(Cadena& c);
    bool operator<=(Cadena& c);
    bool operator>=(Cadena& c);
    bool operator!();
    char operator[](int i);
    friend ostream& operator<<(ostream& os, Cadena c);
    friend istream& operator>>(istream& is, Cadena& c);
};

	Cadena::Cadena(string texto) { this->texto = texto; }
	int Cadena::longitud() { return texto.length(); }
	Cadena Cadena::operator+(Cadena& c) { return Cadena(this->texto + c.texto); }
	bool Cadena::operator==(Cadena& c) { return this->texto == c.texto; }
	bool Cadena::operator!=(Cadena& c) { return this->texto != c.texto; }
	bool Cadena::operator<(Cadena& c) { return this->texto < c.texto; }
	bool Cadena::operator>(Cadena& c) { return this->texto > c.texto; }
	bool Cadena::operator<=(Cadena& c) { return this->texto <= c.texto; }
	bool Cadena::operator>=(Cadena& c) { return this->texto >= c.texto; }
	bool Cadena::operator!() { return this->texto.empty(); }
	char Cadena::operator[](int i) { return this->texto[i]; }
	ostream& operator<<(ostream& os, Cadena c) { os << c.texto; return os; }
	istream& operator>>(istream& is, Cadena& c) { getline(is, c.texto); return is; }

	
int main() {
    Cadena c1, c2;
    int o;
    do {
    	cout << "\t\t\t\t\t\t-C-c-C-c-C-c-C-c-C-c-C-c-C-\n";
    	cout << "\t\t\t\t\t\t\t   MENU\n";
    	cout << "\t\t\t\t\t\t-C-c-C-c-C-c-C-c-C-c-C-c-C-\n\n";
        cout << "1)-c Ingresar cadenas\n";
        cout << "2)-c Concatenar cadenas\n";
        cout << "3)-c Comparar cadenas\n";
        cout << "4)-c Determinar si una cadena esta vacia\n";
        cout << "5)-c Acceder a un caracter individual\n";
        cout << "6)-c Determinar la longitud\n";
        cout << "7)-c Salir\n";
        cout << "opcion: ";
        cin >> o;
        cin.ignore();
        switch(o){
        case 1:
                cout << "Ingresa el c1: "; cin >> c1;
                cout << "Ingresa el c2: "; cin >> c2;
                break;
            case 2:
                cout << "c1 + c2 = \"" << (c1 + c2) << "\"\n";
                break;
            case 3:
                cout << boolalpha;
                cout << "c1 == c2: " << (c1 == c2) << "\n";
                cout << "c1 != c2: " << (c1 != c2) << "\n";
                cout << "c1 < c2: " << (c1 < c2) << "\n";
                cout << "c1 > c2: " << (c1 > c2) << "\n";
                cout << "c1 <= c2: " << (c1 <= c2) << "\n";
                cout << "c1 >= c2: " << (c1 >= c2) << "\n";
                break;
            case 4:
                cout << boolalpha;
                cout << "!c1: " << (!c1) << "\n";
                cout << "!c2: " << (!c2) << "\n";
                break;
            case 5: {
                int sel, i;
                cout << "Cadena (1 o 2): "; cin >> sel;
                cout << "Indice: "; cin >> i;
                if (sel == 1) {
                    if (i >= 0 && i < c1.longitud()) cout << "c1[" << i << "] = '" << c1[i] << "'\n";
                    else cout << "El indice no es valido\n";
                } else if (sel == 2) {
                    if (i >= 0 && i < c2.longitud()) cout << "c2[" << i << "] = '" << c2[i] << "'\n";
                    else cout << "El indice no es valido\n";
                }
                break;
            }
            case 6:
                cout << "Longitud c1: " << c1.longitud() << "\n";
                cout << "Longitud c2: " << c2.longitud() << "\n";
                break;
            case 7:
                cout << "Game Over\n";
                break;
            default:
                cout << "No es una opcion valida\n";	
		}		
	}while(opcion=!7);
	return 0;
}
