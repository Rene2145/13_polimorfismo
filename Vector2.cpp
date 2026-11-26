#include <iostream>
using namespace std;

int main (){
	
Vector operator*(float k);
float operator*(Vector& v);

Vector& operator+=(Vector& v);
Vector& operator-=(Vector& v);

friend istream& operator>>(istream& is, Vector& v);


	return 0;
}
