#include <complex>

namespace solver{
    class RealVariable{
        public:
        
        
        friend RealVariable& operator*(int x ,RealVariable&){RealVariable y; return y;};
        friend RealVariable& operator-(RealVariable&, int x){RealVariable y; return y;};
        friend RealVariable& operator-(RealVariable&, RealVariable&){RealVariable y; return y;};
        friend RealVariable& operator+(int x, RealVariable&){RealVariable y; return y;};
        friend RealVariable& operator+(RealVariable&, RealVariable&){RealVariable y; return y;};
        friend RealVariable& operator+(RealVariable&, double x){RealVariable y; return y;};
        friend RealVariable& operator/(RealVariable&, double x){RealVariable y; return y;};
        friend RealVariable& operator^(RealVariable&, int x){RealVariable y; return y;};
        friend RealVariable& operator-(RealVariable&){};
        friend RealVariable& operator==(RealVariable&, int x){RealVariable y; return y;};
        friend RealVariable& operator==(RealVariable&, RealVariable&){RealVariable y; return y;};
    };

    double solve(RealVariable x);


    class ComplexVariable{
        public:

        friend ComplexVariable& operator*(int x ,ComplexVariable&){ComplexVariable y; return y;};
        friend ComplexVariable& operator-(ComplexVariable&, int x){ComplexVariable y; return y;};
        friend ComplexVariable& operator-(ComplexVariable&, ComplexVariable&){ComplexVariable y; return y;};
        friend ComplexVariable& operator+(int x, ComplexVariable&){ComplexVariable y; return y;};
        friend ComplexVariable& operator+(ComplexVariable&, ComplexVariable&){ComplexVariable y; return y;};
        friend ComplexVariable& operator+(ComplexVariable&, double x){ComplexVariable y; return y;};
        friend ComplexVariable& operator+(ComplexVariable&, std::complex<double> ){ComplexVariable y; return y;};
        friend ComplexVariable& operator/(ComplexVariable&, double x){ComplexVariable y; return y;};
        friend ComplexVariable& operator^(ComplexVariable&, int x){ComplexVariable y; return y;};
        friend ComplexVariable& operator-(ComplexVariable&){ComplexVariable y; return y;};
        friend ComplexVariable& operator==(ComplexVariable&, int x){ComplexVariable y; return y;};
        friend ComplexVariable& operator==(ComplexVariable&, ComplexVariable&){ComplexVariable y; return y;};


    };
    double solve(ComplexVariable x);
}