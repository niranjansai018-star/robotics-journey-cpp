#include "math_utils.h"
#include <cmath>

namespace math_utils {
    double degToRad(double degrees) { return degrees * M_PI/180.0; }
    double radToDeg(double radians) { return radians * 180.0/M_PI; }
}
