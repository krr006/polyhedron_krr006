#include <iostream>
using namespace std;

class R3{
        private:
                int x;
                int y;
                int z;
        public:

                R3(int x_, int y_, int z_): x(x_), y(y_), z(z_) {}

                R3 operator+(const R3& object){
                        return R3(x + object.x, y + object.y, z + object.z);

                }

                R3 operator-(const R3& object){

                        return R3(x - object.x, y - object.y, z - object.z);
                }

                R3 operator*(int k){
                        return R3(k * x, k * y, k * z);
                }

                int dot(const R3& object){
                        return x*object.x + y*object.y + z*object.z;
                }

                R3 cross(const R3& object){
                        return R3(y * object.z - z * object.y,
                                  z * object.x - x * object.z,
                                  x * object.y - y * object.x);
                }

                void get(){
                        cout << "x coordinate is " << x << ", "
                             << "y coordinate is " << y << ", "
                             << "z coordinate is " << z << endl;
                }

};


int main(){
        R3 V1(1, 1, 1);
        R3 V2(3, 4, 5);
        R3 V3 = V1 + V2;
        R3 V4 = V2 - V1;
        V3.get();
        cout << "dot is " << V1.dot(V2) << endl;
        //cout << "cross is " << V1.cross(V2).x <<" "<< V1.cross(V2).y <<" "<< V1.cross(V2).z << endl;
        /* cout << V4.x <<" "<< V4.y <<" "<<" "<< V4.z << endl;
        //cout << V3.x <<" "<< V3.y <<" "<<" "<< V3.z << endl;  */
        return 0;
}