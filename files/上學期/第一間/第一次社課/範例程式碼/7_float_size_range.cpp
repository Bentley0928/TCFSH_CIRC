/**
 * file:   7_float_size_range.cpp
 * author: nevikw39
 * date:   08/24, 2019
 */

#include<cstdio>
#include<limits>

using namespace std;

int main()
{
    printf("float:       sizing %lu bytes, ranging from %g to %g, with %d digits\n", sizeof(float), numeric_limits<float>::min(), numeric_limits<float>::max(), numeric_limits<float>::digits10);
    printf("double:      sizing %lu bytes, ranging from %Lg to %g, with %d digits\n", sizeof(double), numeric_limits<double>::min(), numeric_limits<double>::max(), numeric_limits<double>::digits10);
    printf("long double: sizing %lu bytes, ranging from %Lg to %Lg, with %d digits\n", sizeof(long double), numeric_limits<long double>::min(), numeric_limits<long double>::max(), numeric_limits<long double>::digits10);
    return 0;
}

/**
 * example_input: none
 * possible_output:
 *   float:       sizing  4, ranging from 1.17549e-38 to 3.40282e+38, with 6 digits
 *   double:      sizing  8, ranging from 5.13e-4937 to 2.22507e-308, with 15 digits
 *   long double: sizing 16, ranging from 3.3621e-4932 to 1.18973e+4932, with 18 digits
 * builded on Apple LLVM version 10.0.1 (clang-1001.0.46.4)
 */