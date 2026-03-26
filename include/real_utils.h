#pragma once // Защита от множественного включения

#include <cmath>

// Числа Пи и Эйлера как функции для избегания проблемы со множественным определением
inline long double pi() { return std::acos(-1.0); }
inline long double e() { return std::exp(1.0); }

// Логарифмы
inline long double ln(long double x) { return std::log(x); }
inline long double lg(long double x) { return std::log10(x); }
inline long double lb(long double x) { return std::log2(x); }
inline long double log(long double x1, long double x2) { return ln(x2) / ln(x1); }

// Степени
inline long double sq(long double x) { return x * x; }
inline long double cb(long double x) { return x * x * x; }

// Корень степени n
inline long double rt(long double x, long double n) { return std::pow(x, 1.0L / n); }

// Тригонометрические функции
inline long double tg(long double x) { return std::tan(x); }
inline long double ctg(long double x) { return 1.0 / std::tan(x); }
inline long double sec(long double x) { return 1.0 / std::cos(x); }
inline long double cosec(long double x) { return 1.0 / std::sin(x); }

// Обратные тригонометрические функции
inline long double arcsin(long double x) { return std::asin(x); }
inline long double arccos(long double x) { return std::acos(x); }
inline long double arctg(long double x) { return std::atan(x); }
inline long double arcctg(long double x) { return pi() / 2.0 - std::atan(x); }
inline long double arcsec(long double x) { return std::acos(1.0L / x); }
inline long double arccosec(long double x) { return std::asin(1.0L / x); }

// Гиперболические функции
inline long double sh(long double x) { return std::sinh(x); }
inline long double ch(long double x) { return std::cosh(x); }
inline long double th(long double x) { return std::tanh(x); }
inline long double cth(long double x) { return 1.0L / std::tanh(x); }
inline long double sch(long double x) { return 1.0L / std::cosh(x); }
inline long double csch(long double x) { return 1.0L / std::sinh(x); }