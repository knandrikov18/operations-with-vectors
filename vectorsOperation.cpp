// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
class Vector3d {
private:

    float x;
    float y;
    float z;
public:

    void operator/=(const float vector);
    void operator *=(const float vector);
    void operator +=(const Vector3d& vectorSum);
    void operator -=(const Vector3d& v);
    float calcScalarProduct(const Vector3d& v) const;
    void print();

};

void Vector3d::operator /=(const float vector) {
    x = x / vector;
    y = y / vector;
    z = z / vector;
}

void Vector3d::operator *=(const float vector) {
    x = x * vector;
    y = y * vector;
    z = z * vector;
}

void Vector3d::operator +=(const Vector3d& vectorSum) {
    x += vectorSum.x;
    y += vectorSum.y;
    z += vectorSum.z;
}

void Vector3d::operator -=(const Vector3d& v)
{
    x -= v.x;
    y -= v.y;
    z -= v.z;
}

float Vector3d::calcScalarProduct(const Vector3d& v) const {
    return x * v.x + y * v.y + z * v.z;
}

void Vector3d::print()
{
    cout << "x = " << this->x << ", y = " << this->y << ", z = " << this->z << endl;
}

int main()
{

}