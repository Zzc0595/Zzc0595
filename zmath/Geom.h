#include <string>
#include <sstream>
#include <cmath>
namespace zm{
    //绝对值函数
    double abs(double m){
        if (m>=0)return m;
        if (m<0)return -m;}
    
        class Point{
        private:
        double x;
        double y;

        public:
        //构造函数
        Point(double x_val = 0.0, double y_val = 0.0) : x(x_val), y(y_val) {}        
        //double to std::string
        std::string Tostr(double d){
            std::stringstream ss;
            ss << d;
            std::string str1 = ss.str();
            return str1;
        }
        //读写坐标
        double get_x() const {return x;}
        double get_y() const {return y;}
        void set_x(double sx){x = sx;}
        void set_y(double sy){y = sy;}
        std::string display(){
            std::string s1 = "(" + Tostr(x) + "," + Tostr(y) + ")";
            return s1;
        }
        // 运算符重载
        bool operator==(const Point& other) const {
        return (x == other.x) && (y == other.y);
    }  
        bool operator!=(const Point& other) const {
        return !(*this == other);
    }    
        Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }   
        Point operator-(const Point& other) const {
        return Point(x - other.x, y - other.y);
    }   
        Point& operator=(const Point& other) {
        if (this != &other) {
            x = other.x;
            y = other.y;
        }
        return *this;
    }
};
    
    //两点距离
    double dist_pnt(Point a ,Point b){
        if (a==b){return 0.0;}
        else{
            double dx= abs(a.get_x()-b.get_x());
            double dy= abs(a.get_y()-b.get_y());
            return sqrt(dx*dx + dy*dy);}
    }

}