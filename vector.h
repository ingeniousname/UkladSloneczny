#ifndef VECTOR_H_
#define VECTOR_H_

#include <cmath>
#include <initializer_list>



// definicje dla wektorow 2d i 3d, w zaleznosci od tego czy bedziemy robic symulacje 2d czy 3d
// wektory mozna dodawac i odejmowac, mnozyc i dzielic przez skalar
// wektory mozna normalizowac (normalize dziala jak *=, a normalized jak *, jezeli wiesz o co chodzi)
// mag() - dlugosc wektora
// mag_squared() - dlugosc wektora podniesiona do kwadratu

// Vector2i, Vector3i - na typie int
// Vector2f, Vector3f - na typie float
// Vector2d, Vector3d - na typie double


template<typename T>
class Vector2
{
    public:
    T x, y;

    Vector2() {};

    Vector2(int x_, int y_) {this->x = x_; this->y = y_; };
    Vector2(float x_, float y_) {this->x = x_; this->y = y_; };
    Vector2(double x_, double y_) {this->x = x_; this->y = y_; };

    Vector2(const Vector2<int>& other) {this->x = other.x; this->y = other.y; };
    Vector2(const Vector2<float>& other) {this->x = other.x; this->y = other.y; };
    Vector2(const Vector2<double>& other) {this->x = other.x; this->y = other.y; };

    Vector2(std::initializer_list<int> l) {auto it = l.begin(); this->x = *it++; this->y = *it; };
    Vector2(std::initializer_list<float> l) {auto it = l.begin(); this->x = *it++; this->y = *it; };
    Vector2(std::initializer_list<double> l) {auto it = l.begin(); this->x = *it++; this->y = *it; };
    

    Vector2 operator+(const Vector2& other);
    Vector2 & operator+=(const Vector2& other);
    Vector2 operator-(const Vector2& other);
    Vector2 & operator-=(const Vector2& other);
    Vector2 operator*(const int& scalar);
    Vector2 operator*(const float& scalar);
    Vector2 operator*(const double& scalar);
    Vector2 & operator*=(const int& scalar);
    Vector2 & operator*=(const float& scalar);
    Vector2 & operator*=(const double& scalar);
    Vector2 operator/(const int& scalar);
    Vector2 operator/(const float& scalar);
    Vector2 operator/(const double& scalar);
    Vector2 & operator/=(const int& scalar);
    Vector2 & operator/=(const float& scalar);
    Vector2 & operator/=(const double& scalar);

    double mag();
    T mag_squared();
};



template<typename T>
Vector2<T> Vector2<T>::operator+(const Vector2<T>& other)
{
    return Vector2<T>(this->x + other.x, this->y + other.y);
}

template<typename T>
Vector2<T> & Vector2<T>::operator+=(const Vector2<T>& other)
{
    this->x += other.x;
    this->y += other.y;
    return *this;
}

template<typename T>
Vector2<T> Vector2<T>::operator-(const Vector2<T>& other)
{
    return Vector2<T>(this->x - other.x, this->y - other.y);
}

template<typename T>
Vector2<T> & Vector2<T>::operator-=(const Vector2<T>& other)
{
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}

template<typename T>
Vector2<T> Vector2<T>::operator*(const int& scalar)
{
    return Vector2<T>(this->x * scalar, this->y * scalar);
}

template<typename T>
Vector2<T> Vector2<T>::operator*(const float& scalar)
{
    return Vector2<T>(this->x * scalar, this->y * scalar);
}

template<typename T>
Vector2<T> Vector2<T>::operator*(const double& scalar)
{
    return Vector2<T>(this->x * scalar, this->y * scalar);
}

template<typename T>
Vector2<T> & Vector2<T>::operator*=(const int& scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    return *this;
}

template<typename T>
Vector2<T> & Vector2<T>::operator*=(const float& scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    return *this;
}

template<typename T>
Vector2<T> & Vector2<T>::operator*=(const double& scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    return *this;
}

template<typename T>
Vector2<T> Vector2<T>::operator/(const int& scalar)
{
    return Vector2<T>(this->x / scalar, this->y / scalar);
}

