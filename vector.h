#ifndef VECTOR_H_
#define VECTOR_H_

#include <cmath>

template<typename T>
class Vector2
{
    public:
    T x, y;

    Vector2(int x_, int y_) {this->x = x_; this->y = y_; };
    Vector2(float x_, float y_) {this->x = x_; this->y = y_; };
    Vector2(double x_, double y_) {this->x = x_; this->y = y_; };
    Vector2(const Vector2& other) {this->x = other.x; this->y = other.y;};
    

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

    T mag();
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
T Vector2<T>::mag()
{
    return std::sqrt(x * x + y * y);
}

template<typename T>
T Vector2<T>::mag_squared()
{
    return x * x + y * y;
}

#define Vector2f Vector2<float>
#define Vector2d Vector2<double>
#define Vector2i Vector2<int>




template<typename T>
Vector2d normalize(Vector2<T> v)
{
    double magnitude = v.mag();
    return Vector2d(v.x / magnitude, v.y / magnitude);
}

#endif