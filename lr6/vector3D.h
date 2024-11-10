#include <iostream>
#include <string.h>
using namespace std;

struct vector3D {
	double coord_x;
	double coord_y;
	double coord_z;
public:
	vector3D Init(double x, double y, double z);
	void Read();
	void Display();
	string ToString();
	double GetCoord_x();
	double GetCoord_y();
	double GetCoord_z();
	void SetCoord_x(double coord_x);
	void SetCoord_y(double coord_y);
	void SetCoord_z(double coord_z);

	vector3D AddVectors(vector3D m, vector3D n); // Додати x до x, y до y, z до z

	vector3D SubVectors(vector3D m, vector3D n); // Відняти x від x, y від y, z від z
	vector3D ScalarMulVectors(vector3D m, vector3D n); // Просто помножити х у та z векторів та додати тобто x1*x2 + y1*y2 + z1*z2
	vector3D MulVectorInScalar(vector3D m, double n); // Просто множимо x, y, z на число
	bool ComparisonTwoVectors(vector3D m, vector3D n); // Порівняти координати х y и z щоб вони були однаковими
	double LengthVector(vector3D m); // sqrt( (x)^2+(y)^2+(z)^2 )
	bool ComparisonLenghtTwoVectors(vector3D m, vector3D n); // Використовуємо функцію для обчислення довжини і порівнюємо 2 вектора

	vector3D();
	vector3D(double z);
	vector3D(double x, double y);
	vector3D(double x, double y, double z);
	vector3D(const vector3D& other);

	vector3D operator + (vector3D m1);
	vector3D operator - (vector3D m1);
	vector3D operator * (vector3D m1);
	vector3D operator / (vector3D m1);

};

