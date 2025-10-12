#include <iostream>
#include <string>
#include </home/zc/Zzc0595/zmath/Zmath.h>
using namespace zm;
int main(){
    Point p1{3.0,4.0};
    std::cout << p1.display() << std::endl;
    Point p2;
    p2.set_x(-7);
    p2.set_y(-8);
    std::cout << p2.display() << std::endl;
    std::cout << dist(p1,p2) << std::endl;

}