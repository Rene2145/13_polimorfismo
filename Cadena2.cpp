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

	Cadena:Cadena string (texto)
	Cadena::Cadena(string texto) { this->texto = texto; }
	
	int Cadena::longitud() { return texto.length(); }
	
	Cadena Cadena::operator+(Cadena& c) { return Cadena(this->texto + c.texto); }
	
	bool Cadena ::operator==(Cadena& c) { return this->texto == c.texto; }
	bool Cadena ::operator!=(Cadena& c) { return this->texto != c.texto; }
	bool Cadena ::operator<(Cadena& c) { return this->texto < c.texto; }
	bool Cadena ::operator>(Cadena& c) { return this->texto > c.texto; }
	bool Cadena ::operator<=(Cadena& c) { return this->texto <= c.texto; }
	bool Cadena ::operator>=(Cadena& c) { return this->texto >= c.texto; }
	bool Cadena ::operator!() { return this->texto.empty(); }
	
	char Cadena::operator[](int i) { return this->texto[i]; }
	
	ostream& operator<<(ostream& os, Cadena c) { os << c.texto; return os; }
	istream& operator>>(istream& is, Cadena& c) { getline(is, c.texto); return is; }
	}
	
int main() {
    Cadena c1, c2;
    int opcion;
    do {
    	cout << "   MENU\n";
    	cout << "-C-c-C-c-C-c-C-c-C-c-C-c-C-\n\n";
        cout << "1) Ingresar cadenas\n";
        cout << "2) Concatenar cadenas\n";
        cout << "3) Comparar cadenas\n";
        cout << "4) Determinar si una cadena esta vacia\n";
        cout << "5) Acceder a un caracter individual\n";
        cout << "6) Determinar la longitud\n";
        cout << "7) Salir\n";
        cout << "opcion: ";
        cin >> opcion;
        cin.ignore();
        switch(opcion){
        	
		}		
	}
	return 0;
}
