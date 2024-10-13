#include <iostream>
#include "vector3D.h"
using namespace std;


int main() {
	vector3D a, b, c;

	//Method Read
	cout << "Method Read" << endl;
	a.Read();

	//Method Display
	cout << "Method Display" << endl;
	a.Display();
	
	//Method ToString
	cout << "Method ToString" << endl;
	cout << a.ToString() << endl << endl;
	
	//Method GetCoord_x and SetCoord_x
	cout << "Method GetCoord_x and SetCoord_x" << endl;
	cout << "Before method SetCoord_x x = " << a.GetCoord_x() << endl;
	a.SetCoord_x(6);
	cout << "After method SetCoord_x x = " << a.GetCoord_x() << endl << endl;

	//Method GetCoord_y and SetCoord_y
	cout << "Method GetCoord_y and SetCoord_y" << endl;
	cout << "Before method SetCoord_y y = " << a.GetCoord_y() << endl;
	a.SetCoord_y(8);
	cout << "After method SetCoord_y y = " << a.GetCoord_y() << endl << endl;

	//Method GetCoord_z and SetCoord_z
	cout << "Method GetCoord_z and SetCoord_z" << endl;
	cout << "Before method SetCoord_z z = " << a.GetCoord_z() << endl;
	a.SetCoord_z(7);
	cout << "After method SetCoord_z z = " << a.GetCoord_z() << endl << endl;

	//Method AddVectors
	b.Read();
	cout << "Method AddVectors" << endl;
	c = a.AddVectors(a, b);
	c.Display();

	//Method SubVectors
	cout << "Method SubVectors" << endl;
	c = a.SubVectors(a, b);
	c.Display();

	//Method ScalarMulVectors
	cout << "Method ScalarMulVectors" << endl;
	c = a.ScalarMulVectors(a, b);
	c.Display();

	//Method ScalarMulVectors
	cout << "Method MulVectorInScalar" << endl;
	c = a.MulVectorInScalar(a, 2);
	c.Display();

	//Method ComparisonTwoVectors false
	cout << "Method ComparisonTwoVectors false " << endl;
	cout << "a == b = " << a.ComparisonTwoVectors(a, b) << endl;

	//Method ComparisonTwoVectors true
	b.SetCoord_x(6);
	b.SetCoord_y(8);
	b.SetCoord_z(7);
	cout << "Method ComparisonTwoVectors true " << endl;
	cout << "a == b = " << a.ComparisonTwoVectors(a, b) << endl;

	//Method LengthVector
	a.SetCoord_x(10);
	a.SetCoord_y(10);
	a.SetCoord_z(20);
	cout << "Method LengthVector" << endl;
	cout << "Lenght a = " << a.LengthVector(a);

	//Method ComparisonLenghtTwoVectors false
	cout << "Method ComparisonLenghtTwoVectors false" << endl;
	cout << "Lenght a == Lenght b = " << a.ComparisonLenghtTwoVectors(a, b) << endl;

	//Method ComparisonLenghtTwoVectors true
	b.SetCoord_x(10);
	b.SetCoord_y(10);
	b.SetCoord_z(20);
	cout << "Method ComparisonLenghtTwoVectors true" << endl;
	cout << "Lenght a == Lenght b = " << a.ComparisonLenghtTwoVectors(a, b) << endl;


	system("pause");
}