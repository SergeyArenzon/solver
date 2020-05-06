//
// Created by shaharnik on 24/04/2020.
//

#pragma once
#include <complex>

using namespace std;

namespace solver
{

    struct RealVariable 
    {
        public:
            double a,b,c;

        //Constructor
        RealVariable(double a ,double b, double c);
        RealVariable(): a(0), b(1), c(0){}
        ~RealVariable();


        //Operators

        //plus
        friend RealVariable operator+(const RealVariable&, const RealVariable&);
        friend RealVariable operator+(const RealVariable&, const double&);
        friend RealVariable operator+(const double&, const RealVariable&);

        //subtraction
        friend RealVariable operator-(const RealVariable&, const RealVariable&);
        friend RealVariable operator-(const RealVariable&, const double);
        friend RealVariable operator-(const double& y, const RealVariable& x);

        //multiplication
        friend RealVariable operator*(const RealVariable &, const RealVariable &);
        friend RealVariable operator*(const RealVariable &,const double);
        friend RealVariable operator*(const double, const RealVariable &);
        
        //division
        friend RealVariable operator/(const RealVariable&, const RealVariable&);
        friend RealVariable operator/(const RealVariable&, const double);
        friend RealVariable operator/(const double, const RealVariable&);

        //power
        friend RealVariable operator^(const RealVariable&, const double);

        //equal
        friend RealVariable operator ==(const RealVariable&, const RealVariable&);
        friend RealVariable operator ==(const RealVariable&, const double);
        friend RealVariable operator ==(const double, const RealVariable&);

    }; // end real


    struct ComplexVariable
    {

        complex<double> _a,_b,_c;

        public:
            ComplexVariable(const complex<double> a, const complex<double> b, const complex<double> c): _a(a), _b(b), _c(c){}
            ComplexVariable(): _a(0),_b(1),_c(0){}
            ~ComplexVariable();

        // ///Operators

        //plus 
        friend ComplexVariable operator+(const ComplexVariable&,const ComplexVariable&);
        friend ComplexVariable operator+(const ComplexVariable&,const double);
        friend ComplexVariable operator+(const double,const ComplexVariable&);
        friend ComplexVariable operator+(const ComplexVariable&,const complex<double>);
        friend ComplexVariable operator+(const complex<double>,const ComplexVariable&);


        //subtraction 
        friend ComplexVariable operator-(const ComplexVariable&,const ComplexVariable&);
        friend ComplexVariable operator-(const ComplexVariable&,const double);
        friend ComplexVariable operator-(const double,const ComplexVariable&);
        friend ComplexVariable operator-(const ComplexVariable&,const complex<double>);
        friend ComplexVariable operator-(const complex<double>,const ComplexVariable&);
      

        //multiplication
        friend ComplexVariable operator*(const ComplexVariable&,const ComplexVariable&);
        friend ComplexVariable operator*(const ComplexVariable&,const double);
        friend ComplexVariable operator*(const double,const ComplexVariable&);
        friend ComplexVariable operator*(const ComplexVariable&,const complex<double>);
        friend ComplexVariable operator*(const complex<double>,const ComplexVariable&);
    

        //division
        friend ComplexVariable operator/(const ComplexVariable&,const ComplexVariable&);
        friend ComplexVariable operator/(const ComplexVariable&,const double);
        friend ComplexVariable operator/(const double,const ComplexVariable&);
        friend ComplexVariable operator/(const ComplexVariable&,const complex<double>);
        friend ComplexVariable operator/(const complex<double>,const ComplexVariable&);
  

        //power 
        friend ComplexVariable operator^(const ComplexVariable&,const int);


        //equal
        friend ComplexVariable operator==(const ComplexVariable&,const ComplexVariable&);
        friend ComplexVariable operator==(const ComplexVariable&,const double);
        friend ComplexVariable operator==(const double,const ComplexVariable&);
        friend ComplexVariable operator==(const ComplexVariable&,const complex<double>);
        friend ComplexVariable operator==(const complex<double>,const ComplexVariable&);
       

    }; // end complex 

    double solve(const RealVariable&);
    double solve(const ComplexVariable&);
    ostream &operator<<(ostream&, complex<double>);
}
