/**
  * file:   6_integer_size_range.cpp
  * author: nevikw39
  * date:   08/24, 2019
  */

#include<cstdio>
#include<limits>

using namespace std;

int main()
{
    printf("short:          sizing %lu bytes, ranging from %d to %d\n", sizeof(short), numeric_limits<short>::min(), numeric_limits<short>::max());
    printf("unsigned short: sizing %lu bytes, ranging from %u to %u\n", sizeof(unsigned short), numeric_limits<unsigned short>::min(), numeric_limits<unsigned short>::max());
    printf("int:            sizing %lu bytes, ranging from %d to %d\n", sizeof(int), numeric_limits<int>::min(), numeric_limits<int>::max());
    printf("unsigned int:   sizing %lu bytes, ranging from %u to %u\n", sizeof(unsigned int), numeric_limits<unsigned int>::min(), numeric_limits<unsigned int>::max());
    printf("long:           sizing %lu bytes, ranging from %ld to %ld\n", sizeof(long), numeric_limits<long>::min(), numeric_limits<long>::max());
    printf("unsigned long:  sizing %lu bytes, ranging from %lu to %lu\n", sizeof(unsigned long), numeric_limits<unsigned long>::min(), numeric_limits<unsigned long>::max());
    return 0;
}

/*
 * example_input: none
 * possible_output:
 *   short:          sizing 2 bytes, ranging from -32768 to 32767
 *   unsigned short: sizing 2 bytes, ranging from 0 to 65535
 *   int:            sizing 4 bytes, ranging from -2147483648 to 2147483647
 *   unsigned int:   sizing 4 bytes, ranging from 0 to 4294967295
 *   long:           sizing 8 bytes, ranging from -9223372036854775808 to 9223372036854775807
 *   unsigned long:  sizing 8 bytes, ranging from 0 to 18446744073709551615
 * builded on Apple LLVM version 10.0.1 (clang-1001.0.46.4)
 */