//
// Created by zimen on 11/13/2016.
//
#include <cmath>
struct Vec {
    double x, y, z;

    Vec(double x_ = 0, double y_ = 0, double z_ = 0) {
        x = x_;
        y = y_;
        z = z_;
    }

    Vec operator+(const Vec &t) const {
        return Vec(x + t.x, y + t.y, z + t.z);
    }

    Vec operator-(const Vec &t) const {
        return Vec(x - t.x, y - t.y, z - t.z);
    }

    Vec operator*(double b) const {
        return Vec(x * b, y * b, z * b);
    }

    Vec mult(const Vec &b) const {
        return Vec(x * b.x, y * b.y, z * b.z);
    }

    Vec &norm() {
        return *this = *this * (1 / sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));
    }

    double dot(const Vec &b) const {
        return x * b.x + y * b.y + z * b.z;
    }

    double dist(const Vec &b) const {
        return sqrt(pow(x - b.x, 2) + pow(y - b.y, 2) + pow(z - b.z, 2));
    }

    double len() {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }

    Vec operator%(Vec &b) {
        return Vec(y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x);
    }
};
