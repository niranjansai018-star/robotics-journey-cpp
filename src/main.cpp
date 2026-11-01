#include <iostream>
#include "math_utils.h"

int main() {
    double angle_deg = 90.0;
    std::cout << angle_deg << " deg = " << math_utils::degToRad(angle_deg) << " rad\n";
    return 0;
}

