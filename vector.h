#pragma once
struct vector2 {
    int x =0;
    int y =0;
};
class vector3 {       // The class
public:             // Access specifier
    int x,y,z;        // Attribute (int variable)
     // Attribute (string variable)
};
vector2 vec_add(vector2 a, vector2 b)
{
    vector2 temp1;
    temp1.x = a.x + b.x;
    temp1.y = a.y + b.y;

    return temp1;
}
//direction pointing player
//  = (player pos - monster pos)
//make monster follow this direction vector
//and that's how you move monster towards player
//normalize the direction vector,
//then scalar multi speed to get velocity
//direction vector * speed = velocity vector
//now, dot product by time
//velocity vector (dot) time
//and add monster current position vector by velocity vector(dot) time
//and set it as monster pos,
//you get a a monster to follow by that vector
vector2 vec_sub(vector2 a, vector2 b) {
    vector2 temp1;
    temp1.x = a.x + -b.x;
    temp1.y = a.y + -b.y;
    return temp1;
}
vector2 vec_scalar_multi(vector2 a, vector2 b) {
    vector2 temp1;
    temp1.x = a.x * b.x;
    temp1.y = a.y * b.y;
    return temp1;
}
vector2 vec_scalar_divide(vector2 a, vector2 b) {
    vector2 temp1;
    temp1.x = a.x / b.x;
    temp1.y = a.y / b.y;
    return temp1;
}
int vec_dot(vector2 a, vector2 b) {
    return a.x*b.x + a.y* b.y;
}//if dot product between camera vector and normal vector,
//you can find out whether it needs to be rendered.
//result > 0  angle is less than 90
// means that vector b is in front of vector a
// need to be rendered
//result < 0, angel is more then 90 
// means that vector b is behind of vector a
// doesn't need to be rendered

vector3 vector_cross(vector3 a, vector3 b)
{
    return new vector3(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x);
}

// reflect = p + 2n(-p∙n)
//Vector3 reflect = velocity + 2 * normal * Vector3.Dot(-velocity, normal);