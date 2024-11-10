#include "vector3D.h"
#include <iostream>
#include <math.h>
#include <string.h>
#include <string>

using namespace std;

vector3D vector3D::Init(double x, double y, double z)
{
    vector3D tmp;
    tmp.coord_x = x;
    tmp.coord_y = y;
    tmp.coord_z = z;
    return tmp;
}

void vector3D::Read()
{
    cout << "input x" << endl;
    cin >> coord_x;
    cout << "input y" << endl;
    cin >> coord_y;
    cout << "input z" << endl;
    cin >> coord_z;
    cout << endl;
}

void vector3D::Display()
{
    cout << "x = " << coord_x << endl;
    cout << "y = " << coord_y << endl;
    cout << "z = " << coord_z << endl;
}

string vector3D::ToString() {
    std::string tmp;
    //cout << "x = " << to_string(coord_x) << " y = " << to_string(coord_y) << " z = " << to_string(coord_z) << endl;
    tmp = "x = " + to_string(coord_x) + " y = " + to_string(coord_y) + " z = " + to_string(coord_z);
    return tmp;
}

double vector3D::GetCoord_x()
{
    return coord_x;
}

double vector3D::GetCoord_y()
{
    return coord_y;
}

double vector3D::GetCoord_z()
{
    return coord_z;
}

void vector3D::SetCoord_x(double x)
{
    coord_x = x;
}

void vector3D::SetCoord_y(double y)
{
    coord_y = y;
}

void vector3D::SetCoord_z(double z)
{
    coord_z = z;
}


vector3D vector3D::AddVectors(vector3D m, vector3D n)
{
    vector3D temp{};
    temp.coord_x = m.coord_x + n.coord_x;
    temp.coord_y = m.coord_y + n.coord_y;
    temp.coord_z = m.coord_z + n.coord_z;

    return temp;
}

vector3D vector3D::SubVectors(vector3D m, vector3D n)
{
    vector3D temp{};
    temp.coord_x = m.coord_x - n.coord_x;
    temp.coord_y = m.coord_y - n.coord_y;
    temp.coord_z = m.coord_z - n.coord_z;

    return temp;
}

vector3D vector3D::ScalarMulVectors(vector3D m, vector3D n)
{
    vector3D temp{};
    temp.coord_x = m.coord_x * n.coord_x;
    temp.coord_y = m.coord_y * n.coord_y;
    temp.coord_z = m.coord_z * n.coord_z;
    return temp;
}

vector3D vector3D::MulVectorInScalar(vector3D m, double n)
{
    vector3D temp{};
    temp.coord_x = m.coord_x * n;
    temp.coord_y = m.coord_y * n;
    temp.coord_z = m.coord_z * n;
    return temp;
}

bool vector3D::ComparisonTwoVectors(vector3D m, vector3D n)
{
    if (m.coord_x == n.coord_x and m.coord_y == n.coord_y and m.coord_z == n.coord_z) {
        return true;
    }
    else {
        return false;
    }
}

double vector3D::LengthVector(vector3D m)
{
    return sqrt( (pow(m.coord_x, 2) + pow(m.coord_y, 2) + pow(m.coord_z, 2)));
}

bool vector3D::ComparisonLenghtTwoVectors(vector3D m, vector3D n)
{
    if (m.LengthVector(m) == n.LengthVector(n)) {
        return true;
    }
    else { 
        return false; 
    }

}

vector3D::vector3D()
{
    coord_x = 0.0;
    coord_y = 0.0;
    coord_z = 0.0;
}

vector3D::vector3D(double z)
{
    coord_x = 0.0;
    coord_y = 0.0;
    coord_z = z;
}

vector3D::vector3D(double z, double y)
{
    coord_x = 0.0;
    coord_y = y;
    coord_z = z;
}

vector3D::vector3D(double x, double y, double z)
{
    coord_x = x;
    coord_y = y;
    coord_z = z;
}

vector3D::vector3D(const vector3D& other)
{
    coord_x = other.coord_x;
    coord_y = other.coord_y;
    coord_z = other.coord_z;
}

vector3D vector3D::operator+(vector3D m1)
{
    vector3D tmp;
    tmp.coord_x = this->coord_x + m1.coord_x;
    tmp.coord_y = this->coord_y + m1.coord_y;
    tmp.coord_z = this->coord_z + m1.coord_z;
    return tmp;
}

vector3D vector3D::operator-(vector3D m1)
{
    vector3D tmp;
    tmp.coord_x = this->coord_x - m1.coord_x;
    tmp.coord_y = this->coord_y - m1.coord_y;
    tmp.coord_z = this->coord_z - m1.coord_z;
    return tmp;
}

vector3D vector3D::operator*(vector3D m1)
{
    vector3D tmp;
    tmp.coord_x = this->coord_x * m1.coord_x;
    tmp.coord_y = this->coord_y * m1.coord_y;
    tmp.coord_z = this->coord_z * m1.coord_z;
    return tmp;
}

vector3D vector3D::operator/(vector3D m1)
{
    vector3D tmp;
    tmp.coord_x = this->coord_x / m1.coord_x;
    tmp.coord_y = this->coord_y / m1.coord_y;
    tmp.coord_z = this->coord_z / m1.coord_z;
    return tmp;
}
