//
// Created by shaharnik on 24/04/2020.
//

#pragma once
#include <complex>
namespace solver
{
    class RealVariable
    {
        public:
        double a,b,c;

        //Constructor
    
        RealVariable(double a ,double b, double c);
        RealVariable(): a(0), b(1), c(0){}

        friend RealVariable operator +(const RealVariable &, const RealVariable &);
        friend RealVariable operator +(const RealVariable &, const double &);
        friend RealVariable operator +(const double &, const RealVariable &);

        friend RealVariable operator -(const RealVariable &, const RealVariable &);
        friend RealVariable operator -(const RealVariable &, const double);
        friend RealVariable operator-(const double y, const RealVariable& x);

        friend RealVariable operator *(const double, const RealVariable &);

        friend RealVariable operator ==(const RealVariable &, const RealVariable &);
        friend RealVariable operator ==(const RealVariable &, const double);
        friend RealVariable operator ==(const double y, const RealVariable& x);

        friend RealVariable operator ^(const RealVariable& x, const double y);

        friend RealVariable operator /(const RealVariable& x, const double y);
    };
    double solve(RealVariable );


class ComplexVariable{
    public:
    ComplexVariable();



}

}