template<typename T>
Vector2<T> Vector2<T>::operator/(const float& scalar)
{
    return Vector2<T>(this->x / scalar, this->y / scalar);
}

template<typename T>
Vector2<T> Vector2<T>::operator/(const double& scalar)
{
    return Vector2<T>(this->x / scalar, this->y / scalar);
}

template<typename T>
Vector2<T> & Vector2<T>::operator/=(const int& scalar)
{
    this->x /= scalar;
    this->y /= scalar;
    return *this;
}

template<typename T>
Vector2<T> & Vector2<T>::operator/=(const float& scalar)
{
    this->x /= scalar;
    this->y /= scalar;
    return *this;
}

template<typename T>
Vector2<T> & Vector2<T>::operator/=(const double& scalar)
{
    this->x /= scalar;
    this->y /= scalar;
    return *this;
}

template<typename T>
double Vector2<T>::mag()
{
    return std::sqrt(x * x + y * y);
}

template<typename T>
T Vector2<T>::mag_squared()
{
    return x * x + y * y;
}


template<typename T>
class Vector3
{
    public:
    T x, y, z;

    Vector3() {};

    Vector3(int x_, int y_, int z_) {this->x = x_; this->y = y_; this->z = z_;};
    Vector3(float x_, float y_, float z_) {this->x = x_; this->y = y_; this->z = z_;};
    Vector3(double x_, double y_, double z_) {this->x = x_; this->y = y_; this->z = z_;};

    Vector3(const Vector3<int>& other) {this->x = other.x; this->y = other.y; this->z = other.z;};
    Vector3(const Vector3<float>& other) {this->x = other.x; this->y = other.y; this->z = other.z;};
    Vector3(const Vector3<double>& other) {this->x = other.x; this->y = other.y; this->z = other.z;};

    Vector3(std::initializer_list<int> l) {auto it = l.begin(); this->x = *it++; this->y = *it++; this->z = *it; };
    Vector3(std::initializer_list<float> l) {auto it = l.begin(); this->x = *it++; this->y = *it++; this->z = *it; };
    Vector3(std::initializer_list<double> l) {auto it = l.begin(); this->x = *it++; this->y = *it++; this->z = *it; };

    Vector3(const Vector2<int>& other, int z) {this->x = other.x; this->y = other.y; this->z = z;};
    Vector3(const Vector2<float>& other, int z) {this->x = other.x; this->y = other.y; this->z = z;};
    Vector3(const Vector2<double>& other, int z) {this->x = other.x; this->y = other.y; this->z = z;};
    Vector3(const Vector2<int>& other, float z) {this->x = other.x; this->y = other.y; this->z = z;};
    Vector3(const Vector2<float>& other, float z) {this->x = other.x; this->y = other.y; this->z = z;};
    Vector3(const Vector2<double>& other, float z) {this->x = other.x; this->y = other.y; this->z = z;};
    Vector3(const Vector2<int>& other, double z) {this->x = other.x; this->y = other.y; this->z = z;};
    Vector3(const Vector2<float>& other, double z) {this->x = other.x; this->y = other.y; this->z = z;};
    Vector3(const Vector2<double>& other, double z) {this->x = other.x; this->y = other.y; this->z = z;};
    

    Vector3 operator+(const Vector3& other);
    Vector3 & operator+=(const Vector3& other);
    Vector3 operator-(const Vector3& other);
    Vector3 & operator-=(const Vector3& other);
    Vector3 operator*(const int& scalar);
    Vector3 operator*(const float& scalar);
    Vector3 operator*(const double& scalar);
    Vector3 & operator*=(const int& scalar);
    Vector3 & operator*=(const float& scalar);
    Vector3 & operator*=(const double& scalar);
    Vector3 operator/(const int& scalar);
    Vector3 operator/(const float& scalar);
    Vector3 operator/(const double& scalar);
    Vector3 & operator/=(const int& scalar);
    Vector3 & operator/=(const float& scalar);
    Vector3 & operator/=(const double& scalar);

    double mag();
    T mag_squared();
};



