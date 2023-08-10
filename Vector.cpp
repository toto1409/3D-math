// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "vector.h"
using namespace std;
int main()
{

    vector2 v1;
    vector2 v2;
    v1.x = 4; v1.y = 9;
    v2.x = 2; v2.y = 3;

    vector2 v3 = vec_add(v1, v2);
    vector2 v4 = vec_sub(v1, v2);
    vector2 v5 = vec_scalar_multi(v1, v2);
    vector2 v6 = vec_scalar_divide(v1, v2);
    int v7 = vec_dot(v1, v2);
    cout << "v1 = [" << v1.x <<","<<v1.y <<  "]\n";
    cout << "v2 = [" << v2.x << "," << v2.y << "]\n";
    cout << "addition = [" << v3.x << "," << v3.y << "]\n";
    cout << "subtract = [" << v4.x << "," << v4.y << "]\n";
    cout << "scalar multi [" << v5.x << "," << v5.y << "]\n";
    cout << "scalar divi [" << v6.x << "," << v6.y << "]\n";
    cout << "dot product "  << v7 << "\n";
}
