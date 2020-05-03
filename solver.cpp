//
// Created by shaharnik on 24/04/2020.
//
#include "solver.hpp"
#include <complex>
#include <iostream>
using namespace std;
using namespace solver;

RealVariable::RealVariable(double a ,double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

RealVariable solver::operator+(const RealVariable &x, const RealVariable &y){
    return RealVariable(x.a + y.a, x.b + y.b, x.c + y.c);

};
RealVariable solver::operator+(const RealVariable &x, const double &y){
    return RealVariable(x.a, x.b, x.c + y);
};
RealVariable solver::operator +(const double &y, const RealVariable &x){
    return x+y;
};

RealVariable solver::operator /(const RealVariable& x, const double y){
    return RealVariable(x.a / y, x.b / y, x.c / y);
};

RealVariable solver::operator-(const RealVariable &x, const RealVariable& y)
{
    return RealVariable(x.a - y.a, x.b - y.b, x.c - y.c);
    }
RealVariable solver::operator-(const RealVariable & x, const double y){
    return RealVariable(x.a, x.b, x.c - y);
    }
RealVariable solver::operator-(const double y, const RealVariable& x){
    return RealVariable(x.a, x.b, y - x.c);
    }

RealVariable solver::operator*(const double y, const RealVariable& x){
    return RealVariable(x.a * y, x.b * y, x.c * y);
    }

RealVariable solver::operator==(const RealVariable& x, const RealVariable& y){
    return x - y;
    }
RealVariable solver::operator==(const RealVariable& x, const double y){
    return x - y;
    }
RealVariable solver::operator==(const double y, const RealVariable& x){
    return y - x;
    }
RealVariable solver::operator^(const RealVariable& x, const double y){
    if(y == 0){
        return RealVariable(0, 0, 1);
    }
    else if(y == 2) {
        return RealVariable(1, 0, 0);
    }
    if(y==2 && x.c != 0 &&x.b != 0)
        return RealVariable(pow(x.b, y), x.b * x.c*y, pow(x.c, y));
    if(y==2 && x.c==0 && x.b!=0)
        return RealVariable(pow(x.b, y), 0, 0);

};





double solver::solve(const RealVariable x) {
    //cout<<"a.x:"<<x.a<<" x.b:"<<x.b<<" x.c: "<<x.c<<endl;
    if(x.a==0) {
        if(x.b==0 && x.c!=0)
            throw std::out_of_range {" there is no result "};
        else return x.c/-x.b;
    }
    else if(x.a == 0){
        return abs(x.c / x.b); 
    }
    else if(x.c < 0){
        double x1 = (-x.b + sqrt(x.b * x.b - 4 * x.a * x.c)) / (2 * x.a);
        return x1;
    }else{throw runtime_error {"There is no Real solution! "};}
    
};

