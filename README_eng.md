DESCRIPTION
RealUtils is a C++ utility library that provides convenient aliases for common mathematical functions, making code more readable. It can be used as a header-only library or compiled into a static library.

FEATURES
Aliases: ln(x), lg(x), lb(x) for natural, base-10, and base-2 logarithms.
Trigonometric functions: tg(x), ctg(x), sec(x), cosec(x).
Inverse trigonometric functions: arcsin, arccos, arctg, arcctg, arcsec, arccosec.
Hyperbolic functions: sh, ch, th, cth, sch, csch.
Constants pi() and e() as functions.

INSTALLATION AND USAGE
Copy the RealUtils folder into your project.
Include the header:

#include "RealUtils/real_utils.h"

All functions are in the global namespace.
If you prefer a static library, compile real_utils.cpp together with your project. This is optional because all functions are defined as inline in the header.

DEPENDENCIES
None, only the C++ standard library.

LICENSE
MIT License. See the LICENSE file.

AUTHOR
Mikhail D. Sychev
Email: murzilkabest@icloud.com
Telegram: @Murz1k22
