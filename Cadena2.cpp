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

	return 0;
}
