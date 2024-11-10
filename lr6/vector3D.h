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

	vector3D AddVectors(vector3D m, vector3D n); // ������ x �� x, y �� y, z �� z

	vector3D SubVectors(vector3D m, vector3D n); // ³����� x �� x, y �� y, z �� z
	vector3D ScalarMulVectors(vector3D m, vector3D n); // ������ ��������� � � �� z ������� �� ������ ����� x1*x2 + y1*y2 + z1*z2
	vector3D MulVectorInScalar(vector3D m, double n); // ������ ������� x, y, z �� �����
	bool ComparisonTwoVectors(vector3D m, vector3D n); // �������� ���������� � y � z ��� ���� ���� ����������
	double LengthVector(vector3D m); // sqrt( (x)^2+(y)^2+(z)^2 )
	bool ComparisonLenghtTwoVectors(vector3D m, vector3D n); // ������������� ������� ��� ���������� ������� � ��������� 2 �������

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

