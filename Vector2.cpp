#include <iostream>
using namespace std;

int main (){
	
Vector operator*(float k);
float operator*(Vector& v);

Vector& operator+=(Vector& v);
Vector& operator-=(Vector& v);

friend istream& operator>>(istream& is, Vector& v);

v2 = v1 * 4;
v2 = 4 * v1;



	return 0;
}
