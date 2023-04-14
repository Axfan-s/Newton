#pragma once
#include <iostream>
#include <math.h>
#include <functional>
using namespace std;
using func = function<double(double, double, double, double)>;

double f1(double x, double l, double gamma, double delta) {
    double t = tan(x * l);
    double psi = gamma * 1. / delta;
    return t - psi * x;

}
double f2(double x, double l, double gamma, double delta) {
    double t = tan(x * l);
    double psi = gamma * 1. / delta;
    return t - psi * 1.0 / x;

}
double differention(const func& f, double x, double h, double l, double gamma, double delta) {
    return (f(x + h, l, gamma, delta) - f(x, l, gamma, delta)) * 1.0 / h;
}

double Iteration(const func& f, double x, double l, double gamma, double delta) {
    return x - f(x, l, gamma, delta) * 1.0 / differention(f, x, 0.00001, l, gamma, delta);
}
double newton(const func& f, double x, double l, double gamma, double delta) {
    while (f(x, l, gamma, delta) < 0) {
        x += 0.00001;
    }
    double x2 = 0;
    while (abs(x - x2) > 0.00001) {
        double t = x;
        x = Iteration(f, x, l, gamma, delta);
        x2 = t;
    }
    return x;
}