template<typename T>
Vector3<T> Vector3<T>::operator+(const Vector3<T>& other)
{
    return Vector3<T>(this->x + other.x, this->y + other.y, this->z + other.z);
}

template<typename T>
Vector3<T> & Vector3<T>::operator+=(const Vector3<T>& other)
{
    this->x += other.x;
    this->y += other.y;
    this->z += other.z;
    return *this;
}

template<typename T>
Vector3<T> Vector3<T>::operator-(const Vector3<T>& other)
{
    return Vector3<T>(this->x - other.x, this->y - other.y, this->z - other.z);
}

template<typename T>
Vector3<T> & Vector3<T>::operator-=(const Vector3<T>& other)
{
    this->x -= other.x;
    this->y -= other.y;
    this->z -= other.z;
    return *this;
}

template<typename T>
Vector3<T> Vector3<T>::operator*(const int& scalar)
{
    return Vector3<T>(this->x * scalar, this->y * scalar, this->z * scalar);
}

template<typename T>
Vector3<T> Vector3<T>::operator*(const float& scalar)
{
    return Vector3<T>(this->x * scalar, this->y * scalar, this->z * scalar);
}

template<typename T>
Vector3<T> Vector3<T>::operator*(const double& scalar)
{
    return Vector3<T>(this->x * scalar, this->y * scalar, this->z * scalar);
}

template<typename T>
Vector3<T> & Vector3<T>::operator*=(const int& scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;
    return *this;
}

template<typename T>
Vector3<T> & Vector3<T>::operator*=(const float& scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;
    return *this;
}

template<typename T>
Vector3<T> & Vector3<T>::operator*=(const double& scalar)
{
    this->x *= scalar;
    this->y *= scalar;
    this->z *= scalar;
    return *this;
}

template<typename T>
Vector3<T> Vector3<T>::operator/(const int& scalar)
{
    return Vector3<T>(this->x / scalar, this->y / scalar, this->z / scalar);
}

template<typename T>
Vector3<T> Vector3<T>::operator/(const float& scalar)
{
    return Vector3<T>(this->x / scalar, this->y / scalar, this->z / scalar);
}

template<typename T>
Vector3<T> Vector3<T>::operator/(const double& scalar)
{
    return Vector3<T>(this->x / scalar, this->y / scalar, this->z / scalar);
}

template<typename T>
Vector3<T> & Vector3<T>::operator/=(const int& scalar)
{
    this->x /= scalar;
    this->y /= scalar;
    this->z /= scalar;
    return *this;
}

template<typename T>
Vector3<T> & Vector3<T>::operator/=(const float& scalar)
{
    this->x /= scalar;
    this->y /= scalar;
    this->z /= scalar;
    return *this;
}

template<typename T>
Vector3<T> & Vector3<T>::operator/=(const double& scalar)
{
    this->x /= scalar;
    this->y /= scalar;
    this->z /= scalar;
    return *this;
}

template<typename T>
double Vector3<T>::mag()
{
    return std::sqrt(x * x + y * y + z * z);
}

template<typename T>
T Vector3<T>::mag_squared()
{
    return x * x + y * y + z * z;
}

#define Vector2f Vector2<float>
#define Vector2d Vector2<double>
#define Vector2i Vector2<int>


#define Vector3f Vector3<float>
#define Vector3d Vector3<double>
#define Vector3i Vector3<int>


template<typename T>
void normalize(Vector2<T>& v)
{
    double magnitude = v.mag();
    v.x /= magnitude;
    v.y /= magnitude;
}

template<typename T>
void normalize(Vector3<T>& v)
{
    double magnitude = v.mag();
    v.x /= magnitude;
    v.y /= magnitude;
    v.z /= magnitude;
}

template<typename T>
Vector2d normalized(Vector2<T> v)
{
    double magnitude = v.mag();
    return Vector2d(v.x / magnitude, v.y / magnitude);
}

template<typename T>
Vector3d normalized(Vector3<T> v)
{
    double magnitude = v.mag();
    return Vector3d(v.x / magnitude, v.y / magnitude, v.z / magnitude);
}

#endif