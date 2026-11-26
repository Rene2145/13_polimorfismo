#include <iostream>
using namespace std;

int main (){
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
	
	
		
	return 0;
}